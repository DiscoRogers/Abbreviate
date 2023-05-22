# Abbreviate
An algorithm for creating abbreviations from words in English.

Abbreviation Generator
The Abbreviation Generator is a simple and efficient C++ program that takes a list of strings and generates unique 4-letter abbreviations. The program prioritizes iconic consonant combinations and consonants over vowels while maintaining the original order of the words.

Getting Started
These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

Prerequisites
What things you need to install:

A C++ compiler (e.g., GCC, Clang)
Installing
Clone the repo
sh
Copy code
git clone https://github.com/DiscoRogers/Abbreviate.git
Compile the code with your C++ compiler
sh
Copy code
g++ -o abbreviate main.cpp
Run the code
sh
Copy code
./abbreviate
Usage
The main function contains an example of how to use the Abbreviate function:

cpp
Copy code
int main() {
    vector<string> words = {"example", "abbreviation", "test", "strings"};
    vector<string> abbrs = abbreviate(words);

    for (const auto& abbr : abbrs) {
        cout << abbr << '\n';
    }

    return 0;
}
The abbreviate function takes a vector of words and returns a vector of their abbreviations. You can modify this example to suit your needs.

Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

License
This project is licensed under the MIT License - see the LICENSE.md file for details

Contact
Your Name - ajohnston@gmail.com

Project Link: https://github.com/DiscoRogers/Abbreviate
