#define NUM_LED 12

int pin_led[NUM_LED] = {2,3,4,5,6,7,8,9,10,11,12,13};

int cnt = 1;

void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<NUM_LED;i++){
    pinMode(pin_led[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if(cnt > 0xfff) cnt = 0;
  led_write(cnt);
  cnt++;
  delay(1000);
}

void led_write(int led_pattern){
  for(int i=0;i<NUM_LED;i++){
    digitalWrite(pin_led[i],(led_pattern>>i)&0x01);
  }
}
