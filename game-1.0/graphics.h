const uint16_t board_pixels_top[75] = {
0x0000,0x0000,0x0000,0x0000,0x0000,0x7BEF,0x7BEF,0x7BEF,0x7BEF,0x7BEF,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x7BEF,0x7BEF,0xC618,0xC618,0xC618,0xC618,0xC618,0x7BEF,0x7BEF,0x0000,0x0000,0x0000,
0x0000,0x0000,0x7BEF,0xC618,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0xC618,0x7BEF,0x0000,0x0000,
0x0000,0x7BEF,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0x7BEF,0x0000,
0x0000,0x7BEF,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0x7BEF,0x0000
};

const uint16_t board_pixels_middle[15] = {
0x7BEF,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0x7BEF
};

const uint16_t board_pixels_bottom[75] = {
0x0000,0x7BEF,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0x7BEF,0x0000,
0x0000,0x7BEF,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0x7BEF,0x0000,
0x0000,0x0000,0x7BEF,0xC618,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0xC618,0x7BEF,0x0000,0x0000,
0x0000,0x0000,0x0000,0x7BEF,0x7BEF,0xC618,0xC618,0xC618,0xC618,0xC618,0x7BEF,0x7BEF,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x7BEF,0x7BEF,0x7BEF,0x7BEF,0x7BEF,0x0000,0x0000,0x0000,0x0000,0x0000
};

const uint16_t ball_pixels[225] = {
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7BEF,0x7BEF,0x7BEF,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x7BEF,0x7BEF,0xC618,0xC618,0xC618,0x7BEF,0x7BEF,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x7BEF,0xC618,0xC618,0xFFFF,0xFFFF,0xFFFF,0xC618,0xC618,0x7BEF,0x0000,0x0000,0x0000,
0x0000,0x0000,0x7BEF,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0x7BEF,0x0000,0x0000,
0x0000,0x7BEF,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0x7BEF,0x0000,
0x0000,0x7BEF,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0x7BEF,0x0000,
0x7BEF,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0x7BEF,
0x7BEF,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0x7BEF,
0x7BEF,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0x7BEF,
0x0000,0x7BEF,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0x7BEF,0x0000,
0x0000,0x7BEF,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0x7BEF,0x0000,
0x0000,0x0000,0x7BEF,0xC618,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xC618,0x7BEF,0x0000,0x0000,
0x0000,0x0000,0x0000,0x7BEF,0xC618,0xC618,0xFFFF,0xFFFF,0xFFFF,0xC618,0xC618,0x7BEF,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x7BEF,0x7BEF,0xC618,0xC618,0xC618,0x7BEF,0x7BEF,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7BEF,0x7BEF,0x7BEF,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
};

const uint16_t pointer_pixels[400] = {
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x7777,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1111,0x6666,0xEEEE,0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xAAAA,0xEEEE,0xDDDD,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,
0x9999,0xEEEE,0xDDDD,0x5555,0x0000,0x0000,0x0000,0x9999,0xCCCC,0xCCCC,0xCCCC,0xBBBB,0xDDDD,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
0xDDDD,0xCCCC,0xBBBB,0xDDDD,0xCCCC,0xEEEE,0xDDDD,0x4444,0x0000,0x0000,0x6666,0x8888,0x8888,0x8888,0x8888,0x8888,0x8888,
0x8888,0x9999,0x8888,0x8888,0x8888,0x9999,0xCCCC,0xDDDD,0xDDDD,0xCCCC,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6666,0xDDDD,0xCCCC,0x9999,0x1111,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6666,0xDDDD,0xDDDD,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xDDDD,0xDDDD,0x7777,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6666,0xEEEE,0xDDDD,0x6666,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x8888,0x7777,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000
};

