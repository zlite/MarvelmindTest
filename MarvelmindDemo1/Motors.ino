void steer(double angle, float speed)

{
int ENA=5; 
int IN1=6;
int IN2=7;
int ENB=11; 
int IN3=8;
int IN4=9;
  float speed_left;
  float speed_right;
  speed_left = speed + (angle*60);
  speed_right = speed - (angle*60);

  analogWrite(ENA, speed_left);
  analogWrite(ENB, speed_right);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

}

