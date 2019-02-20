//JASKIRAT KAUR
//02.19.2019
//CSCI 136
//PROJECT 1D
//CALC BUT BETTER



#include <iostream>
#include <cmath>
using namespace std;


int main ()
{
    int num, sum = 0;
    char op;

    cin >> num;

    while (cin >> op)
    {
        if (op == '+')// ADDITION
        {
            sum += num;
            cin >> num;
        }
        else if (op == '-')//SUBTRACTION
        {
            sum += num;
            cin >> num;
            num = -num;
        }
        else if (op == '^') //EXPONENTIAL
        {
            if (num < 0)
                num = -pow(num,2);
            else
                num = pow(num,2);
        }
        else if (op == ';')
        {
            sum += num;
            cout << sum << endl;
            sum = 0;
            cin >> num;
        } //GIVE RESULT
    }

    return 0;
}
