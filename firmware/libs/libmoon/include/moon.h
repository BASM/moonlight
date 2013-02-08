/**
 * \file   moon.h
 *
 * \author Maria Levshinovskaya <masa.levs@gmail.com>
 * 
 */

#ifndef __MOON_H
#define __MOON_H


#define COLOR_R     0x1
#define COLOR_G     0x2
#define COLOR_B     0x4


/**
 * \brief   Нажатие кнопки питания.
 * \return  Всегда 0.
 */
int clickPowerButton(void);

/**
 * \brief   Нажатие кнопки изменения цвета.
 * \return  Всегда 0.
 */
int clickColorButton(void);


/**
 * \brief  Установить цвет по маске (RGB).
 * \return Всегда 0.
 */
extern int setColor(int mask);

#endif /* __MOON_H */

