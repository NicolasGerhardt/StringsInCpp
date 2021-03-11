#include <iostream>
#include <string>

using namespace std;

int main() {
  while (true)
  {
    string firstWord;
    string secondWord;
    cout << "Give me your first word: ";
    // cin >> firstWord;
    getline(cin, firstWord);
    cout << "Give me your second word: ";
    // cin >> secondWord;
    getline(cin, secondWord);


    if (firstWord.length() > secondWord.length()) 
    {
      cout << "first word is bigger";
    }
    if (firstWord.length() < secondWord.length()) 
    {
      cout << "second word is bigger";
    }
    if (firstWord.length() == secondWord.length())
    {
      cout << "both words are the same size";
    }
    cout  << '\n';
    string quit;
    cout << "Keep going? (yes/no) ";
    // cin >> quit;
    getline(cin, quit);
    if (quit == "no") return 0;
  }
}