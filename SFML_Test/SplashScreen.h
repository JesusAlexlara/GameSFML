#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include "GameScreen.h"
#include "TitleScreen.h"
#include "ScreenManager.h"
#include<SFML/Graphics.hpp>

class SplashScreen : public GameScreen
{
	public:
		SplashScreen();
		~SplashScreen();
		
	    void LoadContent();
		void UnloadContent();
		void Update(sf::Time &dt);
		void Draw(sf::RenderWindow &Window);
	protected:
	private:
		sf::Text text;
		sf::Font font;
};

#endif
