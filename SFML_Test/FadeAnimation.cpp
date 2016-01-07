#include "FadeAnimation.h"

FadeAnimation::FadeAnimation()
{
}

FadeAnimation::~FadeAnimation()
{
}

void FadeAnimation::LoadContent(std::string txt, sf::Texture img, sf::Vector2f pos)
{
	Animation::LoadContent(txt, img, pos);
	
}
