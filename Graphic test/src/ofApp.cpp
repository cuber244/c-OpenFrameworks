#include "ofApp.h"
void gotMessage(ofMessage msg);
std::vector<glm::vec2> points; // ‚±‚ê‚ð’Ç‰Á



//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//	for (int i = 0; i < 10; i++)
//		for (int j = 0; j < 10; j++)
//			ofDrawCircle(ofRandom(1.0, 500.0), 50 * (j + 1), ofRandom(1.0, 10.0)); // 1.0~10.0‚Å—”‚ð”­¶‚µ‚»‚ê‚ð”¼Œa‚É‚·‚é
	for (auto& p : points)
		ofDrawCircle(p.x, p.y, 5);
}

//--------------------------------------------------------------
	void ofApp::keyPressed (int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	points.push_back(glm::vec2(x, y));
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	points.clear(); // —£‚µ‚½‚çvector‚ðƒNƒŠƒA
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
