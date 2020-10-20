#include "Dungeon3.h"

void Dungeon3::setTexturaDungeon3() {
	_textureDungeon3.loadFromFile("Resources/dungeon3.png");
	_spriteDungeon3.setTexture(_textureDungeon3);
}

void Dungeon3::setDungeon3() {
	_spriteDungeon3.setPosition(sf::Vector2f(200.0f, 50.0f));
}

sf::Sprite Dungeon3::getDungeon3() {
	return _spriteDungeon3;
}