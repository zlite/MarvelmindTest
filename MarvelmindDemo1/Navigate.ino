void navigate (double hedgehog_x, double hedgehog_y, int waypoint_num)
{
       double delta_x, delta_y, current_angle, desired_angle, steer_angle;
       float range;
       delta_x = hedgehog_x-old_x;
       delta_y = hedgehog_y - old_y;
       current_angle = atan2(delta_y,delta_x);
//       Serial.print ("Current angle = ");
//       Serial.println(current_angle);
       delta_x = waypoint[waypoint_num][0]-hedgehog_x;
       delta_y = waypoint[waypoint_num][1]-hedgehog_y;
       range = sqrt(sq(delta_y) + sq(delta_x));
       if (range<3000) waypoint_num = waypoint_num+1;
       desired_angle = atan2(delta_y,delta_x);
//       Serial.print ("Desired angle = ");
//       Serial.println(desired_angle);
       old_x = hedgehog_x;
       old_y = hedgehog_y;
       steer_angle = desired_angle-current_angle;
       Serial.print ("Steer angle = ");
       Serial.println(steer_angle);
       Serial.print ("Range = ");
       Serial.println(range);
       Serial.print("Waypoint num = ");
       Serial.println(waypoint_num);
       steer(steer_angle,speed);
       
}

