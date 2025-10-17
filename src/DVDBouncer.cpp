#include "DVDBouncer.hpp"
#include <iostream>
#include <filesystem>

DVDBouncer::DVDBouncer()
{
    x = rand()%(980 - texture.getSize().x);
    y = rand()%(620 - texture.getSize().y);;
    xspeed = 4;
    yspeed = 4;

    std::filesystem::path imagePath = std::filesystem::current_path().parent_path().parent_path();
    imagePath = imagePath / "resources" / "dvd_logo.png";

    if(!texture.loadFromFile(imagePath.string()))
        std::cout << "Image not loading" << std::endl;
    sprite.setTexture(texture);
    sprite.setPosition(x,y);
    setColor();
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
        setColor();
    }
    if(x <= 0)
    {
        xspeed = -xspeed;
        setColor();
    }
    if(y + texture.getSize().y >= WindowCoordinate.y)
    {
        yspeed = -yspeed;
        setColor();
    }
    if(y <= 0)
    {
        yspeed = -yspeed;
        setColor();
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

void DVDBouncer::setColor()
{
    int colorIndex = rand()%10;
    sprite.setColor(colorArray[colorIndex]);
}
