float sensor = A0; // Pin del sensor de pulso cardíaco
float pot = A1;    // Pin del potenciómetro
float lec1, lec2, volt1, volt2;

void setup() {
  Serial.begin(9600);        // Inicializa la comunicación serial
  pinMode(sensor, INPUT);    // Configura el pin del sensor como entrada
  pinMode(pot, INPUT);       // Configura el pin del potenciómetro como entrada
}

void loop() {
  // Datos del sensor de pulso cardíaco
  lec1 = analogRead(sensor);       // Lee el valor analógico del sensor
  volt1 = (lec1 * 5) / 1024;       // Convierte el valor a voltaje
  
  // Datos del potenciómetro
  lec2 = analogRead(pot);          // Lee el valor analógico del potenciómetro
  volt2 = (lec2 * 5) / 1024;       // Convierte el valor a voltaje
  
  // Envía los datos al monitor serial
  Serial.print(volt1);
  Serial.print(", ");
  Serial.println(volt2);
  
  delay(20);  // Pausa de 20 ms entre lecturas
}

