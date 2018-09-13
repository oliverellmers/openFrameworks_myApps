#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0, 0, 0);
	ofSetColor(255);

	float waveHeight = 100;
	float noiseScale = 50.0;
	ofNoFill();
	ofPushMatrix();
	ofTranslate(0, ofGetHeight() / 2 - waveHeight/2);
	ofBeginShape();
	for (int i = 0; i < ofGetWidth(); i++) {
		float x = i;
		float noise = ofNoise(i/ noiseScale);
		float y = ofMap(noise, 0, 1, 0, waveHeight);
		ofVertex(x, y);
	}
	ofEndShape();
	ofPopMatrix();

	ofSetColor(255, 0, 0);
	float x = ofMap(ofNoise(ofGetElapsedTimef()/2.0 , -1000), 0, 1, 0, ofGetWidth());
	float y = ofMap(ofNoise(ofGetElapsedTimef()/2.0, 1000), 0, 1, 0, ofGetHeight());
	ofDrawCircle(x, y, 3);

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
