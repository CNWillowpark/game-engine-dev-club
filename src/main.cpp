#include <SFML/Graphics.hpp>

int main()
{
	// Creates a window and sets its title and size
	sf::RenderWindow window(sf::VideoMode({200, 200}), "SFML works!");
	// Creates a shape to be rendered and set the fill color
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	// Main Game loop. This will happen until the conditional is false (the window closes)
	while (window.isOpen())
	{
		// we create an event with the winder handler (sf::RenderWindow)
		while (const std::optional event = window.pollEvent())
		{
			// "event" is a class containing "is" which is a function that checks if it is a certain type.
			if (event->is<sf::Event::Closed>()) {
				window.close(); 
			}
		}
		
		// Clear the screen
		window.clear();
		// Draw everything here
		window.draw(shape);
		// Render the whole screenls
		window.display();
	}
}
