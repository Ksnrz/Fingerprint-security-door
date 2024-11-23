#include <Servo.h>

Servo myservo;
int angle = 0;

void setup() {
  myservo.attach(9);  // เชื่อมต่อกับขา 9
    // หมุนจาก 0 ถึง 180 องศา
  for(angle = 0; angle <= 90; angle++) {
    myservo.write(angle);  // หมุนไปที่มุมที่กำหนด
    delay(15);              // รอเวลา 15ms ให้เซอร์โวหมุน
  }
  delay(2000);
  // หมุนจาก 180 กลับมาที่ 0 องศา
  for(angle = 90; angle >= 0; angle--) {
    myservo.write(angle);  // หมุนกลับมาที่มุมที่กำหนด
    delay(15);       // รอเวลา 15ms ให้เซอร์โวหมุน
  }
}

void loop() {

}
