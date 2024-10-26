# Enigma Machine

This project simulates an Enigma Machine, which is a cipher machine used for encrypting messages. The machine includes configurable rotors, allowing users to encrypt and decrypt text based on rotor settings.

## Features

- Customizable rotor settings for unique encryption patterns.
- Encryption and decryption of messages with uppercase, lowercase, numbers, and symbols.
- Simple menu interface for encryption and configuration adjustments.

## Files

- **main.cpp**: The main application file, handling user input and managing menu interactions, encryption, and configuration.
- **Menu.h**: Contains a simple menu interface as a constant string for user interaction.
- **Global.h**: Defines global variables, including the standard character alphabet and mappings, as well as default rotors.
- **Rotor.h**: Declares the `Rotor` class, which manages rotor-specific operations such as rotation and character passing.
- **Rotor.cpp**: Implements the `Rotor` class methods, including character encryption in forward and backward directions and rotor rotation.

## Usage

When you run the program, you’ll see a menu with options:
- **0. Encrypt**: Encrypts input text based on the current rotor configuration.
- **1. Setting**: Allows you to configure the rotors and initial rotations.
- **2. Exit**: Exits the application.

### Configuration

1. **Rotors**: Choose three rotor indexes from 0 to 4 (e.g., `0 4 3`).
2. **Rotations**: Set the initial rotation for each rotor (e.g., `10 45 61`).

These settings determine the unique encryption pattern for each session.

## Example

1. Start the program and enter **0** to select the "Encrypt" option.
2. Type the text you wish to encrypt.
3. The encrypted text will be displayed based on the current rotor settings.

## License

This project is open source and available under the MIT License.
