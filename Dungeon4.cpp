#include "Dungeon4.h"

void Dungeon4::setTexturaDungeon4() {
	_textureDungeon4.loadFromFile("Resources/dungeon4.png");
	_spriteDungeon4.setTexture(_textureDungeon4);
}

void Dungeon4::setDungeon4() {
	_spriteDungeon4.setPosition(sf::Vector2f(400.0f, 50.0f));
}

sf::Sprite Dungeon4::getDungeon4() {
	return _spriteDungeon4;
}