#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>


#define BUTTON0 3
#define BUTTON1 4

#define COL_R 0
#define COL_G 1
#define COL_B 2

#define BIT_DOWN(reg, bit) \
  reg &= ~(1<<bit);

#define BIT_UP(reg, bit) \
  reg |= (1<<bit);

int setColor(mask){
    PORTB &= ~(7);
    PORTB |= mask&7;
}

int main(void)
{
  // mask for output
  DDRB = (1<<COL_R) | (1<<COL_G) | (1<<COL_B);
  
  // pull-up for button is ON
  PORTB = (1<<BUTTON0) | (1<<BUTTON1);
  //BIT_DOWN(MCUCR, PUD); -- 0 by default

#define DL 1000
  int i=1;
  while(1){
#if 1
    int b0,b1;
    int oldb0, oldb1;

    b0 = PINB&(1<<BUTTON0);
    if(oldb0!=b0){
      oldb0=b0;
      _delay_ms(100);
      if(!b0){
        clickPowerButton();
        //  BIT_UP(PORTB, COL_R);
      }else{
        //  BIT_DOWN(PORTB, COL_R);
      }
    }

    b1 = PINB&(1<<BUTTON1);
    if(oldb1!=b1){
      oldb1=b1;
      _delay_ms(10);
      if(!b1){
        clickColorButton();
        //  BIT_UP(PORTB, COL_G);
      }else{
        //  BIT_DOWN(PORTB, COL_G);

      }
    }
#endif

#if 0 /* TEST BUTTONS */
    int b0 = PINB&(1<<BUTTON0); 
    int b1 = PINB&(1<<BUTTON1); 
    if(!b0){
      BIT_UP(PORTB, COL_R);
    }else{
      BIT_DOWN(PORTB, COL_R);
    }
    if(!b1){
      BIT_UP(PORTB, COL_G);
    }else{
      BIT_DOWN(PORTB, COL_G);
    }
#endif
    /* TEST R G B
    _delay_ms(DL);
    PORTB &= ~(7);
    PORTB |= i&7;
    switch(i){
      case 1: i=2; break;
      case 2: i=4; break;
      case 4: i=0; break;
      case 0: i=1; break;
      default: 0;
    }
    */
  }

  return 0;
}
