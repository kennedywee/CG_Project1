void eye() {
	// left eye circle shape
	glColor3f(0, 0, 0);
	if (move_Covid == 1400)
	{
		glColor3f(0.9f, 0.0f, 0.0f);
	}
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(200 + 10 * cos(theta), 280 + 10 * sin(theta));
	}
	glEnd();

	// right eye circle shape
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(300 + 10 * cos(theta), 280 + 10 * sin(theta));
	}
	glEnd();
}

void hat() {
	// half oval
	glColor3f(0.0f, 0.7f, 2.0f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 180; i++)
	{
		theta = (i * 3.142 / 180);
		glVertex2f(250 + 70 * cos(theta), 320 + 70 * sin(theta));
	}
	glEnd();
}

void mask() {
	glColor3f(0.0f, 0.5f, 2.0f);
	glBegin(GL_QUADS);
	glVertex2d(150, 230);
	glVertex2d(350, 230);
	glVertex2d(300, 160);
	glVertex2d(200, 160);
	glEnd();
}

void hand() {
	// right hand
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(340 + 20 * cos(theta), 200 + 20 * sin(theta));
	}
	glEnd();
}

void vaccine() {
	//plunger 
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2d(355, 225);
	glVertex2d(400, 255);
	glVertex2d(410, 235);
	glVertex2d(370, 205);
	glEnd();

	//needle hub 
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(470 + 25 * cos(theta), 285 + 25 * sin(theta));
	}
	glEnd();

	//plunger flange
	glColor3f(0.0f, 0.7f, 2.0f);
	glBegin(GL_QUADS);
	glVertex2d(345, 230);
	glVertex2d(350, 235);
	glVertex2d(380, 190);
	glVertex2d(375, 185);
	glEnd();

	//syringe barrel

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.7f, 2.0f);
	glVertex2d(385, 260);
	glVertex2d(450, 305);
	glVertex2d(480, 260);
	glVertex2d(415, 215);
	glEnd();

	//needle
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex2f(470, 280);
	glVertex2f(520, 330);
	glEnd();


}

void shield() {

	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex2f(150, 280);
	glVertex2f(100, 250);
	glVertex2f(100, 150);
	glVertex2f(200, 250);
	glEnd();//end the shape we are currently working on
	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
	glVertex2f(100, 150);
	glVertex2f(150, 130);
	glVertex2f(200, 150);
	glVertex2f(200, 250);
	glEnd();//end the shape we are currently working on

	//add black line between shield
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(100, 200);
	glVertex2f(200, 200);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(150, 280);
	glVertex2f(150, 130);
	glEnd();
}


void movingVaccine()
{
	//moveVac();
	glPushMatrix();
	//	glTranslatef(move_Vac, 0, 0);
	glColor3f(0.9f, 0.9f, 0.9f);
	if (move_Covid == 1400)
	{
		glColor3f(0.0f, 0.4f, 0.0f);
	}
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(250 + 100 * cos(theta), 250 + 100 * sin(theta));
	}
	glEnd();
	hat();
	eye();
	mask();
	hand();
	shield();
	//vaccine();
	renderSpacedBitmapString(210, 340, GLUT_BITMAP_HELVETICA_18, "VAC"); // Add text on the scene taktau kecikkan

	glPopMatrix();

	//input text
	// Flush drawing command buffer to make drawing happen as soon as possible.
	glFlush();

}

void positionVaccine()
{
	glPushMatrix();
	glScalef(0.4, 0.4, 1);
	glTranslated(2000, 0, 0);
	movingVaccine();
	glPopMatrix();
}
void positionVaccine1()
{
	glPushMatrix();
	glScalef(0.4, 0.4, 1);
	glTranslated(2000, 300, 0);
	movingVaccine();
	glPopMatrix();
}
void positionVaccine2()
{
	glPushMatrix();
	glScalef(0.4, 0.4, 1);
	glTranslated(2000, 600, 0);
	movingVaccine();
	glPopMatrix();
}
void positionVaccine3()
{
	glPushMatrix();
	glScalef(0.4, 0.4, 1);
	glTranslated(2300, 200, 0);
	movingVaccine();
	glPopMatrix();
}
void positionVaccine4()
{
	glPushMatrix();
	glScalef(0.4, 0.4, 1);
	glTranslated(2300, 400, 0);
	movingVaccine();
	glPopMatrix();
}
