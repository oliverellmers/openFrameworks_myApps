#include "ofApp.h"
using namespace glm;

//--------------------------------------------------------------
void ofApp::setup(){
	minDistance = 10;
	leftMouseButtonPressed = false;
	isSavingPDF = false;
}

//--------------------------------------------------------------
void ofApp::update(){
	if (leftMouseButtonPressed) {
		ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());

		if (lastPoint.distance(mousePos) >= minDistance) {

			currentPolyline.curveTo(mousePos.x, mousePos.y);
			lastPoint = mousePos;
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){

	if (isSavingPDF) {
		ofBeginSaveScreenAsPDF("savedScreenshot_" + ofGetTimestampString() + ".pdf");
	}

	ofBackground(0);
	ofSetColor(255, 10);

	float indexP = 500;

	for (int i = 0; i < polylines.size(); i++) {
		ofPolyline polyline = polylines[i];
		polyline.draw();

		

		/*
		for (int vertexIndex = 0; vertexIndex < vertices.size(); vertexIndex++) {
			ofVec3f vertex = vertices[vertexIndex];
			ofDrawCircle(vertex, 5);
		}
		*/

		/*
		for (int p = 0; p < 100; p+=10) {
			ofVec3f point = polyline.getPointAtPercent(p/100.0);
			ofDrawCircle(point, 5);
		}
		*/


		//Draw Normals
		/*
		vector <vec3> vertices = polyline.getVertices();
		for (int vertexIndex = 0; vertexIndex < vertices.size(); vertexIndex++) {
			vec3 vertex = vertices[vertexIndex];  // Get the vertex
			vec3 normal = polyline.getNormalAtIndex(vertexIndex) * normalLength;  // Scale the normal
			ofDrawLine(vertex - normal / 2, vertex + normal / 2);  // Center the scaled normal around the vertex
		}
		*/

		/*
		vector <vec3> vertices = polyline.getVertices();
		float normalLength = 50;
		for (int p = 0; p < (int)indexP; p += 1) {
			vec3 point = polyline.getPointAtPercent(p / indexP);
			float floatIndex = polyline.getIndexAtPercent(p / indexP);
			vec3 normal = polyline.getNormalAtIndexInterpolated(floatIndex) * normalLength;
			ofDrawLine(point - normal/2, point + normal/2);
		}
		*/

		//Draw Tangents

		/*
		vector <vec3> vertices = polyline.getVertices();
		float tangentLength = 80;
		for (int vertexIndex = 0; vertexIndex < vertices.size(); vertexIndex++) {
			vec3 vertex = vertices[vertexIndex];
			vec3 tangent = polyline.getTangentAtIndex(vertexIndex) * tangentLength;
			ofDrawLine(vertex-tangent/2, vertex + tangent/2);

		}
		*/

		vector <vec3> vertices = polyline.getVertices();
		
		float tangentLength = 300;
		for (int p = 0; p < (int)indexP; p+=1) {

			vec3 point = polyline.getPointAtPercent(p/ indexP);
			float floatIndex = polyline.getIndexAtPercent(p/ indexP);
			vec3 tangent = polyline.getTangentAtIndexInterpolated(floatIndex) * tangentLength;
			ofDrawLine(point-tangent/2, point + tangent/2);

		}




	}
	
	currentPolyline.draw();

	if (isSavingPDF) {
		ofEndSaveScreenAsPDF();
		isSavingPDF = false;
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 's') {
		isSavingPDF = true;
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
	if (button == OF_MOUSE_BUTTON_LEFT) {
		leftMouseButtonPressed = true;
		currentPolyline.curveTo(x, y);

		currentPolyline.curveTo(x, y);
		lastPoint.set(x,y);
	}
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	if (button == OF_MOUSE_BUTTON_LEFT) {
		leftMouseButtonPressed = false;
		currentPolyline.curveTo(x,y);

		currentPolyline.simplify(0.75);

		polylines.push_back(currentPolyline);
		currentPolyline.clear();
	}
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
