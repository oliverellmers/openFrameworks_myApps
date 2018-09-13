#include "rectangle.h"

rectangle::rectangle() {
	shaper = 0.5;

	//zeno
	catchUpSpeed = 0.01;
}

void rectangle::draw() {
	ofFill();
	ofSetRectMode(OF_RECTMODE_CENTER);
	ofSetColor(ofColor::green);
	ofDrawRectangle(pos.x, pos.y, 10, 10);
}

void rectangle::interpolateByPct(float myPct) {
	//pct = myPct;
	pct = pow(myPct, shaper);

	pos.x = (1 - pct) * posA.x + (pct)* posB.x;
	pos.y = (1 - pct) * posA.y + (pct)* posB.y;
}

void rectangle::zenoToPoint(float catchX, float catchY) {
	pos.x = catchUpSpeed * catchX + (1 - catchUpSpeed) * pos.x;
	pos.y = catchUpSpeed * catchY + (1 - catchUpSpeed) * pos.y;
}





