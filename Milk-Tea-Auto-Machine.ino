#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#include <Servo.h>
Servo myservo;
const int pingPin = 8;
int inPin = 9;
const int pingPin2 = 11;
int inPin2 = 10;
int sweat = 0;
 int mo1 = 28;
int mo2 = 29;
int IN1b = 50;
int IN2b = 51;
int IN1a = 48;
int IN2a = 49;
int so1 = 22;
int so2 = 23;
void setup() {

 Serial.begin(9600);
 Serial.begin(9600);
 myservo.attach(47);
   pinMode(IN1a, OUTPUT);
 pinMode(IN2a, OUTPUT);
 pinMode(mo1, OUTPUT);
 pinMode(mo2, OUTPUT);
 pinMode(IN1b, OUTPUT);
 pinMode(IN2b, OUTPUT);
  pinMode(so1, OUTPUT);
 pinMode(so2, OUTPUT);
 myservo.write(30);
   lcd.begin();
  lcd.backlight();
}

long microsecondsToCentimeters(long microseconds)
{
// The speed of sound is 340 m/s or 29 microseconds per centimeter.
// The ping travels out and back, so to find the distance of the
// object we take half of the distance travelled.
return microseconds / 29 / 2;
}


void loop() 
{ long duration, ma;
pinMode(pingPin, OUTPUT);
digitalWrite(pingPin, LOW);
delayMicroseconds(2);
digitalWrite(pingPin, HIGH);
delayMicroseconds(5);
digitalWrite(pingPin, LOW);
pinMode(inPin, INPUT);
duration = pulseIn(inPin, HIGH);
ma = microsecondsToCentimeters(duration);
Serial.print(ma);
Serial.print(" sweat");

 long duration2, ma2;
pinMode(pingPin2, OUTPUT);
digitalWrite(pingPin2, LOW);
delayMicroseconds(2);
digitalWrite(pingPin2, HIGH);
delayMicroseconds(5);
digitalWrite(pingPin2, LOW);
pinMode(inPin2, INPUT);
duration2 = pulseIn(inPin2, HIGH);
ma2 = microsecondsToCentimeters(duration2);
Serial.print(ma2);
Serial.print(" glass");
Serial.println();



lcd.setCursor(1, 0);lcd.print("s");
lcd.setCursor(2, 0);lcd.print("w");
lcd.setCursor(3, 0);lcd.print("e");
lcd.setCursor(4, 0);lcd.print("a");
lcd.setCursor(5, 0);lcd.print("t");

delay(500);

 if(sweat==1&&ma2<15)
 {
     digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(1000); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(1000); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(800); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(800); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(600); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(600); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(400); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(400); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(200); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(200); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100);
lcd.setCursor(2, 1);lcd.print("P");
   lcd.setCursor(3, 1);lcd.print("R");
   lcd.setCursor(4, 1);lcd.print("O");
   lcd.setCursor(5, 1);lcd.print("C");
   lcd.setCursor(6, 1);lcd.print("E");
   lcd.setCursor(7, 1);lcd.print("S");
   lcd.setCursor(8, 1);lcd.print("S");
   lcd.setCursor(9, 1);lcd.print("I");
   lcd.setCursor(10, 1);lcd.print("N");
   lcd.setCursor(11, 1);lcd.print("G");
  myservo.attach(52);
 myservo.write(0);
 digitalWrite(mo2, LOW);
 digitalWrite(mo1, HIGH);
 delay(1500); 
  digitalWrite(mo1, LOW);
 digitalWrite(mo2, LOW);
 
 myservo.write(120); 
delay(500); 
myservo.write(30); 
delay(3000); 

 digitalWrite(mo2, LOW);
 digitalWrite(mo1, HIGH);
 delay(3000); 
  digitalWrite(mo1, LOW);
 digitalWrite(mo2, LOW);
 digitalWrite(IN2a, HIGH );
 digitalWrite(IN1a, LOW);
 delay(25000); 
   digitalWrite(IN1a, LOW);
 digitalWrite(IN2a, LOW);
 delay(3000); 
 digitalWrite(mo1, LOW);
 digitalWrite(mo2, HIGH);
 delay(7 000); 
  digitalWrite(mo1, LOW);
 digitalWrite(mo2, LOW);
 digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(300); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(300);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(300); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(300);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(300); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(300);
lcd.clear();
   lcd.setCursor(2, 0);lcd.print("F");
   lcd.setCursor(4, 0);lcd.print("I");
   lcd.setCursor(6, 0);lcd.print("N");
   lcd.setCursor(8, 0);lcd.print("I");
   lcd.setCursor(10, 0);lcd.print("S");
   lcd.setCursor(12, 0);lcd.print("H");
delay(15000);
lcd.clear();
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(1000); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(300);
  }
 else if(sweat==2&&ma2<15)
 {
  digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(1000); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(1000); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(800); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(800); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(600); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(600); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(400); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(400); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(200); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(200); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100);
lcd.setCursor(2, 1);lcd.print("P");
   lcd.setCursor(3, 1);lcd.print("R");
   lcd.setCursor(4, 1);lcd.print("O");
   lcd.setCursor(5, 1);lcd.print("C");
   lcd.setCursor(6, 1);lcd.print("E");
   lcd.setCursor(7, 1);lcd.print("S");
   lcd.setCursor(8, 1);lcd.print("S");
   lcd.setCursor(9, 1);lcd.print("I");
   lcd.setCursor(10, 1);lcd.print("N");
   lcd.setCursor(11, 1);lcd.print("G");
  myservo.attach(52);
 myservo.write(0);
 digitalWrite(mo2, LOW);
 digitalWrite(mo1, HIGH);
 delay(1500); 
  digitalWrite(mo1, LOW);
 digitalWrite(mo2, LOW);
 
 myservo.write(160); 
