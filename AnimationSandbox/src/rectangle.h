#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "ofMain.h"

class rectangle {
public:
	rectangle();
	void draw();
	void interpolateByPct(float myPct);
	void zenoToPoint(float catchX, float catchY);

	ofPoint pos;
	ofPoint posA;
	ofPoint posB;

	// what percent are we between a and b
	float pct;
	float shaper;

	//zeno
	float catchUpSpeed;

};

#endif RECTANGLE_H