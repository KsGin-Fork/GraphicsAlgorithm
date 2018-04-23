#version 330 core

uniform sampler2D samp;

in vec2 tex;
out vec4 FragColor;

void main(){
	FragColor = texture(samp , tex);
}