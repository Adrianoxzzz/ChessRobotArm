#include <Servo.h>

Servo Link1_L;
Servo Link1_R;
Servo Link2_L;
Servo Link2_R;
int offset = 90;

void setup() {
  Link1_L.attach(5);
  Link2_L.attach(6);
  Link1_R.attach(9);
  Link2_R.attach(10);

}


double theta1(double theta_s, double theta_e, double tf)
{
  double a0, a1, a2, a3;
  static unsigned long ts;
  static double endt;
  static double thet;
  double t;

  if (endt != theta_e)
  {
    ts = millis();
    endt = theta_e;
  }
  a0 = theta_s;
  a1 = 0;
  a2 = 3 / (tf * tf) * (theta_e - theta_s);
  a3 = -2 / (tf * tf * tf) * (theta_e - theta_s);
  t = (double)(millis() - ts) / 1000;


  if (t <= tf)
  {

    thet = a0 + a1 * t + a2 * t * t + a3 * t * t * t;
  }

  return thet;
}
double theta2(double theta_s, double theta_e, double tf)
{
  double a0, a1, a2, a3;
  static unsigned long ts;
  static double endt;
  static double thet;
  double t;

  if (endt != theta_e)
  {
    ts = millis();
    endt = theta_e;
  }
  a0 = theta_s;
  a1 = 0;
  a2 = 3 / (tf * tf) * (theta_e - theta_s);
  a3 = -2 / (tf * tf * tf) * (theta_e - theta_s);
  t = (double)(millis() - ts) / 1000;


  if (t <= tf)
  {

    thet = a0 + a1 * t + a2 * t * t + a3 * t * t * t;
  }

  return thet;
}
double ang, ang2;
int state = 1;

void loop() {

  if (state == 1)  {
    ang = theta1(180, 0, 8);
    ang2 = theta2(90, 180, 5);
  }
  if (state == 2)  {
    ang = theta1(0, 180, 8);
    ang2 = theta2(180, 90, 5);
  }
  if (ang < 1) state = 2;
  if (ang > 179.8) state = 1;

  Link1_L.write(180 - ang2);
  Link1_R.write(ang2);
  Link2_L.write(196 - ang);
  Link2_R.write(ang);

}