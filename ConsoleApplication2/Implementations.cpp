#include "stdafx.h"
#include "Implementations.h"
#include "Definitions.h"
#include <SFML\Graphics.hpp>


void SpriteStuff::SetSprite(sf::Texture spriteT,sf::Sprite spriteS,int Left,int Top, int Width,int Height) {
	
	spriteS.setTexture(spriteT, true);
	
	spriteT.loadFromFile(PATH_TEXTURE_PLAYER, sf::IntRect(Left, Top, Width, Height));
}

//Jobb ha a hátteret külön hagyjuk a többi objektõl mert így hatékonyabban bírjuk befolyásolni a környezetet késõbb.
void SpriteStuff::SetBG(sf::Texture bgT, sf::Sprite bgS, int Left, int Top, int Width, int Height) {

	bgS.setTexture(bgT, true);
	
	bgT.loadFromFile(PATH_TEXTURE_PLAYER, sf::IntRect(Left, Top, Width, Height));
}

