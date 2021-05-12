boolean IR_Sensor;

void setup() {
  Serial.begin(9600);
  pinMode(9, INPUT);
}

void loop() {
  IR_Sensor = digitalRead(9);
  Serial.println(IR_Sensor);

}
