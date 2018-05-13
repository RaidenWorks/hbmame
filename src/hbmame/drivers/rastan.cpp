// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/rastan.cpp"

ROM_START( rastwack )
	ROM_REGION( 0x60000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "rs19_38.bin",    0x00000, 0x10000, CRC(a38ac909) SHA1(66d792fee03c6bd87d15060b9d5cae74137c5ebd) )
	ROM_LOAD16_BYTE( "wk_rs07_37.bin", 0x00001, 0x10000, CRC(bad60872) SHA1(e020f79b3ac3d2abccfcd5d135d2dc49e1335c7d) )
	ROM_LOAD16_BYTE( "wk_rs20_40.bin", 0x20000, 0x10000, CRC(6bcf70dc) SHA1(3e369548ac01981c503150b44c2747e6c2cec12a) )
	ROM_LOAD16_BYTE( "wk_rs08_39.bin", 0x20001, 0x10000, CRC(8838ecc5) SHA1(42b43ab77969bbacdf178fbe73a0a27652ccb297) )
	ROM_LOAD16_BYTE( "wk_rs21_42.bin", 0x40000, 0x10000, CRC(b626c439) SHA1(976e820edc4ba107c5b579edaaee1e354e85fb67) )
	ROM_LOAD16_BYTE( "wk_rs09_43.bin", 0x40001, 0x10000, CRC(c928a516) SHA1(fe87fdf2d1b7ba93e1986460eb6af648b58f42e4) )

	ROM_REGION( 0x1c000, "audiocpu", 0 )
	ROM_LOAD( "b04-19.49",  0x00000, 0x4000, CRC(ee81fdd8) SHA1(fa59dac2583a7d2979550dffc6f9c6c2bd67bfd5) )
	ROM_CONTINUE(           0x10000, 0xc000 )

	ROM_REGION( 0x080000, "gfx1", 0 )
	ROM_LOAD( "wk_ic40_01.bin",   0x00000, 0x20000, CRC(f2111c1f) SHA1(bfdb46aeffe3f08fd5095440a7fa439f52d93d92) )
	ROM_LOAD( "wk_ic39_03.bin",   0x20000, 0x20000, CRC(a25b10c1) SHA1(6a163e12e00b599cf8430d73e39b5a47a94db41e) )
	ROM_LOAD( "wk_ic67_02.bin",   0x40000, 0x20000, CRC(a465449c) SHA1(7cae41f4c64641fb6ed8115ae7b934c013b964b2) )
	ROM_LOAD( "wk_ic66_04.bin",   0x60000, 0x20000, CRC(9d4f8e36) SHA1(4f6634a5c2eeb7be4582f0a2596bb7caa7fddac3) )

	ROM_REGION( 0x080000, "gfx2", 0 )
	ROM_LOAD( "wk_ic15_05.bin",   0x00000, 0x20000, CRC(edc6f1bb) SHA1(567e88a4e2bfc39e9f056a9c3aa735297363a376) )
	ROM_LOAD( "wk_ic14_07.bin",   0x20000, 0x20000, CRC(c672101c) SHA1(5759adc762f9cffb85175ee66c237a195dc2b656) )
	ROM_LOAD( "wk_ic28_06.bin",   0x40000, 0x20000, CRC(f6ada09a) SHA1(6ddc23f2499164d4a403d4c519e9b14492a1604b) )
	ROM_LOAD( "wk_ic27_08.bin",   0x60000, 0x20000, CRC(533d567e) SHA1(e61082c4c3e9d1422ff01646bb5fded9fda96f65) )

	ROM_REGION( 0x10000, "adpcm", 0 )
	ROM_LOAD( "b04-20.76",        0x0000, 0x10000, CRC(fd1a34cc) SHA1(b1682959521fa295769207b75cf7d839e9ec95fd) )
ROM_END

