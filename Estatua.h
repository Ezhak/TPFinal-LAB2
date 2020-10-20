#include "SFML/Graphics.hpp"

class Estatua{
	private:
		sf::Sprite _spriteEstatua;
		sf::Texture _textureEstatua;
	public:
		sf::Sprite getEstatua();
		void setEstatua();
		void setTexturaEstatua();
};

