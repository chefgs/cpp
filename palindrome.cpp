#include <iostream>
#include <string>
using namespace std;

class palin {
  public:
  string s,out;
  int len;

  int palindrome(string)
  {
    out.assign(s.rbegin(), s.rend());

    cout << "Reversed:" <<out;
   
    if (s.compare(out) == 0)
      return 0;
    else
      return 1;
  }
};

int main()
{
  palin p;
  cout << "Enter s:";
  cin >> p.s;
  int i = p.palindrome(p.s);
  if (i == 0) {
    cout << "\n";
    cout << "It is Palindrome";
    cout << "\n";
  }
  else {
    cout << "\n";
    cout << "It is Not a Palindrome";
    cout << "\n";
  }
  return 0;
}