ROM_START( rastandh )
	ROM_REGION( 0x60000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "b04-38.19", 0x00000, 0x10000, CRC(1c91dbb1) SHA1(17fc55e8546cc0b847aebd67fb4570a1e9f128f3) )
	ROM_LOAD16_BYTE( "b04-37.7",  0x00001, 0x10000, CRC(ecf20bdd) SHA1(92e46b1edef40a19be17091c09daba598d77bca8) )
	ROM_LOAD16_BYTE( "dh_ic20_40.bin", 0x20000, 0x10000, CRC(8f1ab70d) SHA1(58356b1b02d7c7de9f59bb8413782f655ebf0012) )
	ROM_LOAD16_BYTE( "dh_ic08_39.bin", 0x20001, 0x10000, CRC(553a1ed8) SHA1(ef872bcdf681dd5f723907da3a36c065b618c563) )
	ROM_LOAD16_BYTE( "dh_ic21_42.bin", 0x40000, 0x10000, CRC(08dc89b1) SHA1(836d87bcf2a12586722867fdd7d0d65f823008b7) )
	ROM_LOAD16_BYTE( "dh_ic09_43.bin", 0x40001, 0x10000, CRC(a93fc337) SHA1(4117a31e3844cc981cae4323dd4c8878b1f77eb1) )

	ROM_REGION( 0x1c000, "audiocpu", 0 )
	ROM_LOAD( "b04-19.49",   0x00000, 0x4000, CRC(ee81fdd8) SHA1(fa59dac2583a7d2979550dffc6f9c6c2bd67bfd5) )
	ROM_CONTINUE(            0x10000, 0xc000 )

	ROM_REGION( 0x080000, "gfx1", 0 )
	ROM_LOAD( "b04-01.40",  0x00000, 0x20000, CRC(cd30de19) SHA1(f8d158d38cd07a24cb5ddefd4ce90beec706924d) )
	ROM_LOAD( "b04-03.39",  0x20000, 0x20000, CRC(ab67e064) SHA1(5c49f0ff9221cba9f2bb8da86eb4448c73012410) )
	ROM_LOAD( "b04-02.67",  0x40000, 0x20000, CRC(54040fec) SHA1(a2bea2ce1cebd25b33be41723299ca0512d95f9e) )
	ROM_LOAD( "b04-04.66",  0x60000, 0x20000, CRC(94737e93) SHA1(3df7f085fe6468bda11fab2e86252df6f74f7a99) )

	ROM_REGION( 0x080000, "gfx2", 0 )
	ROM_LOAD( "b04-05.15",  0x00000, 0x20000, CRC(c22d94ac) SHA1(04f69f9af7ac4242e95dba32988afa3616d75a92) )
	ROM_LOAD( "b04-07.14",  0x20000, 0x20000, CRC(b5632a51) SHA1(da6ebe6afe245443a76b33714213549356c0c5c3) )
	ROM_LOAD( "b04-06.28",  0x40000, 0x20000, CRC(002ccf39) SHA1(fdc29f39198f9b488e298ee89b0eeb3417527733) )
	ROM_LOAD( "b04-08.27",  0x60000, 0x20000, CRC(feafca05) SHA1(9de9ff1fcf037e5ab25c181b678245041238d6ae) )

	ROM_REGION( 0x10000, "adpcm", 0 )
	ROM_LOAD( "b04-20.76", 0x0000, 0x10000, CRC(fd1a34cc) SHA1(b1682959521fa295769207b75cf7d839e9ec95fd) )
ROM_END

ROM_START( rastand2 )
	ROM_REGION( 0x60000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "b04-38.19", 0x00000, 0x10000, CRC(1c91dbb1) SHA1(17fc55e8546cc0b847aebd67fb4570a1e9f128f3) )
	ROM_LOAD16_BYTE( "b04-37.7",  0x00001, 0x10000, CRC(ecf20bdd) SHA1(92e46b1edef40a19be17091c09daba598d77bca8) )
	ROM_LOAD16_BYTE( "dh_ic20_40.bin", 0x20000, 0x10000, CRC(8f1ab70d) SHA1(58356b1b02d7c7de9f59bb8413782f655ebf0012) )
	ROM_LOAD16_BYTE( "dh_ic08_39.bin", 0x20001, 0x10000, CRC(553a1ed8) SHA1(ef872bcdf681dd5f723907da3a36c065b618c563) )
	ROM_LOAD16_BYTE( "b04-42.21", 0x40000, 0x10000, CRC(1857a7cb) SHA1(7d967d04ade648c6ddb19aad9e184b6e272856da) )
	ROM_LOAD16_BYTE( "d2_ic09_43.bin", 0x40001, 0x10000, CRC(e08d2b2d) SHA1(917017bdc64dc2d1ba15534baef80e581cacf7c1) )

	ROM_REGION( 0x1c000, "audiocpu", 0 )
	ROM_LOAD( "b04-19.49",   0x00000, 0x4000, CRC(ee81fdd8) SHA1(fa59dac2583a7d2979550dffc6f9c6c2bd67bfd5) )
	ROM_CONTINUE(            0x10000, 0xc000 )

	ROM_REGION( 0x080000, "gfx1", 0 )
	ROM_LOAD( "b04-01.40",  0x00000, 0x20000, CRC(cd30de19) SHA1(f8d158d38cd07a24cb5ddefd4ce90beec706924d) )
	ROM_LOAD( "b04-03.39",  0x20000, 0x20000, CRC(ab67e064) SHA1(5c49f0ff9221cba9f2bb8da86eb4448c73012410) )
	ROM_LOAD( "b04-02.67",  0x40000, 0x20000, CRC(54040fec) SHA1(a2bea2ce1cebd25b33be41723299ca0512d95f9e) )
	ROM_LOAD( "b04-04.66",  0x60000, 0x20000, CRC(94737e93) SHA1(3df7f085fe6468bda11fab2e86252df6f74f7a99) )

	ROM_REGION( 0x080000, "gfx2", 0 )
	ROM_LOAD( "b04-05.15",  0x00000, 0x20000, CRC(c22d94ac) SHA1(04f69f9af7ac4242e95dba32988afa3616d75a92) )
	ROM_LOAD( "b04-07.14",  0x20000, 0x20000, CRC(b5632a51) SHA1(da6ebe6afe245443a76b33714213549356c0c5c3) )
	ROM_LOAD( "b04-06.28",  0x40000, 0x20000, CRC(002ccf39) SHA1(fdc29f39198f9b488e298ee89b0eeb3417527733) )
	ROM_LOAD( "b04-08.27",  0x60000, 0x20000, CRC(feafca05) SHA1(9de9ff1fcf037e5ab25c181b678245041238d6ae) )

	ROM_REGION( 0x10000, "adpcm", 0 )
	ROM_LOAD( "b04-20.76", 0x0000, 0x10000, CRC(fd1a34cc) SHA1(b1682959521fa295769207b75cf7d839e9ec95fd) )
