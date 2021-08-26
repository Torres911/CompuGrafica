#include "Cola.h"

Cola::Cola() {}

void Cola::dibujarCola() {
    
    glTranslatef(-0.5, 0.0, 0.0);
    glRotatef((GLfloat)20, 0.0, 0.0, 1.0);
    glTranslatef(0.5, 0.0, 0.0);
    glPushMatrix();
        glScalef(1.0, 0.4, 0.5);
        glutSolidCube(1.0);
    glPopMatrix();
    
    int rotacion = 10;
    for (int i = 0; i < 6; ++i) {
        glRotatef((GLfloat)rotacion, 0.0, 0.0, 1.0);
        glTranslatef(0.5, 0.0, 0.0);
        glPushMatrix();
        glScalef(1.0, 0.4, 0.5);
        glutSolidCube(1.0);
        glPopMatrix();
        rotacion += 5;
    }
}

void Cola::dibujarCola2() {

    glTranslatef(-0.5, 0.0, 0.0);
    glRotatef((GLfloat)20, 0.0, 0.0, 1.0);
    glTranslatef(0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.0, 0.4, 0.5);
    glutSolidCube(1.0);
    glPopMatrix();

    int rotacion = 20;
    glTranslatef(-1.0, -2.0, 0.0);
    for (int i = 0; i < 5; ++i) {
        glRotatef((GLfloat)rotacion, 0.0, 0.0, 1.0);
        glTranslatef(0.5, 0.0, 0.0);
        glPushMatrix();
        glScalef(1.0, 0.4, 0.5);
        glutSolidCube(1.0);
        glPopMatrix();
        rotacion += 5;
    }
}


Cola::~Cola() {}