#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofSetBackgroundAuto(false);
	ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	/*
	ofSetColor(255);
	ofFill();
	ofDrawRectangle(50, 50, 100, 100);

	ofDrawCircle(250, 100, 50);
	ofDrawEllipse(400, 100, 80, 100);
	ofNoFill();
	ofDrawTriangle(500, 150, 550, 50, 600, 150);
	ofDrawLine(700, 50, 700, 150);
	*/

	if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {

		/*
		int maxRadius = 100;
		int radiusStepSize = 5;
		int alpha = 3;
		int maxOffsetDistance = 100;
		
		for(int radius = maxRadius; radius > 0; radius -= radiusStepSize) {
			float angle = ofRandom(ofDegToRad(360.0));
			float distance = ofRandom(20);
			float xOffset = cos(angle) * distance;
			float yOffset = sin(angle) * distance;

			ofColor myOrange(255, 132, 0, alpha);
			ofColor myRed(255, 6, 0, alpha);
			ofColor inBetween = myOrange.getLerped(myRed, ofRandom(1.0));

			ofSetColor(inBetween);
			
			ofDrawCircle(ofGetMouseX() + xOffset, ofGetMouseY() + yOffset, radius);
		}
		*/

		/*
		int numLines = 30;
		int minRadius = 25;
		int maxRadius = 125;
		for (int i = 0; i < numLines; i++) {
			float angle = ofRandom(ofRadToDeg(360.0));
			float distance = ofRandom(minRadius, maxRadius);
			float xOffset = cos(angle) * distance;
			float yOffset =  sin(angle) * distance;
			float alpha = ofMap(distance, minRadius, maxRadius, 50, 0);
			ofSetColor(255, alpha);
			ofDrawLine(ofGetMouseX(), ofGetMouseY(), ofGetMouseX() + xOffset, ofGetMouseY() + yOffset);

		}
		*/

		

		int numTriangles = 10;
		int minOffset = 5;
		int maxOffset = 70;
		int alpha = 150;
		for (int t = 0; t < numTriangles; t++) {
			float offsetDistance = ofRandom(minOffset, maxOffset);

			ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());


			ofVec2f p1(0, 6.25);
			ofVec2f p2(25, 0);
			ofVec2f p3(0, -6.25);

			float rotation = ofRandom(360);
			p1.rotate(rotation);
			p2.rotate(rotation);
			p3.rotate(rotation);

			ofVec2f triangleOffset(offsetDistance, 0.0);
			triangleOffset.rotate(rotation);

			p1 += mousePos + triangleOffset;
			p2 += mousePos + triangleOffset;
			p3 += mousePos + triangleOffset;

			ofColor aqua(0, 252, 255, alpha);
			ofColor purple(198, 0, 205, alpha);
			ofColor inBetween = aqua.getLerped(purple, ofRandom(1.0));
			ofSetColor(inBetween);

			ofDrawTriangle(p1, p2, p3);

		}


	}

	if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT)) {
		ofBackground(0);
	}

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 's') {
		glReadBuffer(GL_FRONT);
		ofSaveScreen("savedScreenshot_" + ofGetTimestampString() + ".png");
	}
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
