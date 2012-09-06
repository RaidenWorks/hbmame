/***************************************************************************

  video.c

  Functions to emulate the video hardware of the machine.

***************************************************************************/

#include "emu.h"
#include "includes/tankbatt.h"


/***************************************************************************

  Convert the color PROMs into a more useable format.

***************************************************************************/
PALETTE_INIT( tankbatt )
{
	const UINT8 *color_prom = machine.root_device().memregion("proms")->base();
	int i;

	#define RES_1	0xc0 /* this is a guess */
	#define RES_2	0x3f /* this is a guess */

	/* allocate the colortable */
	machine.colortable = colortable_alloc(machine, 0x100);

	/* create a lookup table for the palette */
	for (i = 0; i < 0x100; i++)
	{
		int bit0, bit1, bit2, bit3;
		int r, g, b;

		bit0 = (color_prom[i] >> 0) & 0x01; /* intensity */
		bit1 = (color_prom[i] >> 1) & 0x01; /* red */
		bit2 = (color_prom[i] >> 2) & 0x01; /* green */
		bit3 = (color_prom[i] >> 3) & 0x01; /* blue */

		/* red component */
		r = RES_1 * bit1;
		if (bit1) r += RES_2 * bit0;

		/* green component */
		g = RES_1 * bit2;
		if (bit2) g += RES_2 * bit0;

		/* blue component */
		b = RES_1 * bit3;
		if (bit3) b += RES_2 * bit0;

		colortable_palette_set_color(machine.colortable, i, MAKE_RGB(r, g, b));
	}

	for (i = 0; i < 0x200; i += 2)
	{
		colortable_entry_set_value(machine.colortable, i + 0, 0);
		colortable_entry_set_value(machine.colortable, i + 1, i >> 1);
	}
}

WRITE8_MEMBER(tankbatt_state::tankbatt_videoram_w)
{
	UINT8 *videoram = m_videoram;
	videoram[offset] = data;
	m_bg_tilemap->mark_tile_dirty(offset);
}

TILE_GET_INFO_MEMBER(tankbatt_state::get_bg_tile_info)
{
	UINT8 *videoram = m_videoram;
	int code = videoram[tile_index];
	int color = videoram[tile_index] | 0x01;

	SET_TILE_INFO_MEMBER(0, code, color, 0);
}

VIDEO_START( tankbatt )
{
	tankbatt_state *state = machine.driver_data<tankbatt_state>();
	state->m_bg_tilemap = &machine.tilemap().create(tilemap_get_info_delegate(FUNC(tankbatt_state::get_bg_tile_info),state), TILEMAP_SCAN_ROWS, 8, 8, 32, 32);
}

static void draw_bullets(running_machine &machine, bitmap_ind16 &bitmap, const rectangle &cliprect)
{
	tankbatt_state *state = machine.driver_data<tankbatt_state>();
	int offs;

	for (offs = 0;offs < state->m_bulletsram.bytes();offs += 2)
	{
		int color = 0xff;	/* cyan, same color as the tanks */
		int x = state->m_bulletsram[offs + 1];
		int y = 255 - state->m_bulletsram[offs] - 2;

		drawgfx_opaque(bitmap,cliprect,machine.gfx[1],
			0,	/* this is just a square, generated by the hardware */
			color,
			0,0,
			x,y);
	}
}

SCREEN_UPDATE_IND16( tankbatt )
{
	tankbatt_state *state = screen.machine().driver_data<tankbatt_state>();
	state->m_bg_tilemap->draw(bitmap, cliprect, 0, 0);
	draw_bullets(screen.machine(), bitmap, cliprect);
	return 0;
}
