#ifndef STAR_H
#define STAR_H

#include <SFML/Graphics.hpp>
#include <cmath>
#include "Random.h"
#include <iostream>
#include <random>

class Star : public sf::Drawable
{
	public:
		Star();
		Star(float x, float y, Random &ran);
		~Star();
		
		void Update(sf::Time &dt);
		void draw(sf::RenderTarget& target, sf::RenderStates states) const;
		
	protected:
	private:
		sf::Vector2f Zoom;
		sf::Vector2f Posicion;
		sf::CircleShape img;
		double Velocidad, VelocidadZo;
		int Alpha;
		
};

#endif
