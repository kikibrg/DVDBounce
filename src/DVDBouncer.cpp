#include "DVDBouncer.hpp"
#include <iostream>


DVDBouncer::DVDBouncer()
{
    x = rand()%300;
    y = rand()%300;
    xspeed = 3;
    yspeed = 3;
    if(!texture.loadFromFile("C:\\Users\\Kilian\\Documents\\Code_projects\\DVDBounce\\resources\\dvd_logo.png"))
        std::cout << "Image not loading" << std::endl;
    sprite.setTexture(texture);
    sprite.setPosition(x,y);
}
void DVDBouncer::moveSprite()
{
    x += xspeed;
    y += yspeed;
}
void DVDBouncer::checkBoundaries(sf::Vector2i WindowCoordinate)
{
    if(x + texture.getSize().x >= WindowCoordinate.x)
    {
        xspeed = -xspeed;
    }
    if(x <= 0)
    {
        xspeed = -xspeed;
    }
    if(y + texture.getSize().y >= WindowCoordinate.y)
    {
        yspeed = -yspeed;
    }
    if(y <= 0)
    {
        yspeed = -yspeed;
    }
}
void DVDBouncer::display()
{
    sprite.setPosition(x,y);
}
sf::Sprite& DVDBouncer::draw()
{
    return sprite;
}
