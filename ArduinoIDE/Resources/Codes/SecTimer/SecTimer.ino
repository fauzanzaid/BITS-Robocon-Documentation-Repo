int sec_elapsed;

void setup() {
  Serial.begin(9600);
  sec_elapsed = 0;
}

void loop() {
  Serial.print(sec_elapsed);
  Serial.println(" seconds elapsed");
  delay(1000);
  sec_elapsed += 1;
}
