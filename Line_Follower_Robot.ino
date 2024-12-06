#define SENSOR_KANAN 6
#define SENSOR_KIRI 7
#define MOTOR_KANAN 8
#define MOTOR_KIRI 9

bool SensorKanan;

void setup() {
  // put your setup code here, to run once:
  pinMode(SENSOR_KANAN, INPUT);
  pinMode(SENSOR_KIRI, INPUT);
  pinMode(MOTOR_KANAN, OUTPUT);
  pinMode(MOTOR_KIRI, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  SensorKanan = digitalRead(SENSOR_KANAN);

  if(!SensorKanan){
    digitalWrite(MOTOR_KANAN, HIGH);
    digitalWrite(LED_BUILTIN, HIGH);
  }else{
    digitalWrite(MOTOR_KANAN, LOW);
    digitalWrite(LED_BUILTIN, LOW);
  }

  Serial.println(digitalRead(SENSOR_KANAN));

  if(!digitalRead(SENSOR_KIRI)){
    digitalWrite(MOTOR_KIRI, HIGH);
  }else{
    digitalWrite(MOTOR_KIRI, LOW);
  }

}
