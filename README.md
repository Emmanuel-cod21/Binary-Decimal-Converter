# Binary-Decimal Converter

A C++ utility program for converting between binary and decimal number systems.

## 📋 Project Overview

This program demonstrates number system conversion, a fundamental concept in computer science. It showcases bitwise operations, mathematical algorithms, and user input handling in C++.

**File:**
- `EUBinary-Decimal.cpp` - Main conversion utility

## ✨ Features

- **Decimal to Binary Conversion:** Convert base-10 numbers to binary representation
- **Binary to Decimal Conversion:** Convert binary strings to decimal values
- **Input Validation:** Ensures valid number formats
- **User-Friendly Interface:** Menu-driven console application

## 🗂️ Repository Structure

```
Binary-Decimal-Converter/
├── EUBinary-Decimal.cpp
└── README.md
```

## 🛠️ Technologies Used

- C++ (Standard Library)
- Mathematical algorithms
- Bitwise operations

## 🚀 Compiling and Running

### Using g++ (Linux/Mac)
```bash
# Compile
g++ -o converter EUBinary-Decimal.cpp

# Run
./converter
```

### Using g++ (Windows)
```bash
# Compile
g++ -o converter.exe EUBinary-Decimal.cpp

# Run
converter.exe
```

### Using Visual Studio (Windows)
1. Open project in Visual Studio
2. Build solution (Ctrl+Shift+B)
3. Run (F5 or Ctrl+F5)

## 📖 Concepts Demonstrated

- **Number Systems:** Understanding binary and decimal representations
- **Algorithm Design:** Efficient conversion algorithms
- **Bitwise Operations:** Working with binary digits
- **Input/Output:** Console-based user interaction
- **Control Structures:** Loops and conditional statements
- **Data Validation:** Ensuring input integrity

## 🎯 Use Cases

- Educational tool for understanding number systems
- Quick conversion utility for programming tasks
- Foundation for understanding computer architecture
- Practice with bitwise operations

## 💡 How It Works

### Decimal to Binary
1. Divide the decimal number by 2
2. Record the remainder
3. Repeat with quotient until it reaches 0
4. Read remainders in reverse order

### Binary to Decimal
1. Read binary digits from right to left
2. Multiply each digit by 2^position
3. Sum all values

## 📝 Example Usage

```
Select operation:
1. Decimal to Binary
2. Binary to Decimal
3. Exit

Choice: 1
Enter decimal number: 42
Binary: 101010

Choice: 2
Enter binary number: 101010
Decimal: 42
```

## 🔧 Possible Enhancements

- Add hexadecimal and octal conversions
- Support for negative numbers
- Floating-point binary conversion
- Batch conversion from file
- GUI implementation

## 📫 Contact

- GitHub: [@Emmanuel-cod21](https://github.com/Emmanuel-cod21)

---

*Academic Year: 2024-2025*
