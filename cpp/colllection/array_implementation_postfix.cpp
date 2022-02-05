#include <iostream>
#include "main1.h"
using namespace std;
float operand1, operand2;
float result;
float postfixEvaluator(string expression)
{
    for (size_t i = 0; i < expression.length(); i++)
    {
        if (expression[i] >= '0' && expression[i] <= '9')
        {
            push((float)(expression[i] - '0'));
        }
        else
        {
            operand1 = pop();
            operand2 = pop();
            switch (expression[i])
            {
            case '+':
                result = operand2 + operand1;
                break;
            case '-':
                result = operand2 - operand1;
                break;
            case '*':
                result = operand2 * operand1;
                break;
            case '/':
                result = operand2 / operand1;
                break;
            case '^':
                result = pow(operand2, operand1);
                break;
            case '%':
            result = (int)operand2 % (int)operand1;
            break;
            default:
                cout << "Postfix expression is missed\n";
            }
            push(result);
        }
    }
    return pop();
}
int main()
{
    string givenExpression;
    cout << "Please enter the given postfix expression here: \n";
    cin >> givenExpression;
    cout<<givenExpression<<" = "<<postfixEvaluator(givenExpression)<<endl;

    return 0;
}
