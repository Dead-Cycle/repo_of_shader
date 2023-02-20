#version 410

layout (location = 0) in vec3 pos;
layout (location = 1) in vec4 color;

out vec4 fragCol;

void main() {
    fragCol = color;
    
    gl_Position = vec4(pos, 1);
}