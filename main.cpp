#include <SFML/Graphics.hpp>

#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window", sf::Style::Default);

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();

            window.clear(sf::Color(123,123,123,255));
            
            sf::CircleShape shape(50.f);

            // set the shape color to green
            shape.setFillColor(sf::Color(100, 250, 50));
            float radius = 50;
            shape.setRadius(radius);
            sf::Vector2i mousePos = sf::Mouse::getPosition(window);
            shape.setPosition((float)mousePos.x - radius, 
                (float)mousePos.y - radius);
            window.draw(shape);

            window.display();
        }
    }

    return 0;
}