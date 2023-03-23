#include "calculator.h"

bool Calculator::set_num2(double num2)
{
    if(num2 == 0)
    {
        return false;
    }
    
    this->num2 = num2;
    
    return true;
}
