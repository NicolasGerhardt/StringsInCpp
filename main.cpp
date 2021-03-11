#include <iostream>
#include <string>

using namespace std;

int main() {
  string greeting = "Hello, ";
  int len = greeting.length();
  string s2 = greeting.substr(2,3);
  string name;
  cout << "What is your name\n";
  cin >> name;
  cout << greeting << name << '\n';
  cout << "your name is " << name.length() << " characters long" << '\n';
  cout << "Cockney accents say '" + s2 << '\n';
  cout << "Goodbye" << '\n';
  return 0;
}