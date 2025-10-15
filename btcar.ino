#include <Dabble.h>
#include <SoftwareSerial.h>

// hc10 pins
#define BT_RX 2  // rx ard - tx modul
#define BT_TX 3  // tx ard - rx modul

SoftwareSerial BT(BT_RX, BT_TX);

// hbridge pins
#define IN1 4
#define IN2 5
#define IN3 6
#define IN4 7

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  BT.begin(9600);
  Dabble.begin(BT);

  Serial.begin(9600);
  Serial.println("start");
}

void loop() {
  Dabble.processInput();

  if (GamePad.isUpPressed()) {
    forward();
  }
  else if (GamePad.isDownPressed()) {
    backward();
  }
  else if (GamePad.isLeftPressed()) {
    left();
  }
  else if (GamePad.isRightPressed()) {
    right();
  }
  else {
    stop();
  }
}

// for motors
void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  Serial.println("forward");
}

void backward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  Serial.println("backward");
}

void left() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  Serial.println("left");
}

void right() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  Serial.println("right");
}

void stop() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  Serial.println("stop");
}