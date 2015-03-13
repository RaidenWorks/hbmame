#include "../mame/drivers/midwunit.c"

ROM_START( umk3j )
	ROM_REGION16_LE( 0x800000, "dcs", ROMREGION_ERASEFF )	/* sound data */
	ROM_LOAD16_BYTE( "umk3-u2.bin",  0x000000, 0x100000, CRC(3838cfe5) SHA1(e3d2901f3bae1362742fc6ee0aa31c9f63b4dfa3) )
	ROM_LOAD16_BYTE( "umk3-u3.bin",  0x200000, 0x100000, CRC(856fe411) SHA1(6165ebecfce7500e948d84492ffa19eed7f47091) )
	ROM_LOAD16_BYTE( "umk3-u4.bin",  0x400000, 0x100000, CRC(428a406f) SHA1(e70ec83cd054de0da1e178720ed0035b8887f797) )
	ROM_LOAD16_BYTE( "umk3-u5.bin",  0x600000, 0x100000, CRC(3b98a09f) SHA1(edf1d02a56dcf3349e6b4bb4097acfe7592305f4) )

	ROM_REGION16_LE( 0x100000, "maincpu", 0 )	/* 34010 code */
	ROM_LOAD16_BYTE( "umk3j-u54.bin",  0x00000, 0x80000, CRC(7bd7de7b) SHA1(b1787f732c15ff217bdc9ed5f83dbf2589e32cfb) )
	ROM_LOAD16_BYTE( "umk3j-u63.bin",  0x00001, 0x80000, CRC(03ba8907) SHA1(8cf79dc054fe40bc28dbd74a6198468c9ae8c948) )

	ROM_REGION( 0x2000000, "gfxrom", 0 )
	ROM_LOAD32_BYTE( "mk3-u133.bin",  0x0000000, 0x100000, CRC(79b94667) SHA1(31bba640c351fdccc6685cadb74dd79a3f910ce8) )
	ROM_LOAD32_BYTE( "mk3-u132.bin",  0x0000001, 0x100000, CRC(13e95228) SHA1(405b05f5a5a55667c2be17d4b399129bdacefd90) )
	ROM_LOAD32_BYTE( "mk3-u131.bin",  0x0000002, 0x100000, CRC(41001e30) SHA1(2cec91116771951c0380cec5debf4cbb40c14c61) )
	ROM_LOAD32_BYTE( "mk3-u130.bin",  0x0000003, 0x100000, CRC(49379dd7) SHA1(e6dfab4e23d9cc38ae56c1bbf10ccd160e8fad5e) )

	ROM_LOAD32_BYTE( "mk3-u129.bin",  0x0400000, 0x100000, CRC(a8b41803) SHA1(9697e35e8bb51d6d36b1d7ae47377b446e57682f) )
	ROM_LOAD32_BYTE( "mk3-u128.bin",  0x0400001, 0x100000, CRC(b410d72f) SHA1(ac5c1c6f744186540f4ab100d9bd4ce6007e600b) )
	ROM_LOAD32_BYTE( "mk3-u127.bin",  0x0400002, 0x100000, CRC(bd985be7) SHA1(f5183abea2e5eb2c2c8cefa72c9ed321679f5128) )
	ROM_LOAD32_BYTE( "mk3-u126.bin",  0x0400003, 0x100000, CRC(e7c32cf4) SHA1(94ea7b2eed7dae66f5dd676c20d6b360140e3e0e) )

	ROM_LOAD32_BYTE( "mk3-u125.bin",  0x0800000, 0x100000, CRC(9a52227e) SHA1(0474a14fa8dbfea0b0889c1d1756b86391683558) )
	ROM_LOAD32_BYTE( "mk3-u124.bin",  0x0800001, 0x100000, CRC(5c750ebc) SHA1(45d68af1a56994376e086d840502453c8d6be700) )
	ROM_LOAD32_BYTE( "mk3-u123.bin",  0x0800002, 0x100000, CRC(f0ab88a8) SHA1(cdc9dc12e162255845c6627b1e35182b7e8502d0) )
	ROM_LOAD32_BYTE( "mk3-u122.bin",  0x0800003, 0x100000, CRC(9b87cdac) SHA1(a5f8db559293978f23e6f105543d8b2e170a2e0d) )

	ROM_LOAD32_BYTE( "umk3j-u121.bin",  0x0c00000, 0x100000, CRC(d17b30f3) SHA1(d9f65a475bea10aca7aae29dd32fc4b3fdd43aca) )
	ROM_LOAD32_BYTE( "umk3j-u120.bin",  0x0c00001, 0x100000, CRC(c80dbff9) SHA1(e8f903f276487b8aec899d5726b04bef38baf521) )
	ROM_LOAD32_BYTE( "umk3j-u119.bin",  0x0c00002, 0x100000, CRC(518f8083) SHA1(7e2f8e8a40224db00a658dc121df686492bd5d81) )
	ROM_LOAD32_BYTE( "umk3j-u118.bin",  0x0c00003, 0x100000, CRC(bbc57990) SHA1(fcf1a90a607d2a054aa633578671c688a8df580c) )

	ROM_LOAD32_BYTE( "umk-u113.bin",  0x1400000, 0x100000, CRC(99d74a1e) SHA1(ed3068afa98287ea290d1f537f5009d3b6d683da) )
	ROM_LOAD32_BYTE( "umk-u112.bin",  0x1400001, 0x100000, CRC(b5a46488) SHA1(dbf22e55d200eb9ff550f48b223cf0c6114a9357) )
	ROM_LOAD32_BYTE( "umk-u111.bin",  0x1400002, 0x100000, CRC(a87523c8) SHA1(e70b7599fef82001f762fc2c48f7b85474431ccc) )
	ROM_LOAD32_BYTE( "umk-u110.bin",  0x1400003, 0x100000, CRC(0038f205) SHA1(059c1c71a2d92ee6db36c09831d213a48a7e81d0) )
