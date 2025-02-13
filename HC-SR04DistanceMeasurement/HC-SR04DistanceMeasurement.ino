#define trig 9
#define echo 8

int timer;
int distance;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  timer = pulseIn(echo, HIGH);
  distance = (timer / 2) / 28.5;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}
