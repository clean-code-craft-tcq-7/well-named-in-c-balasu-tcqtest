
#ifndef COLOR_NAME_MAP_H_
#define COLOR_NAME_MAP_H_



typedef enum
{
  WHITE, RED, BLACK, YELLOW, VIOLET
} MajorColor;

typedef enum
{
  BLUE, ORANGE, GREEN, BROWN, SLATE
} MinorColor;

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

extern int numberOfMajorColors;
extern int numberOfMinorColors;

#endif
