/*
 * BMP280 Pressure Sensor Driver
 * CUSF 2019
 */

#include <stdint.h>

#ifndef __BMP280_H__
#define __BMP280_H__

/*
 * Initialise the BMP280 pressure sensor
 *
 */
void bmp280_init(void);

/*
 * Read pressure from BMP280
 *
 * returns -- pressure
 */
uint32_t bmp280_read_pressure(void);

#endif // __BMP280_H__
