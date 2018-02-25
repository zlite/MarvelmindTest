void navigate (double waypoint_x, double waypoint_y, double hedgehog_x, double hedgehog_y)
{
       double delta_x, delta_y, current_angle, desired_angle, steer_angle;
       delta_x = hedgehog_x-old_x;
       delta_y = hedgehog_y - old_y;
       current_angle = atan2(delta_y,delta_x);
//       Serial.print ("Current angle = ");
//       Serial.println(current_angle);
       delta_x = waypoint_x-hedgehog_x;
       delta_y = waypoint_y-hedgehog_y;
       desired_angle = atan2(delta_y,delta_x);
//       Serial.print ("Desired angle = ");
//       Serial.println(desired_angle);
       old_x = hedgehog_x;
       old_y = hedgehog_y;
       steer_angle = desired_angle-current_angle;
       Serial.print ("Steer angle = ");
       Serial.println(steer_angle);
       steer(steer_angle,speed);
}

