#include <SFML/Graphics.hpp>

#include <iostream>

int main()
{
    printf("Program Started\n");

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

            window.clear(sf::Color(245,72,64,255));

            window.display();
        }
    }

    return 0;
}