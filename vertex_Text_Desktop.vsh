#version 120

attribute vec2 position;
attribute vec2 texCoords;

uniform mat4 orthographicMatrix;
uniform mat4 transformationMatrix;

varying vec2 texCoords_FS;

void main(void)
{
    gl_Position = transformationMatrix * vec4(position, 0.0f, 1.0);

    texCoords_FS = texCoords;
}
