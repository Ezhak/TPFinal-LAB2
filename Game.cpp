#include <SFML/Audio.hpp>
#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Maps.h"
#include "Enemigo1.h"
#include "Enemigo2.h"
#include "Estatua.h"
#include "Dungeon1.h"
#include "Dungeon2.h"
#include "Dungeon3.h"
#include "Dungeon4.h"
#include "Dungeon5.h"

void Game::mostrarVentana() {
	sf::RenderWindow _ventana(sf::VideoMode(800, 650), "Revenge");
	_ventana.setFramerateLimit(60);
	sf::Event evento;

	sf::Music musica;
	musica.openFromFile("Resources/musicaprincipal.wav");

	sf::SoundBuffer buffer;
	buffer.loadFromFile("Resources/sonidoaparecer.wav");
	sf::Sound sound;
	sound.setBuffer(buffer);
	if (sound.getStatus() != sf::SoundSource::Status::Playing) {
		sound.play();
	}
	else {
		sound.stop();
	}

	float frame = 0;
	float frameNPC = 0;
	int auxiliar = 0;
	int numerorandom = 0;

	Maps mapaPrincipal;
	mapaPrincipal.setTexturaMapa();
	mapaPrincipal.setMapa();
	//musica.play();

	Player nuevoPlayer;
	nuevoPlayer.setTexturaPlayer();
	nuevoPlayer.setPlayer();
	
	Enemigo1 nuevoEnemigo1;
	nuevoEnemigo1.setTexturaEnemy();
	nuevoEnemigo1.setEnemy();

	Enemigo1 nuevoEnemigo2;
	nuevoEnemigo2.setTexturaEnemy();
	nuevoEnemigo2.setEnemy();

	Enemigo2 nuevoEnemigo3;
	nuevoEnemigo3.setTexturaEnemy();
	nuevoEnemigo3.setEnemy();

	Enemigo2 nuevoEnemigo4;
	nuevoEnemigo4.setTexturaEnemy();
	nuevoEnemigo4.setEnemy();

	Estatua nuevaEstatua;
	nuevaEstatua.setTexturaEstatua();
	nuevaEstatua.setEstatua();

	Dungeon1 nuevoDungeon1;
	nuevoDungeon1.setTexturaDungeon1();
	nuevoDungeon1.setDungeon1();

	Dungeon2 nuevoDungeon2;
	nuevoDungeon2.setTexturaDungeon2();
	nuevoDungeon2.setDungeon2();

	Dungeon3 nuevoDungeon3;
	nuevoDungeon3.setTexturaDungeon3();
	nuevoDungeon3.setDungeon3();

	Dungeon4 nuevoDungeon4;
	nuevoDungeon4.setTexturaDungeon4();
	nuevoDungeon4.setDungeon4();

	Dungeon5 nuevoDungeon5;
	nuevoDungeon5.setTexturaDungeon5();
	nuevoDungeon5.setDungeon5();

	while (_ventana.isOpen()) {
		while (_ventana.pollEvent(evento)) {
			switch (evento.type) {
			case sf::Event::Closed:
				_ventana.close();
				break;
			}
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			{
				sf::Vector2i localPosition = sf::Mouse::getPosition(_ventana);
				std::cout << localPosition.x << std::endl;
				std::cout << localPosition.y << std::endl;
			}
		}

		_ventana.clear();
		_ventana.draw(mapaPrincipal.getMapa());
		_ventana.draw(nuevoPlayer.getPlayer());
		nuevoPlayer.mover(frame);

		_ventana.draw(nuevoEnemigo1.getEnemy());
		_ventana.draw(nuevoEnemigo2.getEnemy());
		_ventana.draw(nuevoEnemigo3.getEnemy());
		_ventana.draw(nuevoEnemigo4.getEnemy());

		_ventana.draw(nuevaEstatua.getEstatua());
		_ventana.draw(nuevoDungeon1.getDungeon1());
		_ventana.draw(nuevoDungeon2.getDungeon2());
		_ventana.draw(nuevoDungeon3.getDungeon3());
		_ventana.draw(nuevoDungeon4.getDungeon4());
		_ventana.draw(nuevoDungeon5.getDungeon5());

		auxiliar++;

		numerorandom = (rand() % 10) + 0;
		nuevoEnemigo1.mover(frameNPC, auxiliar, numerorandom);
		numerorandom = (rand() % 10) + 0;
		nuevoEnemigo2.mover(frameNPC, auxiliar, numerorandom);

		numerorandom = (rand() % 100) + 1;
		nuevoEnemigo3.mover(frameNPC, numerorandom);
		numerorandom = (rand() % 100) + 1;
		nuevoEnemigo4.mover(frameNPC, numerorandom);

		frame += 0.35f;
		frameNPC += 50.35f;

		_ventana.display();	
	}
	musica.stop();
}