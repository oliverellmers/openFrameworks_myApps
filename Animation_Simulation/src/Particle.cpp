#include "Particle.h"

Particle::Particle()
{
	setInitialCondition(0,0,0,0);
	dampening = 0.001f;
}

void Particle::resetForce() {
	frc.set(0, 0);
}

void Particle::addForce(float x, float y) {
	frc.x = frc.x + x;
	frc.y = frc.y + y;
}

void Particle::addRepulsionForce(float px, float py, float radius, float strength) {

	ofVec2f posOfForce;
	posOfForce.set(px, py);
	ofVec2f diff = pos - posOfForce;

	if (diff.length() < radius) { 
		float pct = 1 - (diff.length() / radius); 
		diff.normalize();
		frc.x += diff.x * pct * strength;
		frc.y += diff.y * pct * strength;

	}
}

void Particle::addAttractionForce(float px, float py, float radius, float strength) {

	ofVec2f posOfForce;
	posOfForce.set(px, py); //set the position of the force
	ofVec2f diff = pos - posOfForce; //find out distance between position of force and position of point / comparison

	if (diff.length() < radius) { //check if the pos of point is inside the radius of the force
		float pct = 1 - (diff.length() / radius); //invert the percent at which the pos of point is within the radius of the force
		diff.normalize(); //normalize to create directional vector
		frc.x -= diff.x * pct * strength;
		frc.y -= diff.y * pct * strength; //diff is a line between the particle / point in space and the pos of force

	}
}

void Particle::addClockwiseForce(float px, float py, float radius, float strength) {
	
	ofVec2f posOfForce;
	posOfForce.set(px, py);

	ofVec2f diff = pos - posOfForce;

	if (diff.length() < radius) {
		float pct = 1 - (diff.length() / radius);
		diff.normalize();
		frc.x -= diff.y * pct * strength;
		frc.y -= diff.x * pct * strength;
	}
}

void Particle::addCounterClockwiseForce(float px, float py, float radius, float strength) {
	ofVec2f posOfForce;
	posOfForce.set(px, py);

	ofVec2f diff = pos - posOfForce;

	if (diff.length() < radius) {
		float pct = 1 - (diff.length() / radius);
		diff.normalize();
		frc.x += diff.y * pct * strength;
		frc.y += diff.x * pct * strength;
	}
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