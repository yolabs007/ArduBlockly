boolean IR_Sensor;

void setup() {
  Serial.begin(9600);
  pinMode(9, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  IR_Sensor = digitalRead(9);
  Serial.println(IR_Sensor);
  if (IR_Sensor == 1) {
    digitalWrite(13, HIGH);
    delay(1000);
  }
  if (IR_Sensor == 0) {
    digitalWrite(13, LOW);
    delay(1000);
  }

}
