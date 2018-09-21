int red_led = 2; /* red led placed to pin 2*/
int green_led = 3;/* green led placed to pin 2*/
int blue_led = 4;/* blue led placed to pin 2*/
int button= 5;/*Button placed to pin 5*/
// use #defines for leds ..pins
#define button 5
#define PI 3142


/*functiom for blinking led
 * requires the led pin number 
 * and time duration for delay
 */
void blink_led(int led ,int ms); //function prototype --should be in header files
/* function used to display my name 
 *  requres no parameters
 *  prints by name
 */
void display_name(void);




void setup() {
  /*setting the red led as outputs*/
pinMode(red_led,OUTPUT);
pinMode(green_led,OUTPUT);
pinMode(blue_led,OUTPUT);
pinMode(button,INPUT);
/*Initialize serial console with 9600 baud rate /speed */
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //calling the blink led function
/*blink_led(red_led , 500);*/
blink_led(blue_led , 1000);
display_name();
process_button_state(button);



}
void process_button_state(int button_pressed){

int button_state = digitalRead(button);
if(button_state ==HIGH){
  //turn off led and desplay on serial "led is off"
  digitalWrite(red_led,LOW);
  Serial.println("red led off");
}else{
  //turn on red led and display on serial "red led is on"

 digitalWrite(red_led, HIGH);
}
  Serial.println("red led is on");
}
//functiom for blinking led
void blink_led(int led ,int ms){
  digitalWrite(led ,HIGH);
  delay(ms);
  digitalWrite(led,LOW);
  delay(ms);
}
void display_name(void){
Serial.println("Hello my name is Sein");
}
