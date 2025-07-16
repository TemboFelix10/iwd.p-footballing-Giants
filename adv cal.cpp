#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout <<"Enter expression (e.g. 3 + 4):";
    cin >> num1>>op >> num2;
     switch (op) {
        case '+': cout << "result: "<< num1 + num2 <<endl; break;

        case '-': cout << "Result:"<< num1-num2<<endl; break;
         case '*': cout << "Result:"<< num1*num2<<endl; break;

           case '/':if (num2 !=0)
            cout << "Result:"<< num1/num2<<endl; break;
      
            
       }   
       return 0;            
}