delay(500); // หน่วงเวลา 1000ms
myservo.write(30); // สั่งให้ Servo หมุนไปองศาที่ 90
delay(3000); // หน่วงเวลา 1000ms

 digitalWrite(mo2, LOW);
 digitalWrite(mo1, HIGH);
 delay(3000); 
  digitalWrite(mo1, LOW);
 digitalWrite(mo2, LOW);
 
 digitalWrite(IN2a, HIGH );
 digitalWrite(IN1a, LOW);
  digitalWrite(IN1b, HIGH );
 digitalWrite(IN2b, LOW);
  delay(10000); 
  digitalWrite(IN1b, LOW);
 digitalWrite(IN2b, LOW);
 delay(13000); 
   digitalWrite(IN1a, LOW);
 digitalWrite(IN2a, LOW);
 delay(3000); 

   digitalWrite(mo1, LOW);
 digitalWrite(mo2, HIGH);
 delay(7000); 
  digitalWrite(mo1, LOW);
 digitalWrite(mo2, LOW);
 digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(300); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(300);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(300); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(300);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(300); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(300);
lcd.clear();
   lcd.setCursor(2, 0);lcd.print("F");
   lcd.setCursor(4, 0);lcd.print("I");
   lcd.setCursor(6, 0);lcd.print("N");
   lcd.setCursor(8, 0);lcd.print("I");
   lcd.setCursor(10, 0);lcd.print("S");
   lcd.setCursor(12, 0);lcd.print("H");
delay(15000);
lcd.clear();
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(1000); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(300);
  }
 else if(sweat==3&&ma2<15)
 {
     digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(1000); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(1000); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(800); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(800); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(600); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(600); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(400); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(400); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(200); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(200); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100); 
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(100); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(100);
lcd.setCursor(2, 1);lcd.print("P");
   lcd.setCursor(3, 1);lcd.print("R");
   lcd.setCursor(4, 1);lcd.print("O");
   lcd.setCursor(5, 1);lcd.print("C");
   lcd.setCursor(6, 1);lcd.print("E");
   lcd.setCursor(7, 1);lcd.print("S");
   lcd.setCursor(8, 1);lcd.print("S");
   lcd.setCursor(9, 1);lcd.print("I");
   lcd.setCursor(10, 1);lcd.print("N");
   lcd.setCursor(11, 1);lcd.print("G");
  myservo.attach(52);
 myservo.write(0);
 digitalWrite(mo2, LOW);
 digitalWrite(mo1, HIGH);
 delay(1300); 
  digitalWrite(mo1, LOW);
 digitalWrite(mo2, LOW);
 
 myservo.write(120); 
delay(500); // หน่วงเวลา 1000ms
myservo.write(30); // สั่งให้ Servo หมุนไปองศาที่ 90
delay(3000); // หน่วงเวลา 1000ms

 digitalWrite(mo2, LOW);
 digitalWrite(mo1, HIGH);
 delay(3000); 
  digitalWrite(mo1, LOW);
 digitalWrite(mo2, LOW);
 digitalWrite(IN2a, HIGH );
 digitalWrite(IN1a, LOW);
  digitalWrite(IN1b, HIGH );
 digitalWrite(IN2b, LOW);
  delay(15000); 
  digitalWrite(IN1b, LOW);
 digitalWrite(IN2b, LOW);
 delay(10000); 
   digitalWrite(IN1a, LOW);
 digitalWrite(IN2a, LOW);
 delay(3000); 
   digitalWrite(mo1, LOW);
 digitalWrite(mo2, HIGH);
 delay(7000); 
  digitalWrite(mo1, LOW);
 digitalWrite(mo2, LOW);
 digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(300); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(300);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(300); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(300);
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(300); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(300);
lcd.clear();
   lcd.setCursor(2, 0);lcd.print("F");
   lcd.setCursor(4, 0);lcd.print("I");
   lcd.setCursor(6, 0);lcd.print("N");
   lcd.setCursor(8, 0);lcd.print("I");
   lcd.setCursor(10, 0);lcd.print("S");
   lcd.setCursor(12, 0);lcd.print("H");
delay(15000);
lcd.clear();
digitalWrite(so2, LOW);digitalWrite(so1, HIGH);delay(1000); digitalWrite(so1, LOW);digitalWrite(so2, LOW);delay(300);
  }
else if(ma>6) {
   lcd.setCursor(6, 0);lcd.print("1");
   lcd.setCursor(7, 0);lcd.print("0");
   lcd.setCursor(8, 0);lcd.print("0");
   lcd.setCursor(9, 0);lcd.print("%");
 sweat =3;
  }
else if(ma<7&&ma>4){
   lcd.setCursor(6, 0);lcd.print(".");
   lcd.setCursor(7, 0);lcd.print("5");
   lcd.setCursor(8, 0);lcd.print("0");
   lcd.setCursor(9, 0);lcd.print("%");
sweat = 2;
  }
 else if(ma<5){
   lcd.setCursor(6, 0);lcd.print(".");
   lcd.setCursor(7, 0);lcd.print(".");
   lcd.setCursor(8, 0);lcd.print("0");
   lcd.setCursor(9, 0);lcd.print("%");
 sweat =1;
  }





}
