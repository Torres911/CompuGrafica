#include "Cuerpo.h"

Cuerpo::Cuerpo() {}

void Cuerpo::dibujarCuerpo() {
	glPushMatrix();
		glTranslatef(-2.0, 0.0f, 0.0f);
		glScalef(5.0, 2.0, 0.0);
		glutSolidCube(1.0);
	glPopMatrix();
}

Cuerpo::~Cuerpo() {}