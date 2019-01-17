#include<iostream>
using namespace std;
int main()
{
  int op;
  int a,b;
  cout << "enter your what you want to do 1. sum  2.subtract  3.mutiply  4.divide";
  cin >> op;
  
  cout << "enter two numbers";
  cin >> a >> b;
  
  switch(op){
	case 1:
	  cout << a+b;
	  break;

	case 2:
	  cout << a-b;
	  break;

	case 3:
	  cout << a*b;
	  break;

	case 4:
	   cout << a/b;
	   break;

	default:
	    cout << "please enter a valid choice";
	    break;
	   
  }
  return 0;
}
