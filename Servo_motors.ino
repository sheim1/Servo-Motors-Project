#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);

  // البداية من المنتصف
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
}

void loop() {

  // الحركة يمين
  for (int angle = 90; angle <= 180; angle++) {
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
    delay(10);
  }

  // الحركة يسار
  for (int angle = 180; angle >= 0; angle--) {
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
    delay(10);
  }

  // الرجوع إلى المنتصف
  for (int angle = 0; angle <= 90; angle++) {
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);
    delay(10);
  }

  // تثبيت عند 90 درجة
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);

  // إيقاف البرنامج
  while (true) {
  }
}