#ifndef SWITCH_H
#define SWITCH_H

__bit read_sw(void)
{
  __bit c;
  SW=1;
 c=SW;
 return c;
}

#endif
