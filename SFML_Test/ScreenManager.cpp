#include "ScreenManager.h"

ScreenManager &ScreenManager::GetInstance()
{
	static ScreenManager instance;
	return instance;
}

ScreenManager::ScreenManager()
{
}

ScreenManager::~ScreenManager()
{
}

void ScreenManager::AddScreen(GameScreen *Screen)
{
	currentScreen->UnloadContent();
	delete currentScreen;
	
	currentScreen = Screen;
	currentScreen->LoadContent();
}

void ScreenManager::Initialize()
{
	currentScreen = new TitleScreen();
	file.LoadContent("pop.ccx", attributes, contents);
}

void ScreenManager::LoadContent()
{
	currentScreen->LoadContent();
}

void ScreenManager::Update(sf::Time &dt)
{
	currentScreen->Update(dt);
}

void ScreenManager::Draw(sf::RenderWindow &Window)
{
	currentScreen->Draw(Window);
}
