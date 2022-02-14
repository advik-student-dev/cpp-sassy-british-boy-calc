#include "vars.h"
void input()
{
    cout << "British soft boi calc: "; 
    cin >> num1 >> operation >> num2;
}

void calc()
{
    switch (operation) 
    {
        case '-':cout << num1 << " " << operation << " " << num2 << " = " << num1 - num2; break;
        case '+':cout << num1 << " " << operation << " " << num2 << " = " << num1 + num2; break;
        case '/':cout << num1 << " " << operation << " " << " = " << num1 / num2; break;
        case '*':cout << num1 << " " << operation << " " << " = " << num1 * num2; break;
        case '^':cout << num1 << " " << operation << " " << " = " << pow(num1, num2); break;
        case '%':
            bool isnum1int, isnum2int;
            isnum1int = ((int)num1==num1);
            isnum2int = ((int)num2==num2);

            if (isnum1int && isnum2int)
                cout << num1 << " " << operation << " " << num2 << " = " << (int)num1 % (int)num2;
            else
                cout << "Shut the fuck up you retarded neanderthal - Syntax error!";
            break;
        default:cout << "Bruh, I'll tell you what, fuck off you fat cunt - Invalid operation!" << endl;

    }
}