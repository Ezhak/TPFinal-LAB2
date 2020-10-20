#include "Dungeon5.h"

void Dungeon5::setTexturaDungeon5() {
	_textureDungeon5.loadFromFile("Resources/dungeon5.png");
	_spriteDungeon5.setTexture(_textureDungeon5);
}

void Dungeon5::setDungeon5() {
	_spriteDungeon5.setPosition(sf::Vector2f(600.0f, 50.0f));
}

sf::Sprite Dungeon5::getDungeon5() {
	return _spriteDungeon5;
}