#ifndef TILESETS_H
#define TILESETS_H

#include <avr/pgmspace.h>

const unsigned char PROGMEM worldSprite[] =
{
// width, height,
16, 16,
// TILE 00
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
// TILE 01
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
// TILE 02
0xff, 0x7f, 0x9f, 0x6f, 0x17, 0x0b, 0x0b, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05,
0xff, 0x55, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
// TILE 03
0xff, 0x55, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0x55, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
// TILE 04
0xff, 0x55, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xfd, 0xf2, 0xe8, 0xd0, 0xa0, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80,
// TILE 05
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80,
// TILE 06
0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
// TILE 07
0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x03, 0x05, 0x0b, 0x17, 0xaf, 0x5f, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x55, 0xff, 0xff,
// TILE 08
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x55, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x55, 0xff, 0xff,
// TILE 09
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x55, 0xff, 0xff,
0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x40, 0xa0, 0xd0, 0xe8, 0xf6, 0xfd, 0xff, 0xff,
// TILE 10
0x03, 0x05, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
// TILE 11
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xc0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
// TILE 12
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x80,
// TILE 13
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x03, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
// TILE 14
0xff, 0xff, 0xff, 0x7f, 0xbf, 0xdf, 0xdf, 0x5f, 0xdf, 0xbf, 0xbf, 0x7f, 0xff, 0xff, 0xff, 0xff,
0xff, 0xc1, 0x9e, 0xbf, 0xbf, 0x3f, 0x55, 0x6f, 0x15, 0xaa, 0x95, 0xab, 0x96, 0xcd, 0xe3, 0xff,
// TILE 15
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf6, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
// TILE 16
0xff, 0x3f, 0xcf, 0x73, 0xfd, 0x53, 0x8f, 0x3f, 0x3f, 0xcf, 0xf7, 0x4f, 0x3f, 0xff, 0xff, 0xff,
0xfc, 0xfb, 0xf7, 0xf5, 0xf6, 0xc5, 0xd0, 0xbc, 0xbf, 0x7f, 0x6e, 0x6b, 0x16, 0xa8, 0x93, 0xcf,
// TILE 17
0x00, 0x10, 0x38, 0x3c, 0x3e, 0x16, 0x2c, 0x18, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x00, 0x00,
0x00, 0x00, 0x00, 0x08, 0x1c, 0x1e, 0x14, 0x08, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x04, 0x00,
// TILE 18
0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa,
0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa, 0x55, 0xaa,
// TILE 19
0x73, 0x6b, 0x73, 0xeb, 0xf3, 0xeb, 0x73, 0x6b, 0x73, 0x6b, 0x73, 0xeb, 0xf3, 0xeb, 0x73, 0x6b,
0xd6, 0xce, 0xd6, 0xcf, 0xd7, 0xcf, 0xd6, 0xce, 0xd6, 0xce, 0xd6, 0xcf, 0xd7, 0xcf, 0xd6, 0xce,
// TILE 20
0x73, 0x6b, 0x73, 0xeb, 0xf3, 0xeb, 0x73, 0x6b, 0x73, 0xeb, 0xf3, 0xab, 0x57, 0x0f, 0xff, 0xff,
0xd6, 0xce, 0x16, 0xaf, 0x57, 0xff, 0xfe, 0x38, 0x38, 0xff, 0xff, 0xaa, 0x55, 0x00, 0xff, 0xff,
// TILE 21
0xff, 0xff, 0x00, 0xaa, 0x55, 0xff, 0xff, 0x38, 0x38, 0xff, 0xff, 0xaa, 0x55, 0x00, 0xff, 0xff,
0xff, 0xff, 0x00, 0xaa, 0x55, 0xff, 0xff, 0x38, 0x38, 0xff, 0xff, 0xaa, 0x55, 0x00, 0xff, 0xff,
// TILE 22
0x73, 0x6b, 0xf0, 0xea, 0xf5, 0x7f, 0x7f, 0x38, 0x38, 0xff, 0xff, 0xaa, 0x55, 0x00, 0xff, 0xff,
0xd6, 0xce, 0xd7, 0xcf, 0xd7, 0xce, 0xd6, 0xce, 0xd6, 0xcf, 0xd7, 0xca, 0xe5, 0xf0, 0xff, 0xff,
// TILE 23
0xff, 0xff, 0x0f, 0xa7, 0x53, 0xeb, 0xf3, 0x6b, 0x73, 0x6b, 0x73, 0xeb, 0xf3, 0xeb, 0x73, 0x6b,
0xff, 0xff, 0x00, 0xaa, 0x55, 0xff, 0xff, 0x1c, 0x1c, 0xfe, 0xfe, 0xaf, 0x57, 0x0f, 0xd6, 0xce,
// TILE 24
0xff, 0xff, 0x00, 0xaa, 0x55, 0xff, 0xff, 0x1c, 0x1c, 0x7f, 0xff, 0xfa, 0xf5, 0x68, 0x73, 0x6b,
0xff, 0xff, 0xf0, 0xea, 0xd5, 0xcb, 0xd7, 0xce, 0xd6, 0xce, 0xd7, 0xcf, 0xd7, 0xce, 0xd6, 0xce,
// TILE 25
0x07, 0x37, 0x41, 0x5a, 0x4a, 0x5a, 0x4a, 0x02, 0xe9, 0xab, 0xeb, 0xab, 0xeb, 0x07, 0x07, 0xff,
0x00, 0x40, 0x1f, 0x55, 0x0f, 0xd5, 0x9f, 0xc0, 0xeb, 0xf2, 0x69, 0x72, 0x6b, 0x70, 0x00, 0xff,
// TILE 26
0x0f, 0xf3, 0x05, 0xb5, 0x51, 0xad, 0x40, 0xb7, 0x5b, 0xad, 0x40, 0xb7, 0x5b, 0xad, 0x00, 0xff,
0x00, 0x7f, 0x40, 0x2e, 0x4f, 0xa2, 0xc3, 0xae, 0xcf, 0xae, 0x4f, 0x22, 0x43, 0x2e, 0x00, 0xff,
// TILE 27
0x1f, 0xcf, 0xaf, 0xf7, 0xf3, 0xfd, 0xfe, 0x32, 0xfe, 0xf1, 0x04, 0xfe, 0xaa, 0x04, 0xf1, 0xff,
0xf8, 0xf6, 0xef, 0xdb, 0xb6, 0xbd, 0x7f, 0x46, 0x7f, 0xbf, 0xb0, 0xd7, 0xe2, 0xf0, 0xff, 0xff,
// TILE 28
0x3f, 0xdf, 0x3f, 0xff, 0xe3, 0xdd, 0x36, 0xa2, 0x36, 0xdd, 0xe3, 0xff, 0x3f, 0xdf, 0x3f, 0xff,
0x00, 0x73, 0x77, 0x0c, 0x1a, 0x5a, 0x18, 0x5f, 0x18, 0x5a, 0x1a, 0x0c, 0x77, 0x73, 0x00, 0xff,
// TILE 29
0xff, 0x7f, 0xbf, 0x3f, 0x83, 0x3d, 0x7e, 0x7e, 0x6e, 0x75, 0xbb, 0x84, 0xbc, 0x7f, 0xff, 0xff,
0x80, 0xbd, 0xac, 0xbd, 0x9c, 0x8d, 0x8c, 0x8d, 0x8c, 0x8d, 0x9d, 0xbd, 0xad, 0xbd, 0x80, 0xff,
// TILE 30
0x07, 0xa8, 0x50, 0x85, 0x7f, 0x7f, 0x55, 0x7f, 0x55, 0x7f, 0x7f, 0x85, 0x50, 0xa8, 0x07, 0xff,
0x80, 0xaa, 0x95, 0xb3, 0x85, 0xa3, 0xb5, 0xb3, 0xb5, 0xa3, 0x85, 0xb3, 0x95, 0xaa, 0x80, 0xff,
// TILE 31
0x03, 0x07, 0xc7, 0x10, 0x10, 0xc1, 0x03, 0x00, 0x03, 0xc1, 0x10, 0x10, 0xc7, 0x07, 0x03, 0xff,
0x80, 0x80, 0x8c, 0x80, 0xc0, 0xe4, 0xc0, 0xf0, 0xc0, 0xe4, 0xc0, 0x80, 0x8c, 0x80, 0x80, 0xff,
// TILE 32
0xff, 0xff, 0x1f, 0xef, 0x17, 0xf7, 0xf7, 0xc0, 0xf7, 0xf7, 0x17, 0xef, 0x1f, 0xff, 0xff, 0xff,
0xff, 0xff, 0x00, 0x7f, 0xc3, 0x6e, 0xc2, 0x7e, 0xe6, 0x5a, 0xc7, 0x3f, 0x00, 0xff, 0xff, 0xff,
// TILE 33
0x3f, 0x7f, 0x7f, 0x1f, 0xe7, 0xbb, 0xfd, 0x7d, 0xfd, 0xbb, 0xe7, 0x1f, 0x7f, 0x7f, 0x3f, 0xff,
0xc0, 0x82, 0x99, 0x00, 0x07, 0x8e, 0xcf, 0x0d, 0xcf, 0x8e, 0x07, 0x00, 0x99, 0x82, 0xc0, 0xff,
};

#endif
