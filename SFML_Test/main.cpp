#include "ScreenManager.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <cstdlib>
#include <fstream>

int main(){
	
	sf::Time deltaTime;
	sf::Clock deltaClock;
	sf::RenderWindow Window(sf::VideoMode(ScreenWidth, ScreenHeight, 32), 
									"Titulo");
									
	ScreenManager::GetInstance().Initialize();
	ScreenManager::GetInstance().LoadContent();
	Window.setKeyRepeatEnabled(false);
	Window.setFramerateLimit(60);
	Window.setVerticalSyncEnabled(true);
	
	while(Window.isOpen())
	{
		
		
		sf::Event event;
		if(Window.pollEvent(event))
		{
		/*	if(event.key.code == (int)sf::Keyboard::Left)
			{
				std::string a = "echo " + (int)event.key.code;
				std::string final = a + "&pause";
				system(final.c_str());
				ScreenManager::GetInstance().AddScreen(new SplashScreen);
			}
			if (event.key.code == (int)sf::Keyboard::Right)
			{
				ScreenManager::GetInstance().AddScreen(new TitleScreen);
			}*/
			if(event.type == sf::Event::Closed || 
				event.key.code == (int)sf::Keyboard::Escape)
			{
				Window.close();
			}
		}
		
		ScreenManager::GetInstance().Update(deltaTime);
			
		Window.clear();
		ScreenManager::GetInstance().Draw(Window);
		Window.display();
		
		deltaTime = deltaClock.restart();
	}
	
	return 0;
}

