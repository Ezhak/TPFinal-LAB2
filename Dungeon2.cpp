#include "Dungeon2.h"

void Dungeon2::setTexturaDungeon2() {
	_textureDungeon2.loadFromFile("Resources/dungeon2.png");
	_spriteDungeon2.setTexture(_textureDungeon2);
}

void Dungeon2::setDungeon2() {
	_spriteDungeon2.setPosition(sf::Vector2f(400.0f, 450.0f));
}

sf::Sprite Dungeon2::getDungeon2() {
	return _spriteDungeon2;
}