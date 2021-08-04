#include<Servo.h> Servo myServo1; Servo myServo2; Servo myServo3; Servo myServo4; Servo myServo5; int pos = 0; //
void setup()
{
myServo1.attach(7); // attaches the servo myServo2.attach(6); // attaches the servo myServo3.attach(5); // attaches the servo myServo4.attach(4); // attaches the servo myServo5.attach(3); // attaches the servo
void loop() {
}
variable used to change the
servo position
on pin 7 to the servo object
on pin 6 to the servo object
on pin 5 to the servo object
on pin 4 to the servo object
on pin 3 to the servo object
for(pos=0;pos<=90;pos++){//ascending loop
// sets the servo position from 0 to 90 gradually myServo1.write(pos);
myServo2.write(pos);
myServo3.write(pos);
myServo4.write(pos);
myServo5.write(pos);
delay(30);
}
for(pos=90;pos>=0;pos--){//descending loop
// sets the servo position from 90 to 0 gradually myServo1.write(pos);
myServo2.write(pos);
myServo3.write(pos);
myServo4.write(pos);
myServo5.write(pos);
delay(30);
} }
