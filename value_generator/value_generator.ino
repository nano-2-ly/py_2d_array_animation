void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}
int z =0;
void loop() {
  // put your main code here, to run repeatedly:
  z++;
  for(char i =0; i<64; i++){
    
    if(i==0){
      Serial.print('a');
      Serial.print(' ');
    } 
    else if (i<63){
      Serial.print('b');
      Serial.print(' ');
    }
    if(i==63){
      Serial.print('c');
      Serial.print(' ');
    }
    for(char j =0; j<32; j++){
      Serial.print(i+j+z);
      Serial.print(' ');
      delay(1);
    }
    Serial.print(' ');
    delay(1);
  }
}
