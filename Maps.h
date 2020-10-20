#include "SFML/Graphics.hpp"

class Maps{
	private:
		sf::Sprite _spriteMapa;
		sf::Texture _textureMapa;
	public:
		sf::Sprite getMapa();
		void setMapa();
		void setTexturaMapa();
};

