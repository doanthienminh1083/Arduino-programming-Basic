//Khi sensor doc duoc gia tri 1 thi den led nhap nhay

int led=13;//pin led
int sensorPin=12;//select the input pin KY-033
int sensorValue=0;//variable to store the value coming from the sensor

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue=digitalRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue==1)
  {
      digitalWrite(led,HIGH);
      delay(1000);
      digitalWrite(led,LOW); 
      delay(1000);
    }
  else
      digitalWrite(led,LOW); 
}
