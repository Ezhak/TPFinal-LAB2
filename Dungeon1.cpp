#include "Dungeon1.h"

void Dungeon1::setTexturaDungeon1() {
	_textureDungeon1.loadFromFile("Resources/dungeon1.png");
	_spriteDungeon1.setTexture(_textureDungeon1);
}

void Dungeon1::setDungeon1() {
	_spriteDungeon1.setPosition(sf::Vector2f(100.0f, 100.0f));
}

sf::Sprite Dungeon1::getDungeon1() {
	return _spriteDungeon1;
}