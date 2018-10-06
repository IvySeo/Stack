#include "Stack.h"
#include<iostream>

using namespace std;

void Stack::push(Item entry) //pushed the value into stack
{
    data[used++]=entry;
}

int Stack::pop() // pops the top value
{
    if(!empty())
         return data[--used];


}

int Stack::apply(char optr, Item operand1, Item operand2)
{
    if(optr == '-')  // checks what optr is equal to and then carriers out the operations accordingly
        return operand1 - operand2;  // and returns the result so that it can be pushed back in to stack.

    else if(optr == '+')
        return operand1 + operand2;

    else if(optr == '/')
        return operand1 / operand2;

    else if(optr=='*')
        return operand1 * operand2;

}
