void eye1() {
	// left eye circle shape
	glColor3f(0.9f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(180 + 30 * cos(theta), 300 + 30 * sin(theta));
	}
	glEnd();

	// right eye circle shape
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(320 + 30 * cos(theta), 300 + 30 * sin(theta));
	}
	glEnd();
}

void mouth() {
	// mouth shape half circle
	glColor3f(0.0f, 0.3f, 0.0f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 180; i++)
	{
		theta = -(i * 3.142 / 180);
		glVertex2f(250 + 90 * cos(theta), 220 + 80 * sin(theta));
	}
	glEnd();
}

void teeth() {
	// upper teeth triangle shape
	glColor3f(1, 1, 1);
	int x = 20;
	for (int i = 0; i < 7; i++) {
		//initial vertex1
		int a = 170;
		//initial vertex2
		int b = 210;
		//space
		int c = 10;
		glBegin(GL_POLYGON);
		glVertex2i(a + (i * x), 220);
		glVertex2i(b + (i * x), 220);
		glVertex2i(((a + (i * x)) + (b + (i * x))) / 2, 190);
		glEnd();
		i++;
	}

	// bottom teeth triangle shape
	glColor3f(1, 1, 1);
	//constant space between each teeth
	int y = 15;
	for (int i = 0; i < 3; i++) {
		//initial vertex1
		int a = 220;
		//initial vertex2
		int b = 250;
		glBegin(GL_POLYGON);
		glVertex2i(a + (i * y), 140);
		glVertex2i(b + (i * y), 140);
		glVertex2i(((a + (i * y)) + (b + (i * y))) / 2, 170);
		glEnd();
		i++;
	}
}

void circle() {
	glColor3f(0.0f, 0.4f, 0.0f);

	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(260 + 15 * cos(theta), 450 + 15 * sin(theta));
	}
	glEnd();

	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(50 + 15 * cos(theta), 260 + 15 * sin(theta));
	}
	glEnd();

	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(450 + 15 * cos(theta), 260 + 15 * sin(theta));
	}
	glEnd();

	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(380 + 15 * cos(theta), 75 + 15 * sin(theta));
	}
	glEnd();

	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(110 + 15 * cos(theta), 75 + 15 * sin(theta));
	}
	glEnd();
}

void rectangle() {
	// surrounding of virus (rectangle)
	glColor3f(0.0f, 0.3f, 0.0f);

	glBegin(GL_QUADS);
	//up
	glVertex2d(250, 400);
	glVertex2d(270, 400);
	glVertex2d(270, 450);
	glVertex2d(250, 450);
	//left
	glVertex2d(50, 250);
	glVertex2d(100, 250);
	glVertex2d(100, 270);
	glVertex2d(50, 270);
	//right
	glVertex2d(400, 250);
	glVertex2d(450, 250);
	glVertex2d(450, 270);
	glVertex2d(400, 270);
	//bottom right
	glVertex2d(320, 120);
	glVertex2d(370, 70);
	glVertex2d(390, 80);
	glVertex2d(340, 130);
	//bottom left
	glVertex2d(170, 120);
	glVertex2d(120, 70);
	glVertex2d(100, 80);
	glVertex2d(150, 140);

	glEnd();
}

void moveCovid() {

	bool flag = true;
	if (move_Covid == 1400) flag = false;
	if (flag == true) move_Covid += 1;

	glutPostRedisplay();
}
void movingCovid()
{
	moveCovid();
	glPushMatrix();
	glTranslatef(move_Covid, 0, 0);
	glColor3f(0.0f, 0.5f, 0.0f);

	// glBegin.  GL_POLYGON constructs a filled polygon.
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142 / 180;
		glVertex2f(250 + 150 * cos(theta), 250 + 150 * sin(theta));
	}
	glEnd();

	mouth();
	eye1();
	teeth();
	rectangle();
	circle();
	glPopMatrix();
	// Flush drawing command buffer to make drawing happen as soon as possible.
	glFlush();

}

void positionCovid()
{
	glPushMatrix();
	glScalef(0.4, 0.4, 1);
	glTranslated(300, 0, 0);
	movingCovid();
	glPopMatrix();
}

void positionCovid1()
{
	glPushMatrix();
	glScalef(0.4, 0.4, 1);
	glTranslated(300, 300, 0);
	movingCovid();
	glPopMatrix();
}

void positionCovid2()
{
	glPushMatrix();
	glScalef(0.4, 0.4, 1);
	glTranslated(300, 600, 0);
	movingCovid();
	glPopMatrix();
}

