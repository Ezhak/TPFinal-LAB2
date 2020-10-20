#include "Estatua.h"

void Estatua::setTexturaEstatua() {
	_textureEstatua.loadFromFile("Resources/estatua.png");
	_spriteEstatua.setTexture(_textureEstatua);
}

void Estatua::setEstatua() {
	_spriteEstatua.setPosition(sf::Vector2f(350.0f, 200.0f));
}

sf::Sprite Estatua::getEstatua() {
	return _spriteEstatua;
}