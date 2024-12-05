void setup() {
  Serial.begin(9600);  // Configura la velocidad de transmisión
}

void loop() {
  int sensorValue = analogRead(A0);  // Lee la señal del ECG en el pin A0
  Serial.println(sensorValue);  // Envía el valor al puerto serie
  delay(30);  // Ajusta según la frecuencia de muestreo deseada
}
