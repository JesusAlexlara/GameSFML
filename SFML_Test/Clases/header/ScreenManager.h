#ifndef SCREENMANAGER_H
#define SCREENMANAGER_H

#include <string>
#include <iostream>
#include <cstdio>

class ScreenManager
{
	public:
		~ScreenManager();
		static ScreenManager &GetInstance();
		
		void SetText(std::string text);
		void DrawText();
	protected:
	private:
		ScreenManager();
		ScreenManager(ScreenManager const&);
		void operator=(ScreenManager const&);
		
		std::string text;
};

#endif
