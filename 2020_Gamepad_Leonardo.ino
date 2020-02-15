#include <HID-Project.h>
#include <HID-Settings.h>

#include "HID-Project.h"

const int buttonOne = 1;
const int buttonTwo = 3;
const int buttonThree = 5;
const int buttonFour = 7;
const int buttonFive = 9;
const int buttonSix = 11;
const int buttonSeven = 13;
//const int buttonEight = 15;
//const int buttonNine = 17;
//const int buttonTen = 19;
//const int buttonEleven = 21;
//const int buttonTwelve = 23;
//const int buttonThirteen = 25;
const int ledOne = 0;
const int ledTwo = 2;
const int ledThree = 4;
const int ledFour = 6;
const int ledFive = 8;
const int ledSix = 10;
const int ledSeven = 12;
//const int ledEight = 14;
//const int ledNine = 16;
//const int ledTen = 18;
//const int ledEleven = 20;
//const int ledTwelve = 22;
//const int ledThirteen = 24;

void setup() {
  pinMode(buttonOne, INPUT_PULLUP);
  pinMode(buttonTwo, INPUT_PULLUP);
  pinMode(buttonThree, INPUT_PULLUP);
  pinMode(buttonFour, INPUT_PULLUP);
  pinMode(buttonFive, INPUT_PULLUP);
  pinMode(buttonSix, INPUT_PULLUP);
  pinMode(buttonSeven, INPUT_PULLUP);
//  pinMode(buttonEight, INPUT_PULLUP);
//  pinMode(buttonNine, INPUT_PULLUP);
//  pinMode(buttonTen, INPUT_PULLUP);
//  pinMode(buttonEleven, INPUT_PULLUP);
//  pinMode(buttonTwelve, INPUT_PULLUP);
//  pinMode(buttonThirteen, INPUT_PULLUP);
  pinMode(ledOne, OUTPUT);
  pinMode(ledTwo, OUTPUT);
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour, OUTPUT);
  pinMode(ledFive, OUTPUT);
  pinMode(ledSix, OUTPUT);
  pinMode(ledSeven, OUTPUT);
//  pinMode(ledEight, OUTPUT);
//  pinMode(ledNine, OUTPUT);
//  pinMode(ledTen, OUTPUT);
//  pinMode(ledEleven, OUTPUT);
//  pinMode(ledTwelve, OUTPUT);
//  pinMode(ledThirteen, OUTPUT);
  
  Gamepad.begin();

}

void loop() {

//if (!digitalRead(buttonZero)) {
//    Gamepad.press(0);
//  }
//  else{
//    Gamepad.release(0);
//  }
  
if (!digitalRead(buttonOne)) {
    Gamepad.press(1);
    digitalWrite(ledOne, HIGH);
  }
  else{
    Gamepad.release(1);
    digitalWrite(ledOne, LOW);
  }

if (!digitalRead(buttonTwo)) {
    Gamepad.press(2);
    digitalWrite(ledTwo, HIGH);
  }
  else{
    Gamepad.release(2);
    digitalWrite(ledTwo, LOW);
  }

if (!digitalRead(buttonThree)) {
    Gamepad.press(3);
    digitalWrite(ledThree, HIGH);
  }
  else{
    Gamepad.release(3);
    digitalWrite(ledThree, LOW);
     }

if (!digitalRead(buttonFour)) {
    Gamepad.press(4);
    digitalWrite(ledFour, HIGH);
  }
  else{
    Gamepad.release(4);
    digitalWrite(ledFour, LOW);
  }

if (!digitalRead(buttonFive)) {
    Gamepad.press(5);
    digitalWrite(ledFive, HIGH);
  }
  else{
    Gamepad.release(5);
    digitalWrite(ledFive, LOW);
  }

if (!digitalRead(buttonSix)) {
    Gamepad.press(6);
    digitalWrite(ledSix, HIGH);
  }
  else{
    Gamepad.release(6);
    digitalWrite(ledSix, LOW);
  }  
  
if (!digitalRead(buttonSeven)) {
    Gamepad.press(7);
    digitalWrite(ledSeven, HIGH);
  }
  else{
    Gamepad.release(7);
    digitalWrite(ledSeven, LOW);
  }

//if (!digitalRead(buttonEight)) {
//    Gamepad.press(8);
//    digitalWrite(ledEight, HIGH);
//  }
//  else{
//    Gamepad.release(8);
//    digitalWrite(ledEight, LOW):
//  }
//
//if (!digitalRead(buttonNine)) {
//    Gamepad.press(9);
//    digitalWrite(ledNine, HIGH);
//  }
//  else{
//    Gamepad.release(9);
//    digitalWrite(ledNine, LOW):
//  }
//
//if (!digitalRead(buttonTen)) {
//    Gamepad.press(10);
//    digitalWrite(ledTen, HIGH);
//  }
//  else{
//    Gamepad.release(10);
//    digitalWrite(ledTen, LOW):
//  }
//if (!digitalRead(buttonEleven)) {
//    Gamepad.press(11);
//    digitalWrite(ledEleven, HIGH);
//  }
//  else{
//    Gamepad.release(11);
//    digitalWrite(ledEleven, LOW):
//  }
//if (!digitalRead(buttonTwelve)) {
//    Gamepad.press(12);
//    digitalWrite(ledTwelve, HIGH);
//  }
//  else{
//    Gamepad.release(12);
//    digitalWrite(ledTwelve, LOW):
//  }
//if (!digitalRead(buttonThirteen)) {
//    Gamepad.press(13);
//    digitalWrite(ledThirteen, HIGH);
//  }
//  else{
//    Gamepad.release(13);
//    digitalWrite(ledThirteen, LOW):
//  }            
  Gamepad.write();
    
}
