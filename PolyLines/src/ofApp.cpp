#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	straightSegmentPolyline.addVertex(100,100);
	straightSegmentPolyline.addVertex(150, 150);
	straightSegmentPolyline.addVertex(200, 100);
	straightSegmentPolyline.addVertex(250, 150);
	straightSegmentPolyline.addVertex(300, 100);

	curvedSegmentofPolyline.curveTo(350, 100);
	curvedSegmentofPolyline.curveTo(350, 100);
	curvedSegmentofPolyline.curveTo(400, 150);
	curvedSegmentofPolyline.curveTo(450, 100);
	curvedSegmentofPolyline.curveTo(500, 150);
	curvedSegmentofPolyline.curveTo(550, 100);
	curvedSegmentofPolyline.curveTo(550, 100);

	closedShapePolyline.addVertex(600, 125);
	closedShapePolyline.addVertex(700, 100);
	closedShapePolyline.addVertex(800, 125);
	closedShapePolyline.addVertex(700, 150);
	closedShapePolyline.close();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);
	ofSetLineWidth(2.0);
	ofSetColor(255, 100, 0);
	straightSegmentPolyline.draw();
	curvedSegmentofPolyline.draw();
	closedShapePolyline.draw();
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
