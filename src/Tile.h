#ifndef TILE_H
#define TILE_H
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

using namespace std;


const string m_spritesheet = "./Images/overworldtiles.png";
//const string m_spritesheet = "./Images/tileset_overworld.png";

class Tile
{
public:
  Tile(int tileRow, int tileCol, int hPos, int wPos);
  void draw(sf::RenderWindow & window);
  void loadSprite();
  static const int m_tileSize = 16;
private:
  bool m_isCollidable;
  sf::Texture m_texture;
  sf::Sprite m_sprite;
};
#endif /*TILE_H*/
