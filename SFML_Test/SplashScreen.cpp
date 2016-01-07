#include "SplashScreen.h"

SplashScreen::SplashScreen()
{
}

SplashScreen::~SplashScreen()
{
}

void SplashScreen::LoadContent()
{
	if(!font.loadFromFile("Assets/fuente/orange.ttf"))
		system ("echo No se pudo cargar la fuente");
	text.setString("SplashScreen");
	text.setFont(font);
	text.setCharacterSize(50);
	text.setColor(sf::Color::Red);
}

void SplashScreen::UnloadContent()
{
}

void SplashScreen::Update(sf::Time &dt)
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		ScreenManager::GetInstance().AddScreen(new TitleScreen);
	}
}

void SplashScreen::Draw(sf::RenderWindow &Window)
{
	Window.draw(text);
}
