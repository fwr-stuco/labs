#include <Romi32U4.h>
#include "FWR_Servo.h"

Romi32U4Motors motors;
Romi32U4ButtonA buttonA;
Romi32U4Encoders encoders;
Romi32U4LCD lcd;
Romi32U4Buzzer buzzer;

FWR_Servo myservo;

int left_count, right_count;

void setup() {

  uint16_t batteryLevel;

  // Loop the code within { } until A is pressed
  while (!buttonA.isPressed()) {
    // read the battery level and store it in a variable
    batteryLevel = readBatteryMillivolts();
    
    lcd.clear();  // clear the LCD
    lcd.print("B=");
    lcd.print(batteryLevel); // print the battery voltage 
    lcd.print("mV");
    lcd.gotoXY(0, 1);
    lcd.print("Press A");

    delay(100); // Pause for 100ms
  }
  lcd.clear();
  delay(500);
  
  myservo.attach(20);
}

int goal = 0;

void loop() {
  myservo.write(0);
  delay(100);

  goal = 1000 + goal;

  left_count = encoders.getCountsLeft();
  right_count = encoders.getCountsRight();
  
  while(left_count < goal && right_count < goal){
    motors.setSpeeds(50, 50);
    delay(10);
    
    left_count = encoders.getCountsLeft();
    right_count = encoders.getCountsRight();
  }

  motors.setSpeeds(0, 0);
  myservo.write(90);
  delay(1000);
}