ROM_END

ROM_START( rastaneh )
	ROM_REGION( 0x60000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "b04-38.19", 0x00000, 0x10000, CRC(1c91dbb1) SHA1(17fc55e8546cc0b847aebd67fb4570a1e9f128f3) )
	ROM_LOAD16_BYTE( "b04-37.7",  0x00001, 0x10000, CRC(ecf20bdd) SHA1(92e46b1edef40a19be17091c09daba598d77bca8) )
	ROM_LOAD16_BYTE( "dh_ic20_40.bin", 0x20000, 0x10000, CRC(8f1ab70d) SHA1(58356b1b02d7c7de9f59bb8413782f655ebf0012) )
	ROM_LOAD16_BYTE( "dh_ic08_39.bin", 0x20001, 0x10000, CRC(553a1ed8) SHA1(ef872bcdf681dd5f723907da3a36c065b618c563) )
	ROM_LOAD16_BYTE( "b04-42.21", 0x40000, 0x10000, CRC(1857a7cb) SHA1(7d967d04ade648c6ddb19aad9e184b6e272856da) )
	ROM_LOAD16_BYTE( "eh_ic09_43.bin", 0x40001, 0x10000, CRC(71037966) SHA1(f32d87a47535c6eae9016b7cc027d347236c217e) )

	ROM_REGION( 0x1c000, "audiocpu", 0 )
	ROM_LOAD( "b04-19.49",   0x00000, 0x4000, CRC(ee81fdd8) SHA1(fa59dac2583a7d2979550dffc6f9c6c2bd67bfd5) )
	ROM_CONTINUE(            0x10000, 0xc000 )

	ROM_REGION( 0x080000, "gfx1", 0 )
	ROM_LOAD( "b04-01.40",  0x00000, 0x20000, CRC(cd30de19) SHA1(f8d158d38cd07a24cb5ddefd4ce90beec706924d) )
	ROM_LOAD( "b04-03.39",  0x20000, 0x20000, CRC(ab67e064) SHA1(5c49f0ff9221cba9f2bb8da86eb4448c73012410) )
	ROM_LOAD( "b04-02.67",  0x40000, 0x20000, CRC(54040fec) SHA1(a2bea2ce1cebd25b33be41723299ca0512d95f9e) )
	ROM_LOAD( "b04-04.66",  0x60000, 0x20000, CRC(94737e93) SHA1(3df7f085fe6468bda11fab2e86252df6f74f7a99) )

	ROM_REGION( 0x080000, "gfx2", 0 )
	ROM_LOAD( "b04-05.15",  0x00000, 0x20000, CRC(c22d94ac) SHA1(04f69f9af7ac4242e95dba32988afa3616d75a92) )
	ROM_LOAD( "b04-07.14",  0x20000, 0x20000, CRC(b5632a51) SHA1(da6ebe6afe245443a76b33714213549356c0c5c3) )
	ROM_LOAD( "b04-06.28",  0x40000, 0x20000, CRC(002ccf39) SHA1(fdc29f39198f9b488e298ee89b0eeb3417527733) )
	ROM_LOAD( "b04-08.27",  0x60000, 0x20000, CRC(feafca05) SHA1(9de9ff1fcf037e5ab25c181b678245041238d6ae) )

	ROM_REGION( 0x10000, "adpcm", 0 )
	ROM_LOAD( "b04-20.76", 0x0000, 0x10000, CRC(fd1a34cc) SHA1(b1682959521fa295769207b75cf7d839e9ec95fd) )
