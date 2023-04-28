# include <iostream>
using namespace std;

int main() {

  char c;
  float a,b;

  cout << "give intruction like + - * ? ";
  cin >> c;

  cout << "Enter two number a and b ";
  cin >> a>>b;

  switch(c) {

    case '+':
      cout << a<< " + " << b<< " = " << a + b;
      break;

    case '-':
      cout << a << " - " << b << " = " << a - b;
      break;

    case '*':
      cout << a<< " * " << b << " = " << a * b;
      break;

    case '/':
      cout << a << " / " << b << " = " << a/ b;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "please try vaid operator";
      break;
  }

  return 0;
}