ROM_END

ROM_START( umk3z )
	ROM_REGION16_LE( 0x800000, "dcs", ROMREGION_ERASEFF )	/* sound data */
	ROM_LOAD16_BYTE( "umk3-u2.bin",  0x000000, 0x100000, CRC(3838cfe5) SHA1(e3d2901f3bae1362742fc6ee0aa31c9f63b4dfa3) )
	ROM_LOAD16_BYTE( "umk3-u3.bin",  0x200000, 0x100000, CRC(856fe411) SHA1(6165ebecfce7500e948d84492ffa19eed7f47091) )
	ROM_LOAD16_BYTE( "umk3-u4.bin",  0x400000, 0x100000, CRC(428a406f) SHA1(e70ec83cd054de0da1e178720ed0035b8887f797) )
	ROM_LOAD16_BYTE( "umk3-u5.bin",  0x600000, 0x100000, CRC(3b98a09f) SHA1(edf1d02a56dcf3349e6b4bb4097acfe7592305f4) )

	ROM_REGION16_LE( 0x100000, "maincpu", 0 )	/* 34010 code */
	ROM_LOAD16_BYTE( "umk3z-u54.bin",  0x00000, 0x80000, CRC(7ea6c327) SHA1(266f67302c8a98e96d077ba42bba47dbe5127882) )
	ROM_LOAD16_BYTE( "umk3z-u63.bin",  0x00001, 0x80000, CRC(51f66368) SHA1(a1e0142e39e123df0e4de525f62328d3c9049244) )

	ROM_REGION( 0x2000000, "gfxrom", 0 )
	ROM_LOAD32_BYTE( "mk3-u133.bin",  0x0000000, 0x100000, CRC(79b94667) SHA1(31bba640c351fdccc6685cadb74dd79a3f910ce8) )
	ROM_LOAD32_BYTE( "mk3-u132.bin",  0x0000001, 0x100000, CRC(13e95228) SHA1(405b05f5a5a55667c2be17d4b399129bdacefd90) )
	ROM_LOAD32_BYTE( "mk3-u131.bin",  0x0000002, 0x100000, CRC(41001e30) SHA1(2cec91116771951c0380cec5debf4cbb40c14c61) )
	ROM_LOAD32_BYTE( "mk3-u130.bin",  0x0000003, 0x100000, CRC(49379dd7) SHA1(e6dfab4e23d9cc38ae56c1bbf10ccd160e8fad5e) )

	ROM_LOAD32_BYTE( "mk3-u129.bin",  0x0400000, 0x100000, CRC(a8b41803) SHA1(9697e35e8bb51d6d36b1d7ae47377b446e57682f) )
	ROM_LOAD32_BYTE( "mk3-u128.bin",  0x0400001, 0x100000, CRC(b410d72f) SHA1(ac5c1c6f744186540f4ab100d9bd4ce6007e600b) )
	ROM_LOAD32_BYTE( "mk3-u127.bin",  0x0400002, 0x100000, CRC(bd985be7) SHA1(f5183abea2e5eb2c2c8cefa72c9ed321679f5128) )
	ROM_LOAD32_BYTE( "mk3-u126.bin",  0x0400003, 0x100000, CRC(e7c32cf4) SHA1(94ea7b2eed7dae66f5dd676c20d6b360140e3e0e) )

	ROM_LOAD32_BYTE( "mk3-u125.bin",  0x0800000, 0x100000, CRC(9a52227e) SHA1(0474a14fa8dbfea0b0889c1d1756b86391683558) )
	ROM_LOAD32_BYTE( "mk3-u124.bin",  0x0800001, 0x100000, CRC(5c750ebc) SHA1(45d68af1a56994376e086d840502453c8d6be700) )
	ROM_LOAD32_BYTE( "mk3-u123.bin",  0x0800002, 0x100000, CRC(f0ab88a8) SHA1(cdc9dc12e162255845c6627b1e35182b7e8502d0) )
	ROM_LOAD32_BYTE( "mk3-u122.bin",  0x0800003, 0x100000, CRC(9b87cdac) SHA1(a5f8db559293978f23e6f105543d8b2e170a2e0d) )

	ROM_LOAD32_BYTE( "umk-u121.bin",  0x0c00000, 0x100000, CRC(cc4b95db) SHA1(3d53180eec649e9616c4b87db55573f12d9bfee3) )
	ROM_LOAD32_BYTE( "umk-u120.bin",  0x0c00001, 0x100000, CRC(1c8144cd) SHA1(77cdc1eaf630ccb7233f5532f8b08191d00f0816) )
	ROM_LOAD32_BYTE( "umk-u119.bin",  0x0c00002, 0x100000, CRC(5f10c543) SHA1(24dc83b7aa531ebd399258ffa7b2e028f1c4a28e) )
	ROM_LOAD32_BYTE( "umk-u118.bin",  0x0c00003, 0x100000, CRC(de0c4488) SHA1(227cab34798c440b2a45223567113df5f17d913f) )

	ROM_LOAD32_BYTE( "umk-u113.bin",  0x1400000, 0x100000, CRC(99d74a1e) SHA1(ed3068afa98287ea290d1f537f5009d3b6d683da) )
	ROM_LOAD32_BYTE( "umk-u112.bin",  0x1400001, 0x100000, CRC(b5a46488) SHA1(dbf22e55d200eb9ff550f48b223cf0c6114a9357) )
	ROM_LOAD32_BYTE( "umk-u111.bin",  0x1400002, 0x100000, CRC(a87523c8) SHA1(e70b7599fef82001f762fc2c48f7b85474431ccc) )
	ROM_LOAD32_BYTE( "umk-u110.bin",  0x1400003, 0x100000, CRC(0038f205) SHA1(059c1c71a2d92ee6db36c09831d213a48a7e81d0) )
