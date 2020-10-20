#include "Maps.h"
#include <iostream>

void Maps::setTexturaMapa() {
	if (!_textureMapa.loadFromFile("Resources/mapaprincipal.png")) {
		std::cout << "Error Mapa." << std::endl;
	};
	_spriteMapa.setTexture(_textureMapa);
}

void Maps::setMapa() {
	//_spriteMapa.setPosition(sf::Vector2f(100.0f, 300.0f));
}

sf::Sprite Maps::getMapa() {
	return _spriteMapa;
}
