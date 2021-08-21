#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>

#pragma once
class Torus {
public:
	Torus();
	void dibujarTorus(float x, float y, float z);
	~Torus();
};