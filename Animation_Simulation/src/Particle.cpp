#include "Particle.h"

Particle::Particle()
{
	setInitialCondition(0,0,0,0);
	dampening = 0.01f;
}

void Particle::resetForce() {
	frc.set(0, 0);
}

void Particle::addForce(float x, float y) {
	frc.x = frc.x + x;
	frc.y = frc.y + y;
}

void Particle::addDampeningForce() {
	frc.x -= vel.x * dampening;
	frc.y -= vel.y * dampening;
}


void Particle::setInitialCondition(float px, float py, float vx, float vy) {
	pos.set(px, py);
	vel.set(vy, vx);
}



void Particle::update() {
	vel = vel + frc;
	pos = pos + vel;
}

void Particle::draw() {
	ofDrawCircle(pos.x, pos.y, 3);
}