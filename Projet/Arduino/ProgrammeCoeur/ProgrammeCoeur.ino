#define led0
#define led1
#define led2
#define led3
#define led4
#define led5
#define led6
#define led7
#define led8
#define led9

void setup() {
  // put your setup code here, to run once:
pinMode(led0, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);
pinMode(led9, OUTPUT);
pinMode(led0, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1, HIGH);
delay(200);
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
delay(200);
digitalWrite(led2, LOW);
digitalWrite(led3,HIGH);
delay(200);
digitalWrite(led3, LOW);
digitalWrite(led4, HIGH);
delay(200);
digitalWrite(led4, LOW);
}
