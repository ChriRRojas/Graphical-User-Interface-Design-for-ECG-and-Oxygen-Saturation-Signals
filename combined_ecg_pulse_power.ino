
// Pines para los sensores
#define ECG_PIN A0          // Pin para el sensor de ECG
#define PULSE_OX_PIN A1     // Pin para el sensor de pulsioxímetro
#define POT_PIN A2          // Pin para el potenciómetro

void setup() {
  Serial.begin(9600);  // Inicializa la comunicación serial
}

void loop() {
  // Lectura de los valores analógicos
  int ecgValue = analogRead(ECG_PIN);          // Señal del ECG
  int pulseOxValue = analogRead(PULSE_OX_PIN); // Señal del pulsioxímetro
  int potValue = analogRead(POT_PIN);          // Señal del potenciómetro

  // Envío de los datos al puerto serie en formato compatible con Serial Plotter
  Serial.print(ecgValue);      // Valor del ECG
  Serial.print("\t");          // Separador de tabulación
  Serial.print(pulseOxValue);  // Valor del pulsioxímetro
  Serial.print("\t");          // Separador de tabulación
  Serial.println(potValue);    // Valor del potenciómetro

  delay(30);  // Ajustar según la frecuencia de muestreo deseada
}
