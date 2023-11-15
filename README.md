# Animatronic Hand

An Arduino-based project that replicates the movements of a human hand using servo motors. The positions of the servos are controlled by potentiometers, allowing for realistic and responsive hand movements.

## Project Description

The Animatronic Hand is an interactive and engaging project that showcases how servo motors can be used to mimic the movements of a human hand. Each finger of the hand is controlled by an individual servo motor, which is in turn controlled by a corresponding potentiometer. Adjusting the potentiometer alters the position of the servo, resulting in the movement of the finger.

### Components

- 5 x Servo Motors
- 5 x Potentiometers
- Arduino Uno (or similar model)
- Jumper Wires
- Breadboard (optional for prototyping)

### How It Works

The project uses the following principles:

- **Servo Motors**: These provide precise control of angular position and are ideal for simulating joint movements.
- **Potentiometers**: Act as variable resistors, providing analog input to the Arduino based on their rotational position.
- **Arduino**: Reads the analog input from the potentiometers, maps the values to a range suitable for servo control, and adjusts the positions of the servos accordingly.

## Getting Started

### Dependencies

- Basic understanding of electronics and Arduino programming.
- Arduino IDE for uploading the sketch to the Arduino board.

### Setup and Installation

1. **Assemble the Circuit**: Connect each servo motor to its corresponding potentiometer as per the project schematics.
2. **Upload the Code**: Open the provided `.ino` file in the Arduino IDE and upload it to your Arduino board.

### Usage

- Rotate each potentiometer to see the corresponding finger on the animatronic hand move.

## Design Considerations

- The project is designed to be easily assembled and understood, making it suitable for educational purposes and hobbyists interested in robotics and animatronics.

## Authors

Ladi Disu

## Acknowledgments

Inspiration and reference: 
- [Arduino Project Hub - Animatronic Hand](https://projecthub.arduino.cc/khushisahil36/animatronic-hand-0fbb50)
