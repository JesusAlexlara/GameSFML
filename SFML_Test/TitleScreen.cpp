#include "TitleScreen.h"

TitleScreen::TitleScreen()
{
}

TitleScreen::~TitleScreen()
{
	this->intro->stop();
	delete this->intro;
	delete []stars;
	stars = NULL;
}

void TitleScreen::LoadContent()
{
	this->stars = new Star[NUMSTARS];
	
	this->intro = new sf::Music();
	if(!font.loadFromFile("Assets/fuente/orange.ttf"))
		system ("echo No se pudo cargar la fuente");
	text.setString("TitleScreen");
	text.setFont(font);
	text.setCharacterSize(50);
	text.setColor(sf::Color::Blue);
	
	this->intro->openFromFile("Assets/audio/song1.ogg");
	this->intro->setVolume(25.0f);
	this->intro->setLoop(false);
	this->intro->play();
	
	for (int i = 0; i < NUMSTARS; i++)
    {
    	int na = num.Next(1024);
    	int nb = num.Next(648);
    	
    	Star aux(na, nb, num);
    	this->stars[i] = aux;
        //this->stars.push_back(aux);
        
        //std::cout << na << std::endl;
    }
    
    
}

void TitleScreen::UnloadContent()
{
}

void TitleScreen::Update(sf::Time &dt)
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		ScreenManager::GetInstance().AddScreen(new SplashScreen);
	}
	
	if(stars != NULL)
		for(int i = 0; i < NUMSTARS; i++)
		{
			this->stars[i].Update(dt);
		}
}

void TitleScreen::Draw(sf::RenderWindow &Window)
{
	//Window.draw(text);
	if(stars != NULL)
		for(int i = 0; i < NUMSTARS; i++)
		{
			Window.draw(this->stars[i]);
		}
}
