#include "Star.h"

Star::Star()
{
}

Star::Star(float x, float y, Random &ran)
{
	this->Zoom.x = 1;
	this->Zoom.y = 1;
	this->Posicion.x = x;
	this->Posicion.y = y;
	this->VelocidadZo = 0.0020;
	double ratio = 1.0 - cos( (abs(this->Posicion.x - 1024/2.5)) * 4.4 / 1024) * 0.2;
	
	this->img.setRadius((float)ratio);
	this->img.setFillColor(sf::Color::White); 
	this->img.setPosition(this->Posicion);
	this->Alpha = 254;
	
	double randomD = ran.NextDouble();
	this->Velocidad = 150 * (ratio + randomD);
	std::cout <<"Tamanio: " << ratio << "  Velocidad: " << this->Velocidad << " " << randomD << std::endl;
}

Star::~Star()
{
}

void Star::Update(sf::Time &dt)
{
	this->Posicion.y -= (dt.asSeconds() * (float)this->Velocidad);
	this->img.setPosition(this->Posicion);
	if(this->Posicion.y < -10)
	{
		this->Posicion.y = 650;
	}
	
	this->Zoom.x = this->Zoom.y += this->VelocidadZo;
}

void Star::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(this->img);
}
