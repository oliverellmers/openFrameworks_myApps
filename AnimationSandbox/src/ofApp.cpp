#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetFrameRate(30);
	//ofSetVerticalSync(false);
	ofBackground(ofColor::black);

	xPos = 5;
	speed = 200;

	myRectangle.posA.x = 10;
	myRectangle.posA.y = 10;
	myRectangle.posB.x = 590;
	myRectangle.posB.y = 590;
	myRectangle.interpolateByPct(0);
	pct = 0;
	
}

//--------------------------------------------------------------
void ofApp::update(){
	//xPos += 2;
	xPos += ofGetLastFrameTime() * speed;

	if (ofGetWidth() < xPos) {
		xPos = 5;
	}

	/*
	float A = 0;
	float B = 10;
	float position = ((1 - pct) * A) + (pct * B);
	cout << "position: " << position << endl;
	*/

	pct += 0.01f;
	if (pct > 1) {
		pct = 0;
	}
	myRectangle.interpolateByPct(pct);
}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetColor(ofColor::red);
	if (ofGetFrameNum() % 2 == 0) {
		ofSetColor(ofColor::blue);
	}

	ofDrawCircle(xPos, 100, 10);
	myRectangle.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	
	myRectangle.posA = myRectangle.pos;
	myRectangle.posB.x = x;
	myRectangle.posB.y = y;
	pct = 0;
	myRectangle.interpolateByPct(0);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
