#include"Object.h"

Object::Object() {
}

Object::~Object() {
}

float Object::GetX() {
	return this->x;
}

float Object::GetY() {
	return this->y;
}

int Object::GetGh() {
	return this->gh;
}

void Object::SetPos(float x, float y) {
	this->x = x;
	this->y = y;
}

void Object::SetGh(int gh) {
	this->gh = gh;
}
