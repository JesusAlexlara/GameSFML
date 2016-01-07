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

void ScreenManager::SetText(std::string text)
{
	this->text = text;
}

void ScreenManager::DrawText()
{
	std::cout << text << std::endl;
}
