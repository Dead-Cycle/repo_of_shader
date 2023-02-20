#include "ofApp.h"

//以下函数重载自基类ofBaseApp
//--------------------------------------------------------------
//构建ofApp对象时会调用此方法，这是加载资源或创建对象的一个函数位置，将用于渲染应用程序的第一帧
void ofApp::setup(){
    //创建第一个三角形mesh　1.0
    //triangle.addVertex(glm::vec3(0, 0, 0));
    //triangle.addVertex(glm::vec3(1024, 0, 0));
    //triangle.addVertex(glm::vec3(1024, 768, 0));
    //openGl坐标系左上角为原点，Y轴向下为正方向
    
    //创建第一个三角形mesh　2.0　使用归一化坐标
    triangle.addVertex(glm::vec3(-1.0f, 1.0f, 0.0));
    triangle.addVertex(glm::vec3(-1.0f, -1.0f, 0.0));
    triangle.addVertex(glm::vec3(1.0f, -1.0f, 0.0));

//    triangle.addColor(ofFloatColor(1.0, 0.0, 0.0, 1.0));
//    triangle.addColor(ofFloatColor(0.0, 1.0, 0.0, 1.0));
//    triangle.addColor(ofFloatColor(0.0, 0.0, 1.0, 1.0));
    
    shader.load("first_vert_uniform.vert", "first_frag_uniform.frag");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //告诉gpu在这一帧绘制网格
    //triangle.draw();
    
    //使用shader渲染三角形
    shader.begin();
    
    shader.setUniform4f("flagCol", flagCol);
    
    triangle.draw();
    shader.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    //glm::vec3 curPos = triangle.getVertex(2);
    //triangle.setVertex(2, curPos + glm::vec3(0, 20, 0));
    
    flagCol = flagCol + glm::vec4(0.1, -0.1, -0.05, 0);
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
