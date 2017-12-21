#pragma once

class Object {
public:
	Object();
	~Object();

	float GetX();
	float GetY();
	int GetGh();

	virtual void SetPos(float x, float y);
	void SetGh(int gh);

private:
	int gh;

protected:
	float x;
	float y;
};
