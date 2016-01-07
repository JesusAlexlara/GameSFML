#ifndef SCREENMANAGER_H
#define SCREENMANAGER_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>
#include "GameScreen.h"
#include "SplashScreen.h"
#include "TitleScreen.h"
#include "FileManager.h"
#define ScreenWidth 1024
#define ScreenHeight 648

class ScreenManager
{
	public:
		~ScreenManager();
		static ScreenManager &GetInstance();
		
		void Initialize();
		void LoadContent();
		void Update(sf::Time &dt);
		void Draw(sf::RenderWindow &Window);
		
		void AddScreen(GameScreen *Screen);
		
	protected:
	private:
		GameScreen *currentScreen;
		//GameScreen *newScreen;
		FileManager file;
		std::vector< std::vector<std::string> > attributes;
		std::vector< std::vector<std::string> > contents;
		
		ScreenManager();
		ScreenManager(ScreenManager const&);
		void operator=(ScreenManager const&);
};

#endif
