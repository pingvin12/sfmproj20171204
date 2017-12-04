#include "stdafx.h"
#include "Implementations.h"
#include "Definitions.h"
#include <SFML\Graphics.hpp>


void SpriteStuff::SetSprite(sf::Texture spriteT,sf::Sprite spriteS,int Left,int Top, int Width,int Height) {
	
	spriteS.setTexture(spriteT, true);
	
	spriteT.loadFromFile(PATH_TEXTURE_PLAYER, sf::IntRect(Left, Top, Width, Height));
}

//Jobb ha a h�tteret k�l�n hagyjuk a t�bbi objekt�l mert �gy hat�konyabban b�rjuk befoly�solni a k�rnyezetet k�s�bb.
void SpriteStuff::SetBG(sf::Texture bgT, sf::Sprite bgS, int Left, int Top, int Width, int Height) {

	bgS.setTexture(bgT, true);
	
	bgT.loadFromFile(PATH_TEXTURE_PLAYER, sf::IntRect(Left, Top, Width, Height));
}

