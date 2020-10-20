#include "Player.h"
#include <iostream>
#include <Windows.h>
#include <SFML/Audio.hpp>

void Player::setTexturaPlayer() {
	_texturePlayer.loadFromFile("Resources/ezhak.png");
	_spritePlayer.setTexture(_texturePlayer);
	sf::Vector2u sizeTexture = _texturePlayer.getSize();
	sizeTexture.x /= 6;
	sizeTexture.y /= 4;
	_spritePlayer.setTextureRect(sf::IntRect(sizeTexture.x * 0.f, sizeTexture.y * 0.f, sizeTexture.x, sizeTexture.y));

	if (!_bufferSound.loadFromFile("Resources/pasos.wav")) {
		std::cout << "Error sonido" << std::endl;
	}

	_soundPlayer.setBuffer(_bufferSound);
}

void Player::setPlayer() {
	_spritePlayer.setPosition(sf::Vector2f(100.0f, 300.0f));
}

sf::Sprite Player::getPlayer() {
	return _spritePlayer;
}

void Player::mover(float frame) {
	sf::Vector2u sizeTexture = _texturePlayer.getSize();
	sizeTexture.x /= 6;
	sizeTexture.y /= 4;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		std::cout << "W." << std::endl;
		_spritePlayer.move(sf::Vector2f(0.f, -3.0f));
		_spritePlayer.setTextureRect(sf::IntRect(sizeTexture.x * ((int)frame % 6), sizeTexture.y * 1.f, sizeTexture.x, sizeTexture.y));
		if (_soundPlayer.getStatus() != sf::SoundSource::Status::Playing) {
			_soundPlayer.play();
		}
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		std::cout << "A." << std::endl;
		_spritePlayer.move(sf::Vector2f(-3.0f, 0.f));
		_spritePlayer.setTextureRect(sf::IntRect(sizeTexture.x * ((int)frame % 5), sizeTexture.y * 2.f, sizeTexture.x, sizeTexture.y));
		if (_soundPlayer.getStatus() != sf::SoundSource::Status::Playing) {
			_soundPlayer.play();
		}
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		std::cout << "S." << std::endl;
		_spritePlayer.move(sf::Vector2f(0.f, 3.0f));
		_spritePlayer.setTextureRect(sf::IntRect(sizeTexture.x * ((int)frame % 6), sizeTexture.y * 0.f, sizeTexture.x, sizeTexture.y));
		if (_soundPlayer.getStatus() != sf::SoundSource::Status::Playing) {
			_soundPlayer.play();
		}
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		std::cout << "D." << std::endl;
		_spritePlayer.move(sf::Vector2f(3.0f, 0.f));
		_spritePlayer.setTextureRect(sf::IntRect(sizeTexture.x * ((int)frame % 5), sizeTexture.y * 3.f, sizeTexture.x, sizeTexture.y));
		if (_soundPlayer.getStatus() != sf::SoundSource::Status::Playing) {
			_soundPlayer.play();
		}
	}
	else {
		_soundPlayer.stop();
	}
}

