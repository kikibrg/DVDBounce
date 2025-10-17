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
    public:
        DVDBouncer();
        void moveSprite();
        void checkBoundaries(sf::Vector2i);
        void display();
        sf::Sprite& draw();
};

#endif
