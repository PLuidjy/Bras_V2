// Authors : Luidjy, Tanvir, Olivier de T, Louis

#include <Arduino.h>
#include <ESP32Servo.h>

Servo servo1,
      servo2,
      servo3,
      servo4,
      servo5,
      servo6;

void setup()
{
  servo1.attach(13);
  servo2.attach(12);
  servo3.attach(27);
  servo4.attach(33);
  servo5.attach(15);
  servo6.attach(32);
}

void loop()
{

    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
    servo5.write(90);
    servo6.write(90);

    sleep(1);

    servo1.write(180);
    servo2.write(180);
    servo3.write(180);
    servo4.write(180);
    servo5.write(180);
    servo6.write(180);

    sleep(1);

    servo1.write(130);
    servo2.write(130);
    servo3.write(130);
    servo4.write(130);
    servo5.write(130);
    servo6.write(130);

    sleep(1);

    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
    servo5.write(90);
    servo6.write(90);

    sleep(1);
  
}

