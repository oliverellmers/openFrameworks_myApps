#include "ofApp.h"
#include "Ball.h"

//--------------------------------------------------------------
void ofApp::setup(){
	/*
	for (int i = 0; i < NBALLS; i++) {
		int size = (i + 1) * 10;
		int randomX = ofRandom(0, ofGetWidth());
		int randomY = ofRandom(0, ofGetHeight());
		groupOfBalls[i].setup(randomX, randomY, size);
	}
	*/

	tempBallBlue.setup();
	tempBallRed.setup();
	tempBallGreen.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
	/*
	for (int i = 0; i < NBALLS; i++) {
		groupOfBalls[i].update();
	}
	*/

	for (int i = 0; i < vectorOfBalls.size(); i++) {
		vectorOfBalls[i].update();
	}

	tempBallBlue.update();
	tempBallRed.update();
	tempBallGreen.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);
	/*
	for (int i = 0; i < NBALLS; i++) {
		groupOfBalls[i].draw();
	}
	*/
	ofEnableBlendMode(OF_BLENDMODE_ADD);

	for (int i = 0; i < vectorOfBalls.size(); i++) {
		vectorOfBalls[i].draw();
	}

	tempBallBlue.draw();
	tempBallRed.draw();
	tempBallGreen.draw();
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
	//Ball tempBall;
	//tempBall.setup();
	


	//vectorOfBalls.push_back(tempBall);

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	for (int i = 0; i < vectorOfBalls.size(); i++) {
		float distance = ofDist(x, y, vectorOfBalls[i].x, vectorOfBalls[i].y);

		if (distance < vectorOfBalls[i].dim) {
			vectorOfBalls.erase(vectorOfBalls.begin()+i);
		}
	}

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
