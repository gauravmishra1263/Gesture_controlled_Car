# Gesture Controlled Car

[![Tech Stack](https://img.shields.io/badge/Arduino-uno-brightgreen)](https://www.arduino.cc/)
[![Tech Stack](https://img.shields.io/badge/Arduino-nano-brightgreen)](https://www.arduino.cc/)
[![Tech Stack](https://img.shields.io/badge/MPU6050-yellow)](https://invensense.tdk.com/products/motion-tracking/6-axis/mpu-6050/)
[![Tech Stack](https://img.shields.io/badge/RF433-blue)](https://www.sparkfun.com/products/10534)
[![Tech Stack](https://img.shields.io/badge/L298-red)](https://www.sparkfun.com/products/9670)


## Overview

This repository contains the code and circuit diagrams for my Gesture Controlled Car project. The car is controlled using an MPU6050 sensor for motion sensing and RF433 module for wireless communication. The receiving unit, consisting of an Arduino Uno and an L298 motor driver, receives the commands from the transmitter unit, which comprises an Arduino Nano and the MPU6050 sensor.

![Receiver Circuit]((https://github.com/gauravmishra1263/Gesture_controlled_Car/blob/main/Receiver.jpeg))
*Receiver Circuit*

![Transmitter Circuit](https://github.com/gauravmishra1263/Gesture_controlled_Car/blob/main/Transmitter.jpeg)
*Transmitter Circuit*

## Features

- Control a car wirelessly through gestures
- Utilizes MPU6050 for motion sensing
- RF433 module for wireless communication
- Arduino Uno as the receiving unit
- Arduino Nano with MPU6050 as the transmitter unit

## Setup

1. Clone the repository:

   ```shell
   git clone https://github.com/your-username/Gesture_controlled_Car.git


## Usage

-Power on the car and the transmitter unit.
-Perform gestures to control the car's movement.
-The MPU6050 sensor on the transmitter unit will detect the gestures and transmit corresponding commands to the receiving unit.
-The receiving unit will process the commands and control the motors accordingly.

## Contributing

 Contributions are welcome! If you find any issues or have suggestions for improvement, please feel free to open an issue or submit a pull request.

