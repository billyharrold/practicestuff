
#ifndef PLATFORMER_GAME_H
#define PLATFORMER_GAME_H

#include "Obstacles.h"

class Game
{
 public:
  Game(sf::RenderWindow& window);
  ~Game();
  bool init();
  void update(float dt);
  void render();
  void mouseClicked(sf::Event event);
  void keyPressed(sf::Event event);

 private:
  sf::RenderWindow& window;
  
  Player player;
  sf::Texture player_texture;

  Obstacles o1;
  

};

#endif // PLATFORMER_GAME_H