ROM_END

ROM_START( umk3te )
	ROM_REGION16_LE( 0x800000, "dcs", ROMREGION_ERASEFF )   /* sound data */
	ROM_LOAD16_BYTE( "umk3-u2.bin", 0x000000, 0x100000, CRC(3838cfe5) SHA1(e3d2901f3bae1362742fc6ee0aa31c9f63b4dfa3) )
	ROM_LOAD16_BYTE( "mk3-u3.bin",  0x200000, 0x100000, CRC(856fe411) SHA1(6165ebecfce7500e948d84492ffa19eed7f47091) )
	ROM_LOAD16_BYTE( "mk3-u4.bin",  0x400000, 0x100000, CRC(428a406f) SHA1(e70ec83cd054de0da1e178720ed0035b8887f797) )
	ROM_LOAD16_BYTE( "mk3-u5.bin",  0x600000, 0x100000, CRC(3b98a09f) SHA1(edf1d02a56dcf3349e6b4bb4097acfe7592305f4) )

	ROM_REGION16_LE( 0x100000, "maincpu", 0 )   /* 34010 code */
	ROM_LOAD16_BYTE( "um312te.u54",  0x00000, 0x80000, CRC(6ff000b4) SHA1(4953bf5275e3bbabbd20c3114e8a0be5d10a0176) )
	ROM_LOAD16_BYTE( "um312te.u63",  0x00001, 0x80000, CRC(524b4033) SHA1(c3c16dbc83dfa49a80aa440ec6a4f121371bccd6) )

	ROM_REGION( 0x2000000, "gfxrom", 0 )
	ROM_LOAD32_BYTE( "mk3-u133.bin",  0x0000000, 0x100000, CRC(79b94667) SHA1(31bba640c351fdccc6685cadb74dd79a3f910ce8) )
	ROM_LOAD32_BYTE( "mk3-u132.bin",  0x0000001, 0x100000, CRC(13e95228) SHA1(405b05f5a5a55667c2be17d4b399129bdacefd90) )
	ROM_LOAD32_BYTE( "mk3-u131.bin",  0x0000002, 0x100000, CRC(41001e30) SHA1(2cec91116771951c0380cec5debf4cbb40c14c61) )
	ROM_LOAD32_BYTE( "mk3-u130.bin",  0x0000003, 0x100000, CRC(49379dd7) SHA1(e6dfab4e23d9cc38ae56c1bbf10ccd160e8fad5e) )

	ROM_LOAD32_BYTE( "mk3-u129.bin",  0x0400000, 0x100000, CRC(a8b41803) SHA1(9697e35e8bb51d6d36b1d7ae47377b446e57682f) )
	ROM_LOAD32_BYTE( "mk3-u128.bin",  0x0400001, 0x100000, CRC(b410d72f) SHA1(ac5c1c6f744186540f4ab100d9bd4ce6007e600b) )
	ROM_LOAD32_BYTE( "mk3-u127.bin",  0x0400002, 0x100000, CRC(bd985be7) SHA1(f5183abea2e5eb2c2c8cefa72c9ed321679f5128) )
	ROM_LOAD32_BYTE( "mk3-u126.bin",  0x0400003, 0x100000, CRC(e7c32cf4) SHA1(94ea7b2eed7dae66f5dd676c20d6b360140e3e0e) )

	ROM_LOAD32_BYTE( "mk3-u125.bin",  0x0800000, 0x100000, CRC(9a52227e) SHA1(0474a14fa8dbfea0b0889c1d1756b86391683558) )
	ROM_LOAD32_BYTE( "mk3-u124.bin",  0x0800001, 0x100000, CRC(5c750ebc) SHA1(45d68af1a56994376e086d840502453c8d6be700) )
	ROM_LOAD32_BYTE( "mk3-u123.bin",  0x0800002, 0x100000, CRC(f0ab88a8) SHA1(cdc9dc12e162255845c6627b1e35182b7e8502d0) )
	ROM_LOAD32_BYTE( "mk3-u122.bin",  0x0800003, 0x100000, CRC(9b87cdac) SHA1(a5f8db559293978f23e6f105543d8b2e170a2e0d) )

	ROM_LOAD32_BYTE( "umk-u121.bin",  0x0c00000, 0x100000, CRC(cc4b95db) SHA1(3d53180eec649e9616c4b87db55573f12d9bfee3) )
	ROM_LOAD32_BYTE( "umk-u120.bin",  0x0c00001, 0x100000, CRC(1c8144cd) SHA1(77cdc1eaf630ccb7233f5532f8b08191d00f0816) )
	ROM_LOAD32_BYTE( "umk-u119.bin",  0x0c00002, 0x100000, CRC(5f10c543) SHA1(24dc83b7aa531ebd399258ffa7b2e028f1c4a28e) )
	ROM_LOAD32_BYTE( "umk-u118.bin",  0x0c00003, 0x100000, CRC(de0c4488) SHA1(227cab34798c440b2a45223567113df5f17d913f) )

	ROM_LOAD32_BYTE( "umk-u113.bin",  0x1400000, 0x100000, CRC(99d74a1e) SHA1(ed3068afa98287ea290d1f537f5009d3b6d683da) )
	ROM_LOAD32_BYTE( "umk-u112.bin",  0x1400001, 0x100000, CRC(b5a46488) SHA1(dbf22e55d200eb9ff550f48b223cf0c6114a9357) )
	ROM_LOAD32_BYTE( "umk-u111.bin",  0x1400002, 0x100000, CRC(a87523c8) SHA1(e70b7599fef82001f762fc2c48f7b85474431ccc) )
	ROM_LOAD32_BYTE( "umk-u110.bin",  0x1400003, 0x100000, CRC(0038f205) SHA1(059c1c71a2d92ee6db36c09831d213a48a7e81d0) )
ROM_END


GAME( 2010, umk3j,  mk3, wunit, mk3, midwunit_state, umk3, ROT0, "Midway", "Ultimate Mortal Kombat 3 (rev 1.2) Juggernauts Hack v1.0", GAME_SUPPORTS_SAVE )
GAME( 2009, umk3z,  mk3, wunit, mk3, midwunit_state, umk3, ROT0, "Midway", "Ultimate Mortal Kombat 3 (rev 1.2) Zeus hack", GAME_SUPPORTS_SAVE )
GAME( 2014, umk3te, mk3, wunit, mk3, midwunit_state, umk3, ROT0, "Midway", "Ultimate Mortal Kombat 3 Tournament Edition (2.0.032b8)", GAME_SUPPORTS_SAVE )
