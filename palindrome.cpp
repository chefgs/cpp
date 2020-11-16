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

    cout << "Out:" <<out;
    cout << "\n";
    cout << "s::" <<s;
    cout << "\n";
   
    if (s.compare(out) == 0)
      return 0;
    else
      return 1;
  }
};

int main()
{
  palin p;
  cin >> p.s;
  int i = p.palindrome(p.s);
  if (i == 0) {
    cout << "Palindrome";
    cout << "\n";
  }
  else {
    cout << "Not a Palindrome";
    cout << "\n";
  }
  return 0;
}