const uint16_t start_pixels[1600] = {
0x0000,0x0000,0x0000,0x0000,0x3333,0x5555,0x7777,0x6666,0x5555,0x3333,0x0000,0x0000,0x0000,0x0000,0x1111,0x2222,0x2222,0x2222,0x2222,0x2222,
0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x1111,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,0x2222,
0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,
0x0000,0x0000,0x7777,0xEEEE,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEEEE,0xBBBB,0x1111,0x0000,0x5555,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEEEE,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6666,0xFFFF,0xFFFF,
0xEEEE,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEEEE,0xAAAA,
0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
0x0000,0xAAAA,0xFFFF,0xFFFF,0xEEEE,0xAAAA,0x8888,0x9999,0xBBBB,0xDDDD,0xFFFF,0xFFFF,0x1111,0x0000,0x5555,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,
0xEEEE,0xEEEE,0xFFFF,0xFFFF,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xCCCC,0xFFFF,0xFFFF,
0xFFFF,0x5555,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0xDDDD,0xDDDD,0xDDDD,0xEEEE,0xFFFF,0xFFFF,0xFFFF,
0xFFFF,0x6666,0x0000,0x0000,0x0000,0x0000,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xFFFF,0xFFFF,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,
0x6666,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xAAAA,0x1111,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,0xFFFF,0xFFFF,0xCCCC,
0xFFFF,0xBBBB,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x5555,0xDDDD,
0xFFFF,0xEEEE,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0xCCCC,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x8888,0xFFFF,0xCCCC,0x4444,
0xEEEE,0xFFFF,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,
0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0xEEEE,0xFFFF,0x9999,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDDDD,0xFFFF,0x7777,0x0000,
0xDDDD,0xFFFF,0x7777,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xEEEE,0xFFFF,0xBBBB,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0xDDDD,0xFFFF,0xAAAA,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x1111,0x0000,
0x8888,0xFFFF,0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xEEEE,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xEEEE,0xFFFF,0xBBBB,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0xAAAA,0xFFFF,0xFFFF,0x6666,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xAAAA,0xFFFF,0xBBBB,0x0000,0x0000,
0x2222,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,
0xEEEE,0xFFFF,0x9999,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0x3333,0xEEEE,0xFFFF,0xFFFF,0xDDDD,0x9999,0x5555,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,0xEEEE,0xFFFF,0x5555,0x0000,0x0000,
0x0000,0xBBBB,0xEEEE,0x9999,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0xAAAA,
0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0x0000,0x4444,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0x9999,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7777,0xFFFF,0xEEEE,0x0000,0x0000,0x0000,
0x0000,0x6666,0xFFFF,0xEEEE,0x1111,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xEEEE,0x7777,0x6666,0x6666,0x6666,0x8888,0xDDDD,0xEEEE,
0xFFFF,0x9999,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x6666,0xAAAA,0xEEEE,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEEEE,0x7777,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xCCCC,0xFFFF,0x9999,0x0000,0x0000,0x0000,
0x0000,0x1111,0xEEEE,0xFFFF,0x6666,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,
0x5555,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,0x6666,0xBBBB,0xFFFF,0xEEEE,0xFFFF,0x5555,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x3333,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,
0x0000,0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0xBBBB,0xAAAA,0xAAAA,0xBBBB,0xDDDD,0xFFFF,0xFFFF,
0x9999,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xEEEE,0xFFFF,0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xEEEE,0x4444,0x4444,0x4444,0x4444,
0x4444,0x4444,0x8888,0xFFFF,0xFFFF,0x2222,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x7777,0xFFFF,
0xFFFF,0x7777,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xFFFF,0x1111,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xEEEE,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
0xFFFF,0xFFFF,0xFFFF,0xEEEE,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,
0xFFFF,0xEEEE,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6666,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,
0xCCCC,0xCCCC,0xCCCC,0xDDDD,0xFFFF,0xDDDD,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,
0xEEEE,0xFFFF,0xAAAA,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x8888,0xFFFF,0xFFFF,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xBBBB,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x3333,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x7777,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0x8888,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,0xEEEE,0xFFFF,0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,0xFFFF,0xFFFF,0x6666,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xCCCC,0xFFFF,0xAAAA,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xEEEE,0xFFFF,0xBBBB,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0xDDDD,0xFFFF,0xBBBB,0x6666,0x3333,0x1111,0x1111,0x3333,0x7777,0xDDDD,0xFFFF,0xFFFF,0x5555,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7777,0xFFFF,0xEEEE,0x1111,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x7777,0xFFFF,0xEEEE,0x1111,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x7777,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0xDDDD,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEEEE,0x7777,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xAAAA,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDDDD,0xFFFF,0xBBBB,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x2222,0xFFFF,0xFFFF,0x7777,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0xEEEE,0xFFFF,0xBBBB,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,
0x0000,0x3333,0x7777,0xBBBB,0xCCCC,0xEEEE,0xEEEE,0xCCCC,0xAAAA,0x7777,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x6666,0x9999,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,0x9999,0x9999,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x8888,0x9999,0x7777,0x0000,0x0000,0x3333,0x9999,0x9999,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x5555,0x9999,0x9999,0x1111,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x3333,0x9999,0x9999,0x2222,0x0000,0x0000,0x0000,0x0000,

};

const uint16_t exit_pixels[1600]= {
0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x0000,0x0000,0x0000,0x1111,0x2222,0x2222,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,0x2222,0x2222,0x0000,0x0000,0x0000,0x0000,0x2222,0x2222,0x1111,0x0000,0x0000,0x2222,
0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0x0000,0x0000,0x0000,0x2222,0xEEEE,0xFFFF,0x8888,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,0xDDDD,0xFFFF,0xBBBB,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0xFFFF,
0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xDDDD,0x0000,0x0000,0x0000,0x0000,0x7777,0xFFFF,0xFFFF,0x4444,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xEEEE,0x2222,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0xEEEE,
0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xFFFF,0xFFFF,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xBBBB,0xFFFF,0xDDDD,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x6666,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,0xEEEE,0xFFFF,
0x8888,0x0000,0x0000,0x0000,0x1111,0xDDDD,0xFFFF,0xBBBB,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7777,0xFFFF,
0xFFFF,0x4444,0x0000,0x0000,0x9999,0xFFFF,0xEEEE,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xCCCC,
0xFFFF,0xDDDD,0x0000,0x4444,0xFFFF,0xFFFF,0x6666,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xEEEE,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xEEEE,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,
0xEEEE,0xFFFF,0x9999,0xDDDD,0xFFFF,0xBBBB,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0xBBBB,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x7777,0xFFFF,0xFFFF,0xFFFF,0xEEEE,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x7777,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0xDDDD,0xFFFF,0xFFFF,0x6666,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0xCCCC,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0x5555,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x5555,0xFFFF,0xFFFF,0xFFFF,0x9999,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,
0xEEEE,0xFFFF,0xDDDD,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xAAAA,
0xFFFF,0xEEEE,0x1111,0xBBBB,0xFFFF,0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xEEEE,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,
0xFFFF,0x5555,0x0000,0x2222,0xEEEE,0xFFFF,0x9999,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,0xEEEE,0xFFFF,
0xAAAA,0x0000,0x0000,0x0000,0x7777,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xAAAA,0xFFFF,0xEEEE,
0x1111,0x0000,0x0000,0x0000,0x0000,0xCCCC,0xFFFF,0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x5555,
0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,0xEEEE,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0xBBBB,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x0000,0x0000,0x0000,0x1111,0xEEEE,0xFFFF,0xAAAA,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7777,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x1111,0x0000,0x0000,0xAAAA,0xFFFF,0xEEEE,0x1111,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xCCCC,0xFFFF,0xDDDD,0x0000,0x0000,0x0000,0x0000,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x1111,0x0000,0x2222,0x9999,0x9999,0x4444,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x3333,0x9999,0x9999,0x4444,0x0000,0x0000,0x0000,0x9999,0x9999,0x5555,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x3333,0x9999,0x9999,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
}; 

const uint16_t team_pixels[1600]= {
0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x0000,0x0000,0x1111,0x2222,
0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,
0x2222,0x2222,0x1111,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,0x2222,0x2222,0x2222,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,0x2222,0x2222,0x1111,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xEEEE,0x0000,0x0000,0x9999,0xFFFF,
0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xBBBB,
0xFFFF,0xFFFF,0xAAAA,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xFFFF,0xFFFF,0x6666,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x7777,0xFFFF,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xFFFF,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xDDDD,0x0000,0x0000,0x9999,0xFFFF,
0xFFFF,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0xEEEE,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,0xFFFF,
0xFFFF,0xFFFF,0xEEEE,0x1111,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xFFFF,0xFFFF,0xBBBB,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0xDDDD,0xFFFF,0xFFFF,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7777,0xFFFF,
0xDDDD,0xDDDD,0xFFFF,0x6666,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xDDDD,0xEEEE,0xFFFF,0x2222,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x3333,0xFFFF,0xDDDD,0xEEEE,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDDDD,0xFFFF,
0x8888,0x8888,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0xAAAA,0xFFFF,0x7777,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0x8888,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x3333,0xEEEE,0xFFFF,
0x2222,0x3333,0xFFFF,0xFFFF,0x3333,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0x4444,0xFFFF,0xDDDD,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xEEEE,0xFFFF,0x2222,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,
0x0000,0x0000,0xCCCC,0xFFFF,0x9999,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0x0000,0xDDDD,0xFFFF,0x4444,0x0000,
0x0000,0x0000,0x0000,0x5555,0xFFFF,0xCCCC,0x0000,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xEEEE,0xFFFF,0x6666,
0x0000,0x0000,0x7777,0xFFFF,0xEEEE,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0x0000,0x8888,0xFFFF,0x9999,0x0000,
0x0000,0x0000,0x0000,0xBBBB,0xFFFF,0x6666,0x0000,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xEEEE,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x6666,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6666,0xFFFF,0xEEEE,0x1111,
0x0000,0x0000,0x1111,0xEEEE,0xFFFF,0x5555,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0x0000,0x2222,0xFFFF,0xEEEE,0x0000,
0x0000,0x0000,0x2222,0xFFFF,0xEEEE,0x1111,0x0000,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xBBBB,0xFFFF,0xAAAA,0x0000,
0x0000,0x0000,0x0000,0xAAAA,0xFFFF,0xBBBB,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0x0000,0x0000,0xBBBB,0xFFFF,0x6666,
0x0000,0x0000,0x7777,0xFFFF,0xAAAA,0x0000,0x0000,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xEEEE,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0x9999,0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,0xFFFF,0xFFFF,0x4444,0x0000,
0x0000,0x0000,0x0000,0x5555,0xFFFF,0xFFFF,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0x0000,0x0000,0x6666,0xFFFF,0xBBBB,
0x0000,0x0000,0xDDDD,0xFFFF,0x4444,0x0000,0x0000,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x8888,0xFFFF,0xEEEE,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xEEEE,0xFFFF,0x7777,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0x0000,0x0000,0x1111,0xEEEE,0xFFFF,
0x2222,0x3333,0xFFFF,0xDDDD,0x0000,0x0000,0x0000,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDDDD,0xFFFF,0xBBBB,0x4444,0x4444,
0x4444,0x4444,0x4444,0x4444,0xBBBB,0xFFFF,0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0x7777,0x9999,0xFFFF,0x8888,0x0000,0x0000,0x0000,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
0xFFFF,0xFFFF,0xEEEE,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x4444,0xFFFF,
0xDDDD,0xEEEE,0xEEEE,0x2222,0x0000,0x0000,0x0000,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xAAAA,0xFFFF,0xEEEE,0xCCCC,0xCCCC,0xCCCC,
0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xCCCC,0xEEEE,0xFFFF,0x9999,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0xDDDD,
0xFFFF,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,0xEEEE,0xFFFF,0x7777,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x7777,0xFFFF,0xEEEE,0x1111,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x8888,
0xFFFF,0xFFFF,0x6666,0x0000,0x0000,0x0000,0x0000,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xDDDD,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6666,0xFFFF,0xFFFF,0x2222,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,0xFFFF,0xFFFF,0x6666,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xEEEE,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x7777,0x3333,0x0000,0x0000,0xCCCC,0xFFFF,0xBBBB,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xCCCC,0xFFFF,0xBBBB,0x0000,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0xFFFF,0xFFFF,0x4444,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0xFFFF,
0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0x7777,0x0000,0x3333,0xFFFF,0xFFFF,0x6666,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6666,0xFFFF,0xFFFF,0x2222,0x0000,0x0000,0x9999,0xFFFF,0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xDDDD,0xFFFF,0x8888,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,0x9999,0x9999,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5555,0x9999,
0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x5555,0x0000,0x5555,0x9999,0x9999,0x1111,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1111,0x9999,0x9999,0x4444,0x0000,0x0000,0x6666,0x9999,0x7777,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9999,0x9999,0x5555,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

