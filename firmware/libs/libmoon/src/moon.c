/**
 * \file   moon.c
 *
 * \author Maria Levshinovskaya <masa.levs@gmail.com>
 * 
 * \todo
 */

#include <moon.h>

#define COLORS_NUM  8


int clickPowerButton(void)
{
  static char currentState = 0;
  if (currentState) {
    setColor(0);
    currentState = 0;
  } else {
    setColor(COLOR_R | COLOR_G | COLOR_B);
    currentState = 1;
  }
  return 0;
}


int clickColorButton(void)
{
  static char currentColor = 7;
  setColor((currentColor & COLOR_R) | (currentColor & COLOR_G) | (currentColor & COLOR_B));
  if (++currentColor == 8)
    currentColor=1;

  return 0;
}

