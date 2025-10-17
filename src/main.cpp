#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(1080, 720), "DVD");
    
    while(window.isOpen() && !Keyboard::isKeyPressed(Keyboard::Escape))
    {
        Event event;
        while(window.pollEvent(event))
        {
            if(event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }
    return 0;
}
