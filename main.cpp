
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string getMorse(char ch)
{
    switch (toupper(ch))
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
    string fullMorse;
    string morse;
    int i;

    cout << "Enter a short English message: ";
    getline(cin, message);

    cout << "\nLetter Translations:\n";

    for (i = 0; i < message.length(); i++)
    {
        if (isalpha(message[i]))
        {
            morse = getMorse(message[i]);

            cout << (char)toupper(message[i]) << ": " << morse << endl;

            fullMorse = fullMorse + morse + "   ";
        }
    }

    cout << "\nFull Morse Code Message:\n";
    cout << fullMorse << endl;

    return 0;
}
