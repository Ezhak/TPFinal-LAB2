#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"

class Enemigo1{
	private:
		sf::Sprite _spriteEnemy;
		sf::Texture _textureEnemy;
		sf::SoundBuffer _bufferSound;
		sf::Sound _soundEnemy;
	public:
		sf::Sprite getEnemy();
		void setEnemy();
		void setTexturaEnemy();
		void mover(float frame, int auxiliar, int numerorandom);
};

