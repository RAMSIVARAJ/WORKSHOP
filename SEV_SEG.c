#include <AT89S52.h>  /* Include AT89S52 Header file */
#define SEV_SEG P0    /* Define Macro variable LED for Port Pin P0.0 */

const char seg[17]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90,0x88,0x83,0xC6,0xA1,0x86,0x8E}; /* Common Anode Seven Segment code */

void main()
{
 SEV_SEG=0xFF;              /* Turn OFF the Seven Segment LED */
 while(1)            	    /* Infinite loop */
 {
  SEV_SEG=seg[5];           /* Display Number 7 on the Seven Segment LED */
 }
}
