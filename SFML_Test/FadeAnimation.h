#ifndef FADEANIMATION_H
#define FADEANIMATION_H

#include "Animation.h"

class FadeAnimation : public Animation
{
	public:
		FadeAnimation();
		~FadeAnimation();
		
		void LoadContent(std::string txt, sf::Texture img, sf::Vector2f pos);
		void UnloadContent();
		void Update();
		void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	protected:
	private:
		bool increase;
};

#endif
