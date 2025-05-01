# palindromeChecker

## 🚀 Features

- Receive a user entry (string or int) and return if that is a palindrome or not

## 🧑‍💻 Technologies Used

- `<iostream>`

## 📋 How to Run

### 🐧 On Linux:

1. Make sure `g++` is installed:
   ```bash
   sudo apt update
   sudo apt install g++   # Skip if already installed
   ```

2. Navigate to the folder where your code is saved:
   ```bash
   cd /path/to/your/file
   ```

3. Compile the code:
   ```bash
   g++ guess.cpp -o guessGame
   ```

4. Run the program:
   ```bash
   ./guessGame
   ```

### 🪟 On Windows (with MinGW):

1. Install MinGW and ensure it's added to your system PATH.
   (If you don’t have MinGW, download from: https://www.mingw-w64.org/)

2. Open CMD or PowerShell.

3. Navigate to the folder where your file is located:
   ```bash
   cd C:\path\to\your\file
   ```

4. Compile the code:
   ```bash
   g++ guess.cpp -o guessGame.exe
   ```

5. Run the program:
   ```bash
   guessGame.exe
   ```

## 🤖 How It Works

- Receive a user entry.
- Remove all entry spaces and turn in lowcase.
- Return if its a palindrome or not.
