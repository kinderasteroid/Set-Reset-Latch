from machine import Pin
import time

# Define GPIO pins
input_pin1 = Pin(2, Pin.IN)  # Replace 2 with the actual GPIO pin number
input_pin2 = Pin(3, Pin.IN)  # Replace 3 with the actual GPIO pin number
output_pin = Pin(4, Pin.OUT) # Replace 4 with the actual GPIO pin number

def nor_gate(input1, input2):
    # Implement NOR gate logic
    return not (input1 or input2)

while True:
    # Read the state of the input pins
    input_state1 = input_pin1.value()
    input_state2 = input_pin2.value()

    # Implement NOR gate logic
    nor_output = nor_gate(input_state1, input_state2)

    # Write the result to the output pin
    output_pin.value(nor_output)

    time.sleep(0.00001)  # Add a small delay to avoid rapid toggling
