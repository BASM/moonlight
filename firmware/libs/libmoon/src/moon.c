/**
 * \file   moon.c
 *
 * \author Maria Levshinovskaya <masa.levs@gmail.com>
 * 
 * \todo
 */

#include <moon.h>

#define COLORS_NUM  8

static char currentState = 0;
static char currentColor = 6;


int clickPowerButton(void)
{
  if (currentState) {
    setColor(0);
    currentState = 0;
  } else {
    setColor((currentColor & COLOR_R) | (currentColor & COLOR_G) | (currentColor & COLOR_B));
    currentState = 1;
  }
  return 0;
}


int clickColorButton(void)
{
  if (!currentState)
    return 0;
  if (++currentColor == 8)
    currentColor=1;
  setColor((currentColor & COLOR_R) | (currentColor & COLOR_G) | (currentColor & COLOR_B));

  return 0;
}

