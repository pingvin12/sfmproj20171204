#pragma once
#include <SFML\Graphics.hpp>


class SpriteStuff {
private://stuff

public:
	void SetSprite(sf::Texture spriteT, sf::Sprite spriteS, int Left, int Top, int Width, int Height);
	void SetBG(sf::Texture bgT,sf::Sprite bgS,int Left,int Top,int Width,int Height);
};
