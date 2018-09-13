#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//circular motion
	radius = 300;
	xOrig = ofGetWidth() / 2;
	yOrig = ofGetHeight() / 2;
	
}

//--------------------------------------------------------------
void ofApp::update(){
	//circular motion
	//radius = radius + 0.1;
	angle = ofGetElapsedTimef();// *3.5;
	//radius = sin(angle + PI);
	//radius = ofMap(radius, -1, 1, 0, 200);
}

//--------------------------------------------------------------
void ofApp::draw(){
	//Basic sin and cosine
	ofSetRectMode(OF_RECTMODE_CORNER);

	float sinOfTime = sin(ofGetElapsedTimef());
	float sinOfTimeMapped = ofMap(sinOfTime, -1, 1, 0, 255);

	ofBackground(sinOfTimeMapped, sinOfTimeMapped, sinOfTimeMapped);

	float sinOfTime2 = sin(ofGetElapsedTimef() + PI);
	float sinOfTimeMapped2 = ofMap(sinOfTime2, -1, 1, 0, 255);

	ofSetColor(sinOfTimeMapped2, sinOfTimeMapped2, sinOfTimeMapped2);
	ofRect(100, 100, ofGetWidth() - 200, ofGetHeight() - 200);

	float xPos = ofMap(sin(ofGetElapsedTimef()), -1, 1, 0, ofGetWidth());
	ofSetColor(255, 0, 0);
	ofRect(xPos, ofGetHeight() / 2, 10, 10);

	//circular motion
	ofSetRectMode(OF_RECTMODE_CENTER);

	float x = xOrig + radius * cos(angle);
	float y = yOrig + radius * sin(angle);
	ofSetColor(ofColor::green);
	ofDrawRectangle(x, y, 10, 10);


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
