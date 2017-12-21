#pragma once

#include"Object.h"

class Block : public Object {
public:
	Block(unsigned int x, unsigned int y);
	~Block();

	void SetId(unsigned int id);
	void SetPos(float x,float y);

private:
	unsigned int id;
	unsigned int size_x;
	unsigned int size_y;
};

