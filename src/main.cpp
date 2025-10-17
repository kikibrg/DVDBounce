#include <SFML/Graphics.hpp>
#include <iostream>
#include <math.h>
#include <ctime>
#include "DVDBouncer.hpp"

int main()
{
    srand(time(0));
    sf::RenderWindow window(sf::VideoMode(1080, 720), "DVD");
    window.setFramerateLimit(60);

    DVDBouncer DvD;
    
    while(window.isOpen() && !sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }

        DvD.moveSprite();
        DvD.checkBoundaries(sf::Vector2i(window.getSize().x, window.getSize().y));
        DvD.display();

        window.clear();
        window.draw(DvD.draw());
        window.display();
    }
    return 0;
}
