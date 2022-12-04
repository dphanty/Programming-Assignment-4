#include "EvenStack.h"
#include <iostream>
#include <stack>

using namespace std;


EvenStack::EvenStack()
{
}

EvenStack::~EvenStack()
{
}

void EvenStack::push(int value)
{
    if (value%2 == 0)
        m_even.push(value);
    else
        cout << endl << "ERROR: Even numbers only. " << endl;
}

int EvenStack::top()
{
    return m_even.top();
}

void EvenStack::pop()
{
    m_even.pop();
}

int EvenStack::size()
{
    return m_even.size();
}

bool EvenStack::empty()
{
    return m_even.empty();
}

void EvenStack::emptyStack()
{
    cout << "Removing the following: ";
    while (!m_even.empty()){
        cout << " " << m_even.top();
        m_even.pop();
    }
    cout << endl;
}

void EvenStack::getEvenNumbers (stack<int> s)
{
    stack <int> temp1, temp2;
    temp1 = s;
    int value;
    while (!temp1.empty()) {
        value = temp1.top();
        temp1.pop();
        if (value%2 == 0)
            temp2.push(value);
    }

   while (!temp2.empty())
   {
       m_even.push(temp2.top());
       temp2.pop();
   }
}
