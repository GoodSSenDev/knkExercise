#define GET_RED(r) ((r) & 0xff)
#define GET_GREEN(b) ((b) >> 8 & 0xff)
#define GET_BLUE(g) ((g) >> 16 & 0xff)