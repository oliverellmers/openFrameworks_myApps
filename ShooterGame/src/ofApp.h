#pragma once

#include "ofMain.h"
#include "Bullet.h"
#include "Enemy.h"
#include "LevelController.h"
#include "Life.h"
#include "Player.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		string game_state;
		int score;
		Player player_1;
		ofImage player_Image;
};


