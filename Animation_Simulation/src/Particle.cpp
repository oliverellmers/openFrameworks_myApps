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

void Particle::addRepulsionForce(Particle &p, float radius, float scale) {
	//1. make a vector of where this particle is
	ofVec2f posOfForce;
	posOfForce.set(p.pos.x, p.pos.y);

	//2. calculate the difference in length
	ofVec2f diff = pos - posOfForce;
	float length = diff.length(); //magnitude

	//3.check if close enough
	bool bAmCloseEnough = true;
	if (radius > 0) {
		if (length > radius) {
			bAmCloseEnough = false;
		}
	}

	//4. if so, update force
	if (bAmCloseEnough == true) {
		float pct = 1 - (length / radius);
		diff.normalize();
		frc.x = frc.x + diff.x * scale * pct;
		frc.y = frc.y + diff.y * scale * pct;
		p.frc.x = p.frc.x + diff.x * scale * pct;
		p.frc.y = p.frc.y + diff.y * scale * pct;
	}

}

void Particle::addAttractionForce(Particle &p, float radius, float scale) {}


void Particle::setInitialCondition(float px, float py, float vx, float vy) {
	pos.set(px, py);
	vel.set(vy, vx);
}



void Particle::update() {
	vel = vel + frc;
	pos = pos + vel;
}

void Particle::draw() {
	ofNoFill();
	ofSetColor(ofColor::red);
	ofDrawCircle(pos.x, pos.y, 5);
}