#pragma once

#include "sheep.hpp"
#include <iostream>
/*
	Class for sheep herding
*/
class Simulation
{
private:
	//Variables
	//Window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event event;

	//Mouse Position
	sf::Vector2i mousePosition;

	//Game objects
	Sheep* sheep[10000];

	//Private Functions
	void initVariables();
	void initWindow();
	void initHerd();

public:
	//Constructors / Distructors
	Simulation();
	virtual ~Simulation();

	//Accessors
	bool running() const;

	//Functions
	void pollEvents();
	void updateMousePosition();
	void update();
	void render();
};