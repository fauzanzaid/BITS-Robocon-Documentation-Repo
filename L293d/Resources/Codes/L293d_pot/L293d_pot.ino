int inp_pin[4] = {3,9,10,11};
int pot_pin[4] = {A0,A1,A2,A3};

void setup(){
  
}

void loop(){
  for(int i=0; i<4; i++){
    analogWrite(inp_pin[i], analogRead(pot_pin[i])/4);
  }
}
