/*
 * 7 Segment Display Driver
 * CUSF 2019
 */

#ifndef __7SEG_H__
#define __7SEG_H__

#include <stdint.h>

/*
 * Write 'val' to the 7 segment displays
 *
 * val -- value to write
 */
void seven_seg_write(uint16_t val);

/*
 * Read current display value
 *
 * returns -- value being displayed
 */
uint16_t seven_seg_read(void);

#endif // __7SEG_H__
