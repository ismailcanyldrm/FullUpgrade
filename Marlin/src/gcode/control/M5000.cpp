#include "../../MarlinCore.h"
#include "../gcode.h"
#include "../../module/temperature.h"
#include "../../module/planner.h"       // for planner.finish_and_disable
#include "../../module/printcounter.h"  // for print_job_timer.stop
#include "../../lcd/marlinui.h"         // for LCD_MESSAGE_F
#include "../queue.h"
#include "../../feature/power.h"
#include "../../inc/MarlinConfig.h"
int MKW= PE11;
int MH= PE8;

              // A KARIŞTIRMA START KONUMU

void GcodeSuite::M5000()
{
  Serial.begin(250000);
  pinMode(MKW, OUTPUT);
  pinMode(MH, OUTPUT);
  //-----------------------
digitalWrite(MKW, HIGH);
digitalWrite(MH, LOW);
}
