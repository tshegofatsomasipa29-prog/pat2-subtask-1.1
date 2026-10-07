#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function that returns the Morse code for an uppercase letter
string getMorseCode(char letter)
{
    switch (letter)
    {
        case 'A': return ".-";
        case 'B': return "-...";
        case 'C': return "-.-.";
        case 'D': return "-..";
        case 'E': return ".";
        case 'F': return "..-.";
        case 'G': return "--.";
        case 'H': return "....";
        case 'I': return "..";
        case 'J': return ".---";
        case 'K': return "-.-";
        case 'L': return ".-..";
        case 'M': return "--";
        case 'N': return "-.";
        case 'O': return "---";
        case 'P': return ".--.";
        case 'Q': return "--.-";
        case 'R': return ".-.";
        case 'S': return "...";
        case 'T': return "-";
        case 'U': return "..-";
        case 'V': return "...-";
        case 'W': return ".--";
        case 'X': return "-..-";
        case 'Y': return "-.--";
        case 'Z': return "--..";

        default: return "";
    }
}

int main()
{
    string message;

    cout << "Enter an English message: ";
    getline(cin, message);

    cout << "\nIndividual Morse Code Translation:\n";

    // Display each valid letter and its Morse code
    for (char character : message)
    {
        // Convert all lowercase letters to uppercase for morse translation
        character = toupper(static_cast<unsigned char>(character));

        // Process alphabetic characters only
        if (character >= 'A' && character <= 'Z')
        {
            cout << character << ": "
                 << getMorseCode(character) << endl;
        }
    }

    // Display the complete Morse code message
    cout << "\nFull Morse Code Message: ";

    bool firstLetter = true;

    for (char character : message)
    {
        character = toupper(static_cast<unsigned char>(character));

        // Ignore numbers and other non-alphabetic characters
        if (character >= 'A' && character <= 'Z')
        {
            if (!firstLetter)
            {
                cout << "   ";
            }

            cout << getMorseCode(character);
            firstLetter = false;
        }
    }

    cout << endl;

    return 0;
}