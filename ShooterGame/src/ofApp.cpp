#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	game_state == "start";

	player_Image.loadImage("player.png");
	player_1.setup(&player_Image);

}

//--------------------------------------------------------------
void ofApp::update(){
	if (game_state == "start") {
	
	}
	else if (game_state == "game") {
		player_1.update();
	
	}
	else if (game_state == "end") {
	
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	if (game_state == "start") {

	}
	else if (game_state == "game") {
		ofBackground(0,0,0);

		player_1.draw();

	}
	else if (game_state == "end") {

	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (game_state == "game") {
		if (key == OF_KEY_LEFT) {
			player_1.is_left_pressed = true;
		}

		if (key == OF_KEY_RIGHT) {
			player_1.is_right_pressed = true;
		}

		if (key == OF_KEY_UP) {
			player_1.is_up_pressed = true;
		}

		if (key == OF_KEY_DOWN) {
			player_1.is_down_pressed = true;
		}
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

	if (game_state == "start") {
		game_state = "game";
	}
	else if (game_state == "game") {

		if (key == OF_KEY_LEFT) {
			player_1.is_left_pressed = false;
		}

		if (key == OF_KEY_RIGHT) {
			player_1.is_right_pressed = false;
		}

		if (key == OF_KEY_UP) {
			player_1.is_up_pressed = false;
		}

		if (key == OF_KEY_DOWN) {
			player_1.is_down_pressed = false;
		}
	}

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
