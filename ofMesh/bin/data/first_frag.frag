#version 410

in vec4 flagCol;
out vec4 outColor;

void main() {
    // outColor = vec4(1.0, 0.0, 0.0, 1.0);
    outColor = flagCol;
}