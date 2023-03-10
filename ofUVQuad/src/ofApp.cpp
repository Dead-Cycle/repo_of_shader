#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofDisableArbTex();
    
    image.load("parrot.png");
    image.getTexture().setTextureWrap(GL_REPEAT, GL_REPEAT);
    
    ////绘制4边形quad
    quad.addVertex(glm::vec3(-1, -1, 0));
    quad.addVertex(glm::vec3(1, -1, 0));
    quad.addVertex(glm::vec3(1, 1, 0));
    quad.addVertex(glm::vec3(-1, 1, 0));
    
    ofIndexType indices[6] = { 0, 1, 2, 2, 3, 0 };
    quad.addIndices(indices, 6);
    
    //setupQuad(); //填充4边形顶点颜色
    //setupUVTexCoord();
    setupScrollUVTexCoord();
}

void ofApp::setupQuad() {
    quad.addColor(ofDefaultColorType(1, 0, 0, 1));
    quad.addColor(ofDefaultColorType(0, 1, 0, 1));
    quad.addColor(ofDefaultColorType(0, 0, 1, 1));
    quad.addColor(ofDefaultColorType(1, 1, 1, 1));
    
    shader.load("quad_vert.vert", "quad_frag.frag");
}

void ofApp::setupUVTexCoord() {
    quad.addTexCoord(glm::vec2(0, 0));
    quad.addTexCoord(glm::vec2(1, 0));
    quad.addTexCoord(glm::vec2(1, 1));
    quad.addTexCoord(glm::vec2(0, 1));
    
    shader.load("uv_passthrough.vert", "uv_vis.frag");
}

void ofApp::setupScrollUVTexCoord() {
    quad.addTexCoord(glm::vec2(0, 0));
    quad.addTexCoord(glm::vec2(1, 0));
    quad.addTexCoord(glm::vec2(1, 1));
    quad.addTexCoord(glm::vec2(0, 1));
    
    shader.load("scrolling_vert.vert", "uv_vis.frag");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //drawQuad();
    //drawUVTexCoord();
    drawScrollUVTexCoord();
}

void ofApp::drawQuad() {
    shader.begin();
    
    quad.draw();
    shader.end();
}

void ofApp::drawUVTexCoord() {
    shader.begin();
    shader.setUniformTexture("parrotTex", image, 0);
    
    quad.draw();
    shader.end();
}

void ofApp::drawScrollUVTexCoord() {
    shader.begin();
    shader.setUniformTexture("parrotTex", image, 0);
    shader.setUniform1f("time", ofGetElapsedTimef());
    
    quad.draw();
    shader.end();
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
