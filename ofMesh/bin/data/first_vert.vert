#version 410

layout (location = 0) in vec3 pos;
layout (location = 1) in vec4 color;

// in vec3 position;
out vec4 flagCol;

void main() {
    // float x = (position.x * 1024) * 2.0 - 1.0;
    // float y = (position.y * 768) * 2.0 - 1.0;
    // gl_Position = vec4(position.x, position.y, 0.0, 1.0);

    gl_Position = vec4(pos, 1);

    flagCol = color;
}
