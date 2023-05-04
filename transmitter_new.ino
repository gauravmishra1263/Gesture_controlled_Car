#include <VirtualWire.h>
#include <MPU6050_tockn.h>
#include <Wire.h>

char *data;
MPU6050 mpu6050(Wire);

long timer = 0;

void setup() 
  {

   vw_set_tx_pin(4);
   vw_setup(2000);
    
   Serial.begin(9600);
   Wire.begin();
   mpu6050.begin();
}

void loop()
  {
    mpu6050.update();
    
    Serial.print("accX : ");
    Serial.print(mpu6050.getAccX());
    Serial.print("\taccY : ");
    Serial.print(mpu6050.getAccY());
    Serial.print("\taccZ : ");
    Serial.println(mpu6050.getAccZ());

   if (mpu6050.getAccX() >= 0.40)
{                                          //FORWARD
   data="f";
   vw_send((uint8_t *)data,strlen(data));
   vw_wait_tx();
   delay(500);
        
   Serial.println("forward");
}
  else if(mpu6050.getAccX() <= -0.55)
{                                          //BACKWARD
  data="b";
  vw_send((uint8_t *)data, strlen(data));
  vw_wait_tx();
  delay(500);
        
  Serial.println("backward");
    
}
  else if(mpu6050.getAccY() >= 0.40)
{                                                 
  data="l";
  vw_send((uint8_t *)data, strlen(data));
  vw_wait_tx();
  delay(500);

   Serial.println("left");  //LEFT
}
  else if(mpu6050.getAccY() <= -0.40)
{                                          //RIGHT

  data="r";
  vw_send((uint8_t *)data, strlen(data));
  vw_wait_tx();
  delay(500);
   
  Serial.println("right");
}
   else if(mpu6050.getAccX() >= -0.30 )
 {
  data="s";
  vw_send((uint8_t *)data, strlen(data));
  vw_wait_tx();
  delay(500);

  Serial.println("stop");
    
  }
}
