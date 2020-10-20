#include "Enemigo1.h"
#include <iostream>
#include <Windows.h>

void Enemigo1::setTexturaEnemy() {
	_textureEnemy.loadFromFile("Resources/enemy1.png");
	_spriteEnemy.setTexture(_textureEnemy);
	sf::Vector2u sizeTexture = _textureEnemy.getSize();
	sizeTexture.x /= 6;
	sizeTexture.y /= 4;
	_spriteEnemy.setTextureRect(sf::IntRect(sizeTexture.x * 0.f, sizeTexture.y * 0.f, sizeTexture.x, sizeTexture.y));
	if (!_bufferSound.loadFromFile("Resources/pasos.wav")) {
		std::cout << "Error sonido" << std::endl;
	}

	_soundEnemy.setBuffer(_bufferSound);
}

void Enemigo1::setEnemy() {
	_spriteEnemy.setPosition(sf::Vector2f((rand() % 400) + 200.f, (rand() % 400) + 200.f));
}

sf::Sprite Enemigo1::getEnemy() {
	return _spriteEnemy;
}

void Enemigo1::mover(float frame, int auxiliar, int numeroRandom) {
	sf::Clock clock;
	sf::Vector2u sizeTexture = _textureEnemy.getSize();
	sizeTexture.x /= 6;
	sizeTexture.y /= 4;
	
	if (auxiliar % 5 == 0){
		for (int i = 0; i < 50; i++){
			if (numeroRandom == 1) {
				_spriteEnemy.move(sf::Vector2f(0.f,-0.1f));
				_spriteEnemy.move(sf::Vector2f(0.f, -0.1f));

				_spriteEnemy.setTextureRect(sf::IntRect(sizeTexture.x * ((int)frame % 6), sizeTexture.y * 1.f, sizeTexture.x, sizeTexture.y));
				if (_soundEnemy.getStatus() != sf::SoundSource::Status::Playing) {
					_soundEnemy.play();
				}
			}
			else if (numeroRandom == 2) {
				_spriteEnemy.move(sf::Vector2f(-0.1f, 0.f));
				_spriteEnemy.move(sf::Vector2f(-0.1f, 0.f));

				_spriteEnemy.setTextureRect(sf::IntRect(sizeTexture.x * ((int)frame % 5), sizeTexture.y * 2.f, sizeTexture.x, sizeTexture.y));
				if (_soundEnemy.getStatus() != sf::SoundSource::Status::Playing) {
					_soundEnemy.play();
				}
			}
			else if (numeroRandom == 3) {
				_spriteEnemy.move(sf::Vector2f(0.f, 0.1f));
				_spriteEnemy.move(sf::Vector2f(0.f, 0.1f));

				_spriteEnemy.setTextureRect(sf::IntRect(sizeTexture.x * ((int)frame % 6), sizeTexture.y * 0.f, sizeTexture.x, sizeTexture.y));
				if (_soundEnemy.getStatus() != sf::SoundSource::Status::Playing) {
					_soundEnemy.play();
				}
			}
			else if (numeroRandom == 4) {
				_spriteEnemy.move(sf::Vector2f(0.1f, 0.f));
				_spriteEnemy.move(sf::Vector2f(0.1f, 0.f));

				_spriteEnemy.setTextureRect(sf::IntRect(sizeTexture.x * ((int)frame % 5), sizeTexture.y * 3.f, sizeTexture.x, sizeTexture.y));
				if (_soundEnemy.getStatus() != sf::SoundSource::Status::Playing) {
					_soundEnemy.play();
				}
			}
			else {
				_soundEnemy.stop();
			}
		}
	}
}