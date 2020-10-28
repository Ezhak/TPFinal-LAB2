#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"

class Player{
	private:
		sf::Sprite _spritePlayer;
		sf::Texture _texturePlayer;
		sf::SoundBuffer _bufferSound;
		sf::Sound _soundPlayer;
	public:
		sf::Sprite getPlayer();
		void setPlayer();
		void setTexturaPlayer();
		void mover(float frame);
		void updatePlayer(float frame);
};
