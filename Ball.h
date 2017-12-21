#pragma once

#include"Object.h"

class Ball : protected Object
{
public:
	Ball();
	~Ball();

	double GetVector();

private:
	float x;
	float y;
	double vector;

};
