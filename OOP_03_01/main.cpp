#include <iostream>

#include "calculator.h"

int main()
{
    double input_num1;
    double input_num2;
    bool num1_set;
    bool num2_set;
    double result = 0;
    
    bool infinite_loop = false;
    
    std::string stop_calc_answer = "";
    
    Calculator calculator;
    
    while(true)
    {
        std::cout << "Enter num1: ";
        std::cin >> input_num1;
        num1_set = calculator.set_num1(input_num1);
        
        if (!num1_set)
        {
            std::cout << "Wrong entry!\n";
            
            if (infinite_loop)
            {
                break;
            }
            infinite_loop = true;
            
            continue;
        }
        
        std::cout << "Enter num2: ";
        std::cin >> input_num2;
        num2_set = calculator.set_num2(input_num2);
        
        if (!num2_set)
        {
            std::cout << "Wrong entry!\n";
            
            if (infinite_loop)
            {
                break;
            }
            infinite_loop = true;
            
            continue;
        }
        
        result = calculator.add();
        std::cout << "num1 + num2 = " << result << std::endl;
        
        result = calculator.substract_1_2();
        std::cout << "num1 - num2 = " << result << std::endl;
        
        result = calculator.substract_2_1();
        std::cout << "num2 - num1 = " << result << std::endl;
        
        result = calculator.multiply();
        std::cout << "num1 * num2 = " << result << std::endl;
        
        result = calculator.divide_1_2();
        std::cout << "num1 / num2 = " << result << std::endl;
        
        result = calculator.divide_2_1();
        std::cout << "num2 / num1 = " << result << std::endl;
        
        std::cout << "Press \"q\" if you want to stop calculations or any other key to continue: ";
        std::cin >> stop_calc_answer;
        if(stop_calc_answer == "q")
        {
            break;
        }
        
        if (infinite_loop)
        {
            infinite_loop = false;
        }
    }
    
    return 0;
}
