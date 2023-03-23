#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
public:
    Calculator() {}
    
    double add() {return num1 + num2;}
    double multiply() {return num1 * num2;}
    double substract_1_2() {return num1 - num2;}
    double substract_2_1() {return num2 - num1;}
    double divide_1_2() {return num1 / num2;}
    double divide_2_1() {return num2 / num1;}
    
    bool set_num1(double num1);
    bool set_num2(double num2);
    
private:
    double num1;
    double num2;
};

#endif // CALCULATOR_H
