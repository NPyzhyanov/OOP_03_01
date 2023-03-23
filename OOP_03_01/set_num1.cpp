#include "calculator.h"

bool Calculator::set_num1(double num1)
{
    if(num1 == 0)
    {
        return false;
    }
    
    this->num1 = num1;
    
    return true;
}
