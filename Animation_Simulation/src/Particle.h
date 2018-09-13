#ifndef PARTICLE_H
#define PARTICLE_H
#include "ofMain.h"

class Particle
{
public:
	ofVec2f pos;
	ofVec2f vel;
	ofVec2f frc;


	Particle();
	void setInitialCondition(float px, float py, float vx, float vy);

	void resetForce();
	void addForce(float x, float y);
	void addDampeningForce();

	void update();
	void draw();

	float dampening;
};
#endif // PARTICLE_H

