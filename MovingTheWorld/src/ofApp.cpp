#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	

	/*
	ofColor blueColor(50, 187, 250, 200);
	ofColor purpleColor(231, 49, 247, 200);

	for (int rows = 0; rows < 10; rows++) {
		ofPushMatrix();

		for (int cols = 0; cols < 7; cols ++) {

			ofSetColor(blueColor);
			ofDrawCircle(30, 30, 30);
			ofDrawRectangle(5, 70, 50, 100);
			ofSetColor(blueColor);
			ofDrawCircle(95, 30, 30);
			ofDrawRectangle(70, 70, 50, 100);
			ofSetColor(purpleColor);
			ofDrawCircle(45, 90, 15);
			ofDrawRectangle(30, 110, 30, 60);
			ofSetColor(purpleColor);
			ofDrawCircle(80, 90, 15);
			ofDrawRectangle(65, 110, 30, 60);

			ofTranslate(150, 0);

		}
		
		ofPopMatrix();
		ofTranslate(0, 200);
	}
	*/
	ofSetRectMode(OF_RECTMODE_CENTER);
	ofBackground(255);

	ofPushMatrix();
		ofSetColor(0,0,255);
		ofDrawRectangle(500, 200, 200, 200);

		ofTranslate(500, 200);
		ofScale(0.5, 0.5);
		ofRotate(45);
		ofSetColor(255, 0, 0);
		ofDrawRectangle(0, 0, 500, 500);
	ofPopMatrix();
	
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