ROM_END

ROM_START( rastane2 )
	ROM_REGION( 0x60000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "b04-38.19", 0x00000, 0x10000, CRC(1c91dbb1) SHA1(17fc55e8546cc0b847aebd67fb4570a1e9f128f3) )
	ROM_LOAD16_BYTE( "b04-37.7",  0x00001, 0x10000, CRC(ecf20bdd) SHA1(92e46b1edef40a19be17091c09daba598d77bca8) )
	ROM_LOAD16_BYTE( "dh_ic20_40.bin", 0x20000, 0x10000, CRC(8f1ab70d) SHA1(58356b1b02d7c7de9f59bb8413782f655ebf0012) )
	ROM_LOAD16_BYTE( "dh_ic08_39.bin", 0x20001, 0x10000, CRC(553a1ed8) SHA1(ef872bcdf681dd5f723907da3a36c065b618c563) )
	ROM_LOAD16_BYTE( "e2_ic21_42.bin", 0x40000, 0x10000, CRC(27845873) SHA1(b6197e15ee2655135d0fc8e72cc44fa3bcc73c10) )
	ROM_LOAD16_BYTE( "e2_ic09_43.bin", 0x40001, 0x10000, CRC(a38131f3) SHA1(f46cda36d698c688f1b1bfee9945915194a30ebd) )

	ROM_REGION( 0x1c000, "audiocpu", 0 )
	ROM_LOAD( "b04-19.49",    0x00000, 0x4000, CRC(ee81fdd8) SHA1(fa59dac2583a7d2979550dffc6f9c6c2bd67bfd5) )
	ROM_CONTINUE(               0x10000, 0xc000 )

	ROM_REGION( 0x080000, "gfx1", 0 )
	ROM_LOAD( "b04-01.40",  0x00000, 0x20000, CRC(cd30de19) SHA1(f8d158d38cd07a24cb5ddefd4ce90beec706924d) )
	ROM_LOAD( "b04-03.39",  0x20000, 0x20000, CRC(ab67e064) SHA1(5c49f0ff9221cba9f2bb8da86eb4448c73012410) )
	ROM_LOAD( "b04-02.67",  0x40000, 0x20000, CRC(54040fec) SHA1(a2bea2ce1cebd25b33be41723299ca0512d95f9e) )
	ROM_LOAD( "b04-04.66",  0x60000, 0x20000, CRC(94737e93) SHA1(3df7f085fe6468bda11fab2e86252df6f74f7a99) )

	ROM_REGION( 0x080000, "gfx2", 0 )
	ROM_LOAD( "b04-05.15",  0x00000, 0x20000, CRC(c22d94ac) SHA1(04f69f9af7ac4242e95dba32988afa3616d75a92) )
	ROM_LOAD( "b04-07.14",  0x20000, 0x20000, CRC(b5632a51) SHA1(da6ebe6afe245443a76b33714213549356c0c5c3) )
	ROM_LOAD( "b04-06.28",  0x40000, 0x20000, CRC(002ccf39) SHA1(fdc29f39198f9b488e298ee89b0eeb3417527733) )
	ROM_LOAD( "b04-08.27",  0x60000, 0x20000, CRC(feafca05) SHA1(9de9ff1fcf037e5ab25c181b678245041238d6ae) )

	ROM_REGION( 0x10000, "adpcm", 0 )
	ROM_LOAD( "b04-20.76", 0x0000, 0x10000, CRC(fd1a34cc) SHA1(b1682959521fa295769207b75cf7d839e9ec95fd) )
ROM_END


HACK( 2000, rastwack, rastan, rastan, rastsaga, rastan_state,  0, ROT0, "Vogel", "Wacky Rastan", MACHINE_SUPPORTS_SAVE )
HACK( 2001, rastandh, rastan, rastan, rastsaga, rastan_state,  0, ROT0, "Neil Pearce", "Rastan Dragon Hack", MACHINE_SUPPORTS_SAVE )
HACK( 2001, rastand2, rastan, rastan, rastsaga, rastan_state,  0, ROT0, "Neil Pearce", "Rastan Dragon Hack (set 2)", MACHINE_SUPPORTS_SAVE )
HACK( 2001, rastaneh, rastan, rastan, rastsaga, rastan_state,  0, ROT0, "Neil Pearce", "Rastan Enemy Hack", MACHINE_SUPPORTS_SAVE )
HACK( 2001, rastane2, rastan, rastan, rastsaga, rastan_state,  0, ROT0, "Neil Pearce", "Rastan Enemy Hack (set 2)", MACHINE_SUPPORTS_SAVE )
