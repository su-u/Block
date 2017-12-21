#include"Block.h"

Block::Block(unsigned int x, unsigned int y) {
	this->size_x = x;
	this->size_y = y;
}

Block::~Block() {
}

void Block::SetId(unsigned int id) {
	this->id = id;
}

void Block::SetPos(float x, float y) {
	this->x = x - (this->size_x / 2);
	this->y = y - (this->size_y / 2);
}

