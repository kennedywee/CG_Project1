
// head
void lisa_head() {
	glPushMatrix();
	glScalef(-1, 1, 1);
	glTranslated(-300, 0, 0);

	//HAIR
	glColor3f(0.13, 0.12, 0.12); //hair color
	rectangle(145 - 45, SCREEN_HEIGHT / 2 + 10 - 100, 90, 100);
	circle(145, SCREEN_HEIGHT / 2 + 10, 45);

	//NECK
	glColor3f(0.16, 0.71, 0.45); //skin color green
	rectangle(140, SCREEN_HEIGHT / 2 - 55, 30, 40);

	//FACE SHAPE
	glColor3f(0.16, 0.71, 0.45); //skin color green
	circle(150, SCREEN_HEIGHT / 2, 40);

	//EYE SHAPE
	glColor3f(1, 1, 1); //white
	circle(155, SCREEN_HEIGHT / 2, 15);
	circle(170, SCREEN_HEIGHT / 2, 15);

	//EYE PUPIL
	glColor3f(0, 0, 0); //black
	rectangle(160, SCREEN_HEIGHT / 2 - 2, 7, 7);
	rectangle(175, SCREEN_HEIGHT / 2 - 2, 7, 7);

	//MOUTH
	halfCircleInverse(160, SCREEN_HEIGHT / 2 - 20, 12);

	glPopMatrix();
}

void lisa_leftArm() {
	glPushMatrix();
	glScalef(-1, 1, 1);
	glTranslated(-300, 0, 0);

	//SHOULDER
	glColor3f(0.11, 0.60, 0.77); //dark blue
	circle(145 + 20, SCREEN_HEIGHT / 2.5, 12.5);

	//ARM
	glColor3f(0.16, 0.71, 0.45); //skin color green
	rectangle(145 - 12.5 + 20, SCREEN_HEIGHT / 2.5 - 60, 25, 60);

	//HAND
	glColor3f(0.16, 0.71, 0.45); //skin color green
	circle(145 + 20, SCREEN_HEIGHT / 2.5 - 60, 12.5);

	glPopMatrix();
}

void lisa_rightArm() {
	glPushMatrix();
	glScalef(-1, 1, 1);
	glTranslated(-300, 0, 0);

	//SHOULDER
	glColor3f(0.74, 0.11, 0.17); //red
	circle(145, SCREEN_HEIGHT / 2.5, 12.5);

	//ARM
	glColor3f(0.16, 0.71, 0.45); //skin color green
	rectangle(145 - 12.5, SCREEN_HEIGHT / 2.5 - 60, 25, 60);

	//HAND
	glColor3f(0.16, 0.71, 0.45); //skin color green
	circle(145, SCREEN_HEIGHT / 2.5 - 60, 12.5);

	glPopMatrix();
}

void lisa_leftLeg() {
	glPushMatrix();
	glScalef(-1, 1, 1);
	glTranslated(-300, 0, 0);

	//JOINT
	glColor3f(0.4, 0.17, 0.56); //light purple
	circle(145 + 20, SCREEN_HEIGHT / 4.3, 12.5);

	//SHOE
	glColor3f(0.61, 0.12, 0.38); //light maroon
	circle(145 + 20, SCREEN_HEIGHT / 6 - 60, 12.5);

	//LEG
	glColor3f(0.4, 0.17, 0.56); //light purple
	rectangle(145 - 12.5 + 20, SCREEN_HEIGHT / 4.3 - 108, 25, 108);

	glPopMatrix();
}

void lisa_rightLeg() {
	glPushMatrix();
	glScalef(-1, 1, 1);
	glTranslated(-300, 0, 0);

	//JOINT
	glColor3f(0.32, 0.13, 0.47); //dark purple
	//glColor3f(0, 0, 0); //dark purple
	circle(145, SCREEN_HEIGHT / 4.3, 12.5);

	//SHOE
	glColor3f(0.53, 0.09, 0.34); //dark maroon
	circle(145, SCREEN_HEIGHT / 6 - 60, 12.5);

	//LEG
	glColor3f(0.32, 0.13, 0.47); //dark purple
	rectangle(145 - 12.5, SCREEN_HEIGHT / 4.3 - 108, 25, 108);

	glPopMatrix();
}



void lisa_body() {
	glPushMatrix();
	glScalef(-1, 1, 1);
	glTranslated(-300, 0, 0);

	//WAIST
	glColor3f(0.32, 0.13, 0.47); //dark purple
	circle(125 + 30, SCREEN_HEIGHT / 4, 30);

	//BODY
	glColor3f(0.74, 0.11, 0.17); //red
	rectangle(125, SCREEN_HEIGHT / 4, 60, 130);

	glPopMatrix();
}



void lisa() {

	lisa_head();
	lisa_leftArm();
	lisa_leftLeg();
	lisa_body();
	lisa_rightArm();
	lisa_rightLeg();
}

void reflected_lisa() {
	glPushMatrix();
	glScalef(-1, 1, 1);
	glTranslated(-300, 0, 0);
	lisa();
	glPopMatrix();
}