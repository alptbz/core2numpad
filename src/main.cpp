#include <Arduino.h>
#include "base.h"

void setup() {
  init_m5();
  init_display();
  add_hello_world_label();
}

void loop() {
  lv_task_handler();
  delay(5);
}