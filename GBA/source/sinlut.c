////////////////////////////////////////////////////////////
//	File Name:		sinLut.c
//	Description:	A sin lookup table, 512 entries, 12 fixeds
//	Author:			Zack Raeburn
////////////////////////////////////////////////////////////

const short sin_lut[512]=
{
	0x0000, 0x0032, 0x0064, 0x0096, 0x00c8, 0x00fb, 0x012d, 0x015f, 
	0x0191, 0x01c3, 0x01f5, 0x0227, 0x0259, 0x028a, 0x02bc, 0x02ed, 
	0x031f, 0x0350, 0x0381, 0x03b2, 0x03e3, 0x0413, 0x0444, 0x0474, 
	0x04a5, 0x04d5, 0x0504, 0x0534, 0x0563, 0x0593, 0x05c2, 0x05f0, 
	0x061f, 0x064d, 0x067b, 0x06a9, 0x06d7, 0x0704, 0x0731, 0x075e, 
	0x078a, 0x07b7, 0x07e2, 0x080e, 0x0839, 0x0864, 0x088f, 0x08b9, 
	0x08e3, 0x090d, 0x0936, 0x095f, 0x0987, 0x09b0, 0x09d7, 0x09ff, 
	0x0a26, 0x0a4d, 0x0a73, 0x0a99, 0x0abe, 0x0ae3, 0x0b08, 0x0b2c, 
	0x0b50, 0x0b73, 0x0b96, 0x0bb8, 0x0bda, 0x0bfc, 0x0c1d, 0x0c3e, 
	0x0c5e, 0x0c7d, 0x0c9d, 0x0cbb, 0x0cd9, 0x0cf7, 0x0d14, 0x0d31, 
	0x0d4d, 0x0d69, 0x0d84, 0x0d9f, 0x0db9, 0x0dd2, 0x0deb, 0x0e04, 
	0x0e1c, 0x0e33, 0x0e4a, 0x0e60, 0x0e76, 0x0e8b, 0x0ea0, 0x0eb4, 
	0x0ec8, 0x0edb, 0x0eed, 0x0eff, 0x0f10, 0x0f21, 0x0f31, 0x0f40, 
	0x0f4f, 0x0f5d, 0x0f6b, 0x0f78, 0x0f85, 0x0f91, 0x0f9c, 0x0fa7, 
	0x0fb1, 0x0fba, 0x0fc3, 0x0fcb, 0x0fd3, 0x0fda, 0x0fe1, 0x0fe7, 
	0x0fec, 0x0ff0, 0x0ff4, 0x0ff8, 0x0ffb, 0x0ffd, 0x0ffe, 0x0fff, 
	0x1000, 0x0fff, 0x0ffe, 0x0ffd, 0x0ffb, 0x0ff8, 0x0ff4, 0x0ff0, 
	0x0fec, 0x0fe7, 0x0fe1, 0x0fda, 0x0fd3, 0x0fcb, 0x0fc3, 0x0fba, 
	0x0fb1, 0x0fa7, 0x0f9c, 0x0f91, 0x0f85, 0x0f78, 0x0f6b, 0x0f5d, 
	0x0f4f, 0x0f40, 0x0f31, 0x0f21, 0x0f10, 0x0eff, 0x0eed, 0x0edb, 
	0x0ec8, 0x0eb4, 0x0ea0, 0x0e8b, 0x0e76, 0x0e60, 0x0e4a, 0x0e33, 
	0x0e1c, 0x0e04, 0x0deb, 0x0dd2, 0x0db9, 0x0d9f, 0x0d84, 0x0d69, 
	0x0d4d, 0x0d31, 0x0d14, 0x0cf7, 0x0cd9, 0x0cbb, 0x0c9d, 0x0c7d, 
	0x0c5e, 0x0c3e, 0x0c1d, 0x0bfc, 0x0bda, 0x0bb8, 0x0b96, 0x0b73, 
	0x0b50, 0x0b2c, 0x0b08, 0x0ae3, 0x0abe, 0x0a99, 0x0a73, 0x0a4d, 
	0x0a26, 0x09ff, 0x09d7, 0x09b0, 0x0987, 0x095f, 0x0936, 0x090d, 
	0x08e3, 0x08b9, 0x088f, 0x0864, 0x0839, 0x080e, 0x07e2, 0x07b7, 
	0x078a, 0x075e, 0x0731, 0x0704, 0x06d7, 0x06a9, 0x067b, 0x064d, 
	0x061f, 0x05f0, 0x05c2, 0x0593, 0x0563, 0x0534, 0x0504, 0x04d5, 
	0x04a5, 0x0474, 0x0444, 0x0413, 0x03e3, 0x03b2, 0x0381, 0x0350, 
	0x031f, 0x02ed, 0x02bc, 0x028a, 0x0259, 0x0227, 0x01f5, 0x01c3, 
	0x0191, 0x015f, 0x012d, 0x00fb, 0x00c8, 0x0096, 0x0064, 0x0032, 
	0x0000, 0xffce, 0xff9c, 0xff6a, 0xff38, 0xff05, 0xfed3, 0xfea1, 
	0xfe6f, 0xfe3d, 0xfe0b, 0xfdd9, 0xfda7, 0xfd76, 0xfd44, 0xfd13, 
	0xfce1, 0xfcb0, 0xfc7f, 0xfc4e, 0xfc1d, 0xfbed, 0xfbbc, 0xfb8c, 
	0xfb5b, 0xfb2b, 0xfafc, 0xfacc, 0xfa9d, 0xfa6d, 0xfa3e, 0xfa10, 
	0xf9e1, 0xf9b3, 0xf985, 0xf957, 0xf929, 0xf8fc, 0xf8cf, 0xf8a2, 
	0xf876, 0xf849, 0xf81e, 0xf7f2, 0xf7c7, 0xf79c, 0xf771, 0xf747, 
	0xf71d, 0xf6f3, 0xf6ca, 0xf6a1, 0xf679, 0xf650, 0xf629, 0xf601, 
	0xf5da, 0xf5b3, 0xf58d, 0xf567, 0xf542, 0xf51d, 0xf4f8, 0xf4d4, 
	0xf4b0, 0xf48d, 0xf46a, 0xf448, 0xf426, 0xf404, 0xf3e3, 0xf3c2, 
	0xf3a2, 0xf383, 0xf363, 0xf345, 0xf327, 0xf309, 0xf2ec, 0xf2cf, 
	0xf2b3, 0xf297, 0xf27c, 0xf261, 0xf247, 0xf22e, 0xf215, 0xf1fc, 
	0xf1e4, 0xf1cd, 0xf1b6, 0xf1a0, 0xf18a, 0xf175, 0xf160, 0xf14c, 
	0xf138, 0xf125, 0xf113, 0xf101, 0xf0f0, 0xf0df, 0xf0cf, 0xf0c0, 
	0xf0b1, 0xf0a3, 0xf095, 0xf088, 0xf07b, 0xf06f, 0xf064, 0xf059, 
	0xf04f, 0xf046, 0xf03d, 0xf035, 0xf02d, 0xf026, 0xf01f, 0xf019, 
	0xf014, 0xf010, 0xf00c, 0xf008, 0xf005, 0xf003, 0xf002, 0xf001, 
	0xf000, 0xf001, 0xf002, 0xf003, 0xf005, 0xf008, 0xf00c, 0xf010, 
	0xf014, 0xf019, 0xf01f, 0xf026, 0xf02d, 0xf035, 0xf03d, 0xf046, 
	0xf04f, 0xf059, 0xf064, 0xf06f, 0xf07b, 0xf088, 0xf095, 0xf0a3, 
	0xf0b1, 0xf0c0, 0xf0cf, 0xf0df, 0xf0f0, 0xf101, 0xf113, 0xf125, 
	0xf138, 0xf14c, 0xf160, 0xf175, 0xf18a, 0xf1a0, 0xf1b6, 0xf1cd, 
	0xf1e4, 0xf1fc, 0xf215, 0xf22e, 0xf247, 0xf261, 0xf27c, 0xf297, 
	0xf2b3, 0xf2cf, 0xf2ec, 0xf309, 0xf327, 0xf345, 0xf363, 0xf383, 
	0xf3a2, 0xf3c2, 0xf3e3, 0xf404, 0xf426, 0xf448, 0xf46a, 0xf48d, 
	0xf4b0, 0xf4d4, 0xf4f8, 0xf51d, 0xf542, 0xf567, 0xf58d, 0xf5b3, 
	0xf5da, 0xf601, 0xf629, 0xf650, 0xf679, 0xf6a1, 0xf6ca, 0xf6f3, 
	0xf71d, 0xf747, 0xf771, 0xf79c, 0xf7c7, 0xf7f2, 0xf81e, 0xf849, 
	0xf876, 0xf8a2, 0xf8cf, 0xf8fc, 0xf929, 0xf957, 0xf985, 0xf9b3, 
	0xf9e1, 0xfa10, 0xfa3e, 0xfa6d, 0xfa9d, 0xfacc, 0xfafc, 0xfb2b, 
	0xfb5b, 0xfb8c, 0xfbbc, 0xfbed, 0xfc1d, 0xfc4e, 0xfc7f, 0xfcb0, 
	0xfce1, 0xfd13, 0xfd44, 0xfd76, 0xfda7, 0xfdd9, 0xfe0b, 0xfe3d, 
	0xfe6f, 0xfea1, 0xfed3, 0xff05, 0xff38, 0xff6a, 0xff9c, 0xffce, 
};