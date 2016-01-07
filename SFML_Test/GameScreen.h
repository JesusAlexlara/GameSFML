#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include<SFML/Graphics.hpp>

class GameScreen
{
	public:
		GameScreen();
		virtual ~GameScreen();
		
		virtual void LoadContent();
		virtual void UnloadContent();
		virtual void Update(sf::Time &dt);
		virtual void Draw(sf::RenderWindow &Window);
	protected:
};

#endif
