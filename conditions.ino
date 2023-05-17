void conditions(){



  if (lRead == 1 && mRead == 0 && rRead == 0) {
    Serial.println("go <<");
    analogWrite( motor1_in1, 200);
    analogWrite( motor1_in2, 0 );


    analogWrite( motor1_in3, 0);
    analogWrite( motor1_in4, 0);
  }

  if (lRead == 1 && mRead == 1 && rRead == 0) {
    Serial.println("go <");
    analogWrite( motor1_in1, 255);
    analogWrite( motor1_in2, 0 );


    analogWrite( motor1_in3, 0);
    analogWrite( motor1_in4, 0);
  }

  if (lRead == 0 && mRead == 1 && rRead == 0 && l2Read == 0 && r2Read == 0) {
    Serial.println("go ahead");
    analogWrite( motor1_in1, 230);
    analogWrite( motor1_in2, 0 );


    analogWrite( motor1_in3, 230);
    analogWrite( motor1_in4, 0);




  }

  if (lRead == 0 && mRead == 0 && rRead == 1) {
    Serial.println("go >>");
    analogWrite( motor1_in1, 0);
    analogWrite( motor1_in2, 0 );


    analogWrite( motor1_in3, 150);
    analogWrite( motor1_in4, 0);
  }
  if (lRead == 0 && mRead == 1 && rRead == 1) {
    Serial.println("go >");
    analogWrite( motor1_in1, 0);
    analogWrite( motor1_in2, 0 );


    analogWrite( motor1_in3, 120);
    analogWrite( motor1_in4, 0);
  }
  if (lRead == 1 && mRead == 1 && rRead == 1) {
    Serial.println("go >");

    analogWrite( motor1_in1, 120);
    analogWrite( motor1_in2, 0 );


    analogWrite( motor1_in3, 120);
    analogWrite( motor1_in4, 0);
  }

  if (lRead == 0 && mRead == 0 && rRead == 0 && l2Read == 0 && r2Read == 0 ) {
    Serial.println("stop");

    analogWrite( motor1_in1, 0);
    analogWrite( motor1_in2, 255 );

    analogWrite( motor1_in3, 255);
    analogWrite( motor1_in4, 0);
  }

  if (l2Read == 1 ) {
    Serial.println("LEFT SENSOR DETECT");

    analogWrite( motor1_in1, 255);
    analogWrite( motor1_in2, 0 );

    analogWrite( motor1_in3, 0);
    analogWrite( motor1_in4, 255);
  }
  if (r2Read == 1 ) {
    Serial.println("RIGHT SENSOR DETECT");

    analogWrite( motor1_in1, 0);
    analogWrite( motor1_in2, 210 );

    analogWrite( motor1_in3, 210);
    analogWrite( motor1_in4, 0);
  }
   if (lRead == 0 && mRead == 1 && rRead == 0 && l2Read == 0 && r2Read == 1 ) {
    Serial.println("stop");

    analogWrite( motor1_in1, 255);
    analogWrite( motor1_in2, 0 );

    analogWrite( motor1_in3, 255);
    analogWrite( motor1_in4, 0);
  }
 if (lRead == 0 && mRead == 1 && rRead == 1 && l2Read == 0 && r2Read == 1 ) {
    Serial.println("stop");

    analogWrite( motor1_in1, 0);
    analogWrite( motor1_in2, 255 );

    analogWrite( motor1_in3, 255);
    analogWrite( motor1_in4, 0);
  }
   if (lRead == 1 && mRead == 1 && rRead == 1 && l2Read == 1 && r2Read == 1 ) {
    Serial.println("stop");

    analogWrite( motor1_in1, 0);
    analogWrite( motor1_in2, 0 );

    analogWrite( motor1_in3, 0);
    analogWrite( motor1_in4, 0);
  }
 if (lRead == 1 && mRead == 1 && rRead == 0 && l2Read == 0 && r2Read == 0 ) {
    Serial.println("stop");

    analogWrite( motor1_in1, 255);
    analogWrite( motor1_in2, 0 );

    analogWrite( motor1_in3, 255);
    analogWrite( motor1_in4, 0);
  }
 if (lRead == 0 && mRead == 1 && rRead == 1 && l2Read == 0 && r2Read == 0 ) {
    Serial.println("stop");

    analogWrite( motor1_in1, 255);
    analogWrite( motor1_in2, 0 );

    analogWrite( motor1_in3, 255);
    analogWrite( motor1_in4, 0);
  }
  if (lRead == 1 && mRead == 1 && rRead == 0 && l2Read == 1 && r2Read == 0 ) {
    Serial.println("stop");

    analogWrite( motor1_in1, 255);
    analogWrite( motor1_in2, 0 );

    analogWrite( motor1_in3, 0);
    analogWrite( motor1_in4, 255);
  }
   if (lRead == 0 && mRead == 0 && rRead == 0 && l2Read == 1 && r2Read == 1 ) {
    Serial.println("stop");

    analogWrite( motor1_in1, 255);
    analogWrite( motor1_in2, 0 );

    analogWrite( motor1_in3, 0);
    analogWrite( motor1_in4, 255);
  }



}
