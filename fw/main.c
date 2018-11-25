/* Balloon Internal Pressure Sensor
   CUSF 2018
*/
#include "ch.h"
#include "hal.h"

/*
 * Application entry point.
 */
int main(void) {

  /*
   * System initializations.
   * - HAL initialization, this also initializes the configured device drivers
   *   and performs the board-specific initializations.
   * - Kernel initialization, the main() function becomes a thread and the
   *   RTOS is active.
   */
  halInit();
  chSysInit();

  // Normal main() thread activity
  while (true) {
    chThdSleepSeconds(1);  // Do nothing
  }
  return 0;
}
