#ifndef TITLESCREEN_H
#define TITLESCREEN_H

#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<iostream>
#include <vector>
#include "GameScreen.h"
#include "SplashScreen.h"
#include "ScreenManager.h"
#include "Random.h"
#include "Star.h"
#define NUMSTARS 200

class TitleScreen : public GameScreen
{
	public:
		TitleScreen();
		~TitleScreen();
		
	    void LoadContent();
		void UnloadContent();
		void Update(sf::Time &dt);
		void Draw(sf::RenderWindow &Window);
	protected:
	private:
		Star *stars;
		sf::Text text;
		sf::Font font;
		sf::Sprite backGround;
		//sf::Clock time;
		sf::Music *intro;
		Random num;
		//std::vector<Star> stars;
};

#endif
