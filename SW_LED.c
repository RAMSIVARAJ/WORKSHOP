#include <AT89S52.h>  /* Include AT89S52 Header file */
#define LED P0_0      /* Define Macro variable LED for Port Pin P0.0 */
#define SW P0_1       /* Define Macro variable SW for Port Pin P0.1 */

void main()
{
 SW=1;               /* Configure Port Pin P0.1 as input pin*/
 LED=1;              /* Turn OF the LED */
 while(1)            /* Infinite loop */
 {
  if(SW==0)	     /* If SW is pressed (closed), Turn ON the LED */
  {
   LED=0;
  }
  else
  {
   LED=1;	     /* If SW is not pressed (open), Turn OFF the LED */
  }
 }
}