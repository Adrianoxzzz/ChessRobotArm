#include <Servo.h>

Servo L1L;  // Motion range 180 - 0
Servo L1R;  // Motion range 0 - 180
Servo L2L;  // Motion range 173 - 0
Servo L2R;  // Motion Range 7 - 180
Servo L3R;  // Motion Range 7 - 180
int offset = 90;

//--------------Auxiliary Functions-----------//

int CalcLinkL1(int LinkR1) {
  return 180 - LinkR1;
}
int CalcLinkL2(int LinkR2) {
  return 196 - LinkR2;
}
void setup() {
  int L1ang = 90;
  int L2ang = 90;
  int L3ang = 90;
  L1L.attach(5);
  L2L.attach(6);
  L1R.attach(9);
  L2R.attach(10);
  L3R.attach(11);
  L1R.write(L1ang);
  L2R.write(L2ang);
  L3R.write(L3ang);
  L1L.write(CalcLinkL1(L1ang));
  L2L.write(CalcLinkL2(L2ang));
  /*L1L.write(110);
  L2L.write(116);
  L1R.write(70);
  L2R.write(70);*/
}

void loop() {
  
}
