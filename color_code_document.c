#include <stdio.h>
#include <string.h>
#include "color_name_map.h"
#include "color_code_utility.h"
#include "color_code_document.h"

void createColorCodeDocument(void)
{
  char color_str_buffer[MAX_COLORPAIR_NAME_CHARS];
  int color_code;
  ColorPair colorPairVal;
  
  printf("-----------------25-Pair Color Code------------\n");
  printf("|   Pair No\t|\tColor pair\t|\n");

  for(color_code = 1; color_code <= MAX_COLOR_PAIR_SUPPORTED; color_code++)
  {
      memset(color_str_buffer, 0, MAX_COLOR_PAIR_SUPPORTED);
      colorPairVal = GetColorFromPairNumber(color_code);
      ColorPairToString(&colorPairVal, color_str_buffer);
      printf("|\t%d\t|\t%s\t|\n", color_code, color_str_buffer);
  }

  printf("-----------------------------------------\n");
}
