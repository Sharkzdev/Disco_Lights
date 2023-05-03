void setup() {
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  randomSeed(analogRead(0)); // initialize random number generator
}

void loop() {
  int randomPin = random(3); // generate a random number 0, 1, or 2
  int randomTime = random(1000);
  // if (randomPin == 0) {
  //   digitalWrite(8, HIGH); // turn on Pin 8
  //   delay(100); // wait for 1 second
  //   digitalWrite(8, LOW); // turn off Pin 8
  // } else if (randomPin == 1) {
  //   digitalWrite(4, HIGH); // turn on Pin 4
  //   delay(100); // wait for 1 second
  //   digitalWrite(4, LOW); // turn off Pin 4
  // } else {
  //   digitalWrite(2, HIGH); // turn on Pin 2
  //   delay(100); // wait for 1 second
  //   digitalWrite(2, LOW); // turn off Pin 2
  // }

  digitalWrite(8, HIGH); // turn on Pin 8
  delay(randomTime); // wait for 1 second
  digitalWrite(8, LOW); // turn off Pin 8

  digitalWrite(4, HIGH); // turn on Pin 4
  delay(randomTime); // wait for 1 second
  digitalWrite(4, LOW);

  digitalWrite(2, HIGH); // turn on Pin 2
  delay(randomTime); // wait for 1 second
  digitalWrite(2, LOW); // turn off Pin 2
}