// Arduino pins connected to NOR gate inputs
const int inputPin1 = 2;  // Replace with the actual pin number
const int inputPin2 = 3;  // Replace with the actual pin number

// Arduino pin connected to NOR gate output
const int outputPin = 4; // Replace with the actual pin number

void setup() {
  pinMode(inputPin1, INPUT);
  pinMode(inputPin2, INPUT);
  pinMode(outputPin, OUTPUT);

  // Initialize Serial communication (optional)

}

void loop() {
  // Read the state of the input pins
  int inputState1 = digitalRead(inputPin1);
  int inputState2 = digitalRead(inputPin2);

  // Implement NOR gate logic: If both inputs are LOW, set the output HIGH. Otherwise, set the output LOW.
  int norOutput = !(inputState1 || inputState2);

  // Write the result to the output pin
  digitalWrite(outputPin, norOutput);



 // Add a delay for stability
}
