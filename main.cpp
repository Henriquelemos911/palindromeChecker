#include <iostream>

using namespace std;

// functions includes.
string palindromeStringVerify(string palindromeString);
string removeSpaces(string palindromeString);

int main()
{
    string palindromeString; // receive strings (numbers ou phrases).
    string palindromeStatus; // it's o no a palindrome.

    cout << "Type a sequence of numbers or a phrase to confirm if this is a palindrome or not: " << endl;
    getline(cin, palindromeString);
    palindromeString = removeSpaces(palindromeString);           // remove spaces from user phrase.
    palindromeStatus = palindromeStringVerify(palindromeString); // verify if that is a palindrome or not.
    cout << palindromeStatus << endl;

    return 0;
}

string removeSpaces(string palindromeString)
{
    string noSpacesString = "";
    for (char c : palindromeString)
    {
        if (isalnum(c))
        {
            noSpacesString += tolower(c); // transform all characters in lowcase and remove spaces.
        }
    }
    return noSpacesString; // return the phrase without spaces and in lowcase.
}

string palindromeStringVerify(string palindromeString) // func responsive to confirm if its a palindrome or not.
{

    int rightIndex = palindromeString.size() - 1; // pick the last character in the phrase.
    int leftIndex = 0;                            // pick the fist character in the phrase.

    while (rightIndex > leftIndex)
    {
        if (palindromeString[leftIndex] != palindromeString[rightIndex])
        {
            return "Is not a palindrome!";
        }
        // update the next letter to verify.
        leftIndex++;  // from the left.
        rightIndex--; // from the right.
    }

    return "It's a palindrome!";
}
