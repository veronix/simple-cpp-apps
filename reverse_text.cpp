#include <algorithm>
#include <string>
#include <iostream>

int main() 
{
  std::cout << "Enter the text you want to reverse: ";
  std::string input;
  std::getline(std::cin, input);    
  std::reverse(input.begin(), input.end());
  std::cout << "The reversed version of your text is: " << input;
}