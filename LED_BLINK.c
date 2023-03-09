#include <AT89S52.h>  /* Include AT89S52 Header file */
#define LED P0_0      /* Define Macro variable LED for Port Pin P0.0 */


void delay(void);     /* Declare delay function */

void main()
{
 LED=1;              /* Turn OFF the LED */
 while(1)            /* Infinite loop */
 {
  LED=!LED;          /* Toggle LED */
  delay();           /* Call delay function */
 }
}

void delay()         /* Define the Delay function */
{
 unsigned char i;
 for(i=0; i<50 ;i++) /* decrement the count till becomes 0 */
 {}
}