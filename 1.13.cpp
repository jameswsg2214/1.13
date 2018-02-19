// Example program
#include <iostream>
#include <string>
using namespace std;
class sample
{
    public:
    char c;
    int calc()
{
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
cout<< "it is vowel";
else
cout<< "it is not vowel";
}
};
int main()
{
  sample s;
  
  cout << "enter is your char? ";
  cin>>s.c;
  s.calc();
}
