#include <Wire.h>
#include <MPU6050_tockn.h>
#include <Servo.h>

MPU6050 mpu6050(Wire);
Servo servo;

void setup()
{
    Serial.begin(9600);
    Wire.begin();
    mpu6050.begin();
    mpu6050.calcGyroOffsets(true);
    servo.attach(9);

}

void loop()
{
  mpu6050.update();

  
  float angle = mpu6050.getAngleX();
  float servoAngle = 90 - angle;
  servoAngle = constrain(servoAngle, 0, 180);
  
  servo.write(servoAngle);


  delay(20);
    
}
