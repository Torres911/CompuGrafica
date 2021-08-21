#include "Torus.h"

Torus::Torus() {}

void Tetera::dibujarTorus(float x, float y, float z) {
    //Torus Exterior
    glPushMatrix();
    glTranslatef(x, y, z);
    glutSolidTorus(0.2, 1.0, 20.0, 8.0);
    glPopMatrix();

    //Torus Interior
    glPushMatrix();
    glTranslatef(x, y, z);
    glutSolidTorus(0.1, 0.5, 20.0, 8.0);
    glPopMatrix();
}

Torus::~Torus() {}