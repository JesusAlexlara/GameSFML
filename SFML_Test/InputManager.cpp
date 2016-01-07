#include "InputManager.h"

InputManager::InputManager()
{
}

InputManager::~InputManager()
{
}

/*bool InputManager::KeyPressed(int key)
{
	if(event.key.code == key)
		return true;
	return false;
}

bool InputManager::KeyPressed(std::vector<int> keys)
{
	for(int i = 0; i < keys.size(); i++)
	{
		if(event.key.code == keys[i])
			return true;
	}
	return false;
}

bool InputManager::KeyRelease(int key)
{
	if(event.key.code == key && sf::Event::KeyReleased)
		return true;
	return false;
}

bool InputManager::KeyRelease(std::vector<int> keys)
{
	for(int i = 0; i < keys.size(); i++)
	{
		if(event.key.code == keys[i] && sf::Event::KeyReleased)
			return true;
	}
	return false;
}

bool InputManager::KeyDown(int key)
{
	if (event.type == sf::Event::KeyPressed)
		if(event.key.code == key)
			return true;
	return false;
}

bool InputManager::KeyDown(std::vector<int> keys)
{
	if (event.type == sf::Event::KeyPressed)
		for(int i = 0; i < keys.size(); i++)
		{
			if(event.key.code == keys[i])
				return true;
		}
	return false;
}*/
