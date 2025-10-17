#ifndef DVDBOUNCER_H
#define DVDBOUNCER_H

#include <SFML/Graphics.hpp>

class DVDBouncer
{
    private:
        float x;
        float y;
        float xspeed;
        float yspeed;
        sf::Texture texture;
        sf::Sprite sprite;
        //White, Yellow, Red, Orange, Magenta, Purple, Cyan, Blue, Light green, Green
        sf::Color colorArray[10] = {
            sf::Color(255, 255, 255),
            sf::Color(255, 255, 0),
            sf::Color(255, 0, 0),
            sf::Color(255, 165, 0),
            sf::Color(255, 0, 255),
            sf::Color(128, 0, 128),
            sf::Color(0, 255, 255),
            sf::Color(0, 0, 255),
            sf::Color(0, 255, 0),
            sf::Color(0, 128, 0)
        };
    public:
        DVDBouncer();
        void moveSprite();
        void checkBoundaries(sf::Vector2i);
        void display();
        sf::Sprite& draw();
        void setColor();
};

#endif
