int red_light_pin= 6;
int green_light_pin = 5;
int blue_light_pin = 3;
int r,g,b = 0;
int sDelay = 1;
void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}
void loop() {
  rainbow_diffuse_mode2();
}
void rainbow_mode(){
  RGB_color(255, 0, 0); // Red
  delay(sDelay);
  RGB_color(0, 255, 0); // Green
  delay(sDelay);
  RGB_color(0, 0, 255); // Blue
  delay(sDelay);
  RGB_color(255, 255, 125); // Raspberry
  delay(sDelay);
  RGB_color(0, 255, 255); // Cyan
  delay(sDelay);
  RGB_color(255, 0, 255); // Magenta
  delay(sDelay);
  RGB_color(255, 255, 0); // Yellow
  delay(sDelay);
  RGB_color(255, 255, 255); // White
  delay(sDelay);
}
void rainbow_diffuse_mode2(){
  for(int i = 0; i < 256; i++){
    if(r < 255){
      RGB_color(i,0,0);
      delay(sDelay / 10);
    }
  }
  for(int i = 0; i < 256; i++){
    RGB_color(r,i,0);
    delay(sDelay);
  }  
  for(int i = 255; i > 0; i--){
    RGB_color(i,g,0);
    delay(sDelay);
  }
  for(int i = 0; i < 256; i++){
    RGB_color(0,g, i);
    delay(sDelay);
  }
  for(int i = 255; i > 0; i--){
    RGB_color(0,i,b);
    delay(sDelay);
  }
  for(int i = 0; i < 256; i++){
    RGB_color(i,0,b);
    delay(sDelay);
  }
  for(int i = 255; i > 0; i--){
    RGB_color(r,0,i);
    delay(sDelay);
  }
}
void rainbow_diffuse_mode(){
  for(int i = 0; i < 256; i+= 5){
    RGB_color(i,0,0);
    delay(sDelay / 10);
  }
  for(int i = 0; i < 256; i += 5){
    RGB_color(0,i,0);
    delay(sDelay / 10);
  }
  for(int i = 0; i < 256; i += 5){
    RGB_color(0,0,i);
    delay(sDelay / 10);
  }
  for(int i = 0; i < 256; i += 5){
    RGB_color(i,i,0);
    delay(sDelay / 10);
  }
  for(int i = 0; i < 256; i += 5){
    RGB_color(0,i,i);
    delay(sDelay / 10);
  }
  for(int i = 0; i < 256; i += 5){
    RGB_color(i,0,i);
    delay(sDelay / 10);
  }
  for(int i = 0; i < 256; i += 5){
    RGB_color(i,i,0);
    delay(sDelay / 10);
  }
  for(int i = 0; i < 256; i += 5){
    RGB_color(i,i,i);
    delay(sDelay / 10);
  }
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  r = red_light_value;
  g = green_light_value;
  b = blue_light_value;
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
