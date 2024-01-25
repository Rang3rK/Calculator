//
// Created by Nu lar on 11/14/23.
//

#ifndef CALCULATOR_RPN_H
#define CALCULATOR_RPN_H

#include <stack>
#include <string>
#include <cmath>
#include <iostream>

class RPN
{
private:
    static double evaluate(double left, double right, char op);
public:
    static double evaluate(const std::string& Expression);
    static bool isOperator(char ch);
    static bool isOperand(char ch);
};

#endif //CALCULATOR_RPN_H
