float navigate (float waypoint_x,float waypoint_y, float current_x, float current_y, float heading)

{
  float angle;
  float slope;
  angle = atan2((waypoint_y-current_y),(waypoint_x-current_x));
  angle = heading-angle;
  return angle;
}

