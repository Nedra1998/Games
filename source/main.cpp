#include <SFML/Graphics.hpp>

int main(int argc, char const* argv[]) {
  sf::RenderWindow win(sf::VideoMode(200, 200), "SFML Games");
  sf::CircleShape shape(80, 8);
  while (win.isOpen()) {
    sf::Event event;
    while (win.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        win.close();
      }
    }
    win.clear();
    win.draw(shape);
    win.display();
  }
  return 0;
}
