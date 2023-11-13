# SR Latch with Arduino and Raspberry Pi Pico

## Overview 🌍

This repository contains the code and documentation for implementing an SR latch using both Arduino and Raspberry Pi Pico microcontrollers. An SR latch is a fundamental building block in digital electronics, and this project aims to demonstrate its implementation and behavior in two different microcontroller environments.

### Contents 📃

1. **Arduino :**
   -  contains the Arduino sketch (`nor_gate.ino`) for implementing the SR latch on an Arduino board.

2. **Raspberry Pi Pico**
   - contains the MicroPython script (`nor.py`) for implementing the SR latch on a Raspberry Pi Pico.

## SR Latch 💡

The SR latch is a bistable multivibrator, commonly used as a memory element in digital systems. It is constructed using two NOR gates or two NAND gates. The latch has two inputs, Set (S) and Reset (R), and two outputs, Q and Q' (complement of Q).

## Arduino Implementation 🔌

The Arduino implementation uses the Arduino IDE and a compatible Arduino board. The SR latch behavior is simulated on the Arduino, and the digital outputs are observed through the serial monitor.

## Raspberry Pi Pico Implementation 🔌

The Raspberry Pi Pico implementation uses MicroPython. The MicroPython script configures the GPIO pins of the Pico to emulate the SR latch, and the Pico's REPL (Read-Eval-Print Loop) can be used to observe the outputs.

<figure>
   <img src ="https://github.com/kinderasteroid/Set-Reset-Latch/assets/84179566/247dbf70-e583-4464-9d82-2aa9c64df0b3" wifth="500" height="300">
   <figcaption>Reset</figcaption>
</figure>
<figure>
  <img src ="https://github.com/kinderasteroid/Set-Reset-Latch/assets/84179566/8e187efe-5cf4-4985-a6ae-7985b5f7f7d7" wifth="500" height="300">
   <figcaption>Set</figcaption>
</figure>






## Circuit Diagrams 🪫

Circuit diagrams for both the Arduino and Raspberry Pi Pico implementations are included in the `docs` folder. These diagrams detail the connections required for the SR latch.

![30-SR-flipflop-circuit](https://github.com/kinderasteroid/Set-Reset-Latch/assets/84179566/cec60781-4844-4754-8e2e-479e718d27b9)

## Getting Started 🚀

1. Clone this repository:

```
git clone https://github.com/yourusername/sr-latch-arduino-pico.git
```


2. Follow the instructions in the respective folders (`arduino` and `raspberry_pi_pico`) to upload and run the SR latch code on your chosen microcontroller.

3. Refer to the documentation in the `docs` folder for additional information on the circuit and usage.

🤡Feel free to contribute, report issues, or suggest improvements. Happy coding!🤡

