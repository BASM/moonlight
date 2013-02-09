/**
 * \file   test.c
 *
 * \author Maria Levshinovskaya <masa.levs@gmail.com>
 * 
 * \todo
 */

#define sleep(...)

#include <stdio.h>
#include <moon.h>

int setColor(int color)
{
  if (!color) {
    printf("Light OFF.\n");
    return 0;
  }
  if (color & COLOR_R)
    printf("RED ON.\n");
  if (color & COLOR_G)
    printf("GREEN ON.\n");
  if (color & COLOR_B)
    printf("BLUE ON.\n");

  return 0;
}

int main(void)
{
  clickPowerButton();
  printf("\n");
  sleep(1);
  clickColorButton();
  printf("\n");
  sleep(1);
  clickColorButton();
  printf("\n");
  sleep(1);
  clickColorButton();
  printf("\n");
  sleep(1);
  clickColorButton();
  printf("\n");
  sleep(1);
  clickColorButton();
  printf("\n");
  sleep(1);
  clickColorButton();
  printf("\n");
  sleep(1);
  clickColorButton();
  printf("\n");
  sleep(1);
  clickColorButton();
  printf("\n");
  sleep(1);
  clickColorButton();
  printf("\n");
  sleep(1);
  clickColorButton();
  printf("\n");
  sleep(1);
  clickPowerButton();
}

