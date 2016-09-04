#include "StringBuilder.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

const int MAX_ELEMENTS = 10;

string joinWords(vector<string> words);

int main()
{
  StringBuilder sb;
  string str_one = "Jason";
  string str_two = "Misty";
  string str_input;  
  sb.append(str_one);
  sb.append(" and ");
  sb.append(str_two);

  cout << sb.toString() << endl;

  cout << "Enter a word ('end' to quit): ";
  cin >> str_input;

  vector<string> words;
  while (str_input != "end")
  {
    if (words.size() > MAX_ELEMENTS) break;
    words.push_back(str_input);
    cout << "Number of elements: " << words.size() << endl;

    cout << "Enter a word ('end' to quit): ";
    cin >> str_input;
  }

  string joinedWords = joinWords(words);
  cout << joinedWords << "\n";

  return 0;
}

string joinWords(vector<string> words)
{
  StringBuilder sb;
  for (const auto& w : words)
  {
    sb.append(w);
  }

  return sb.toString();
}
