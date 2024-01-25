//
// Created by Nu lar on 11/14/23.

#include "Calculator.h"

Calculator::Calculator()
{
    background.setSize({500,600});
    background.setFillColor(sf::Color::Black); //background color
    display.setSize({280,80});
    display.setColor(sf::Color(50,50,50));
    // calculator background

    Button bfirst;
    bfirst.setPosition({6,100});
    buttons.push_back(bfirst);

    //16 buttons created
    for(int i=0; i<15; i++)
    {
        Button b;
        buttons.push_back(b);
    }

    //numbers
    buttons[1].setText("2");
    buttons[2].setText("3");
    buttons[4].setText("4");
    buttons[5].setText("5");
    buttons[6].setText("6");
    buttons[8].setText("7");
    buttons[9].setText("8");
    buttons[10].setText("9");

    buttons[3].setText("+");
    buttons[3].setDefaultColor(sf::Color(255,149,0));
    buttons[7].setText("-");
    buttons[7].setDefaultColor(sf::Color(255,149,0));
    buttons[11].setText("*");
    buttons[11].setDefaultColor(sf::Color(255,149,0));
    buttons[12].setText("C");
    buttons[13].setText("0");
    buttons[14].setText("=");
    buttons[14].setDefaultColor(sf::Color(255,149,0));
    buttons[15].setText("/");
    buttons[15].setDefaultColor(sf::Color(255,149,0));


    //Positioning
    for (int i = 0; i < 16; i++)
    {
        if (i < 3)
            Position::right(buttons[0 + i].getCircle(), buttons[i+1].getCircle());
        else if (i >= 3 && i < 7)
            Position::below(buttons[i-3].getCircle(), buttons[i+1].getCircle());
        else if (i >= 7 && i < 11)
            Position::below(buttons[i - 3].getCircle(), buttons[i+1].getCircle());
        else if (i >= 11 && i < 15)
            Position::below(buttons[i - 3].getCircle(), buttons[i+1].getCircle());
    }
}

void Calculator::eventHandler(sf::RenderWindow& window, sf::Event event)
{
    std::string result;
    for(auto& x: buttons)
    {
        x.eventHandler(window,event);
        if(MouseEvent::isClicked(x.getCircle(),window))
        {
            enableState(CLICKED);
            updateDisplay(x.getText());
        }
        else {
            disableState(CLICKED);
        }
        x.update();
    }
}

void Calculator::update()
{
    std::string str = display.getText();
    for(auto& x : str)
    {
        switch(x)
        {
            case '=':
                display.clear();
                std::cout << RPN::evaluate(str);
                updateDisplay(std::to_string(RPN::evaluate(str)));
                break;
            case 'C':
                display.clear();
                break;
        }
    }
}

void Calculator::updateDisplay(const std::string& text)
{
    display.concatString(text);
    display.setTextPosition({20,30});
}

sf::Text Calculator::getTextObj()
{
    return display.getTextReal();
}


void Calculator::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
    window.draw(background);
    window.draw(display,states);
    for(auto& x: buttons)
        window.draw(x);
}
