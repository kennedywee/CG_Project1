void ken_eyes_strip1() {
	glPushMatrix();
	glColor3f(0, 0, 0); //black
	glRotatef(20, 0, 0, 1);
	rectangle(150, SCREEN_HEIGHT / 2 - 2, 30, 5);

	glPopMatrix();
}

void ken_eyes_strip2() {
	glPushMatrix();
	glColor3f(0, 0, 0); //black
	glRotatef(-20, 0, 0, 1);
	rectangle(150, SCREEN_HEIGHT / 2 - 2, 30, 5);

	glPopMatrix();
}

void ken_eyes_normal() {
	//EYE SHAPE
	glColor3f(1, 1, 1); //white
	circle(155, SCREEN_HEIGHT / 2, 15);
	circle(170, SCREEN_HEIGHT / 2, 15);

	//EYE PUPIL
	glColor3f(0, 0, 0); //black
	rectangle(160, SCREEN_HEIGHT / 2 - 2, 7, 7);
	rectangle(175, SCREEN_HEIGHT / 2 - 2, 7, 7);
}

void ken_eyes_dead() {
	//EYE SHAPE
	glColor3f(1, 1, 1); //white
	circle(155, SCREEN_HEIGHT / 2, 15);
	circle(170, SCREEN_HEIGHT / 2, 15);

	//EYE PUPIL
	glPushMatrix();
	glTranslatef(132, -35 , 1);
	ken_eyes_strip1();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-115, 78, 1);
	ken_eyes_strip2();
	glPopMatrix();	
}

// head
void ken_head() {
	//NECK
	if (frame > infected_frame) {
		glColor3f(0.16, 0.71, 0.45); //skin color green
	}
	else {
		glColor3f(1.0, 0.89, 0.70); //skin color
	}
	rectangle(140, SCREEN_HEIGHT / 2 - 55, 30, 40);

	//HAIR
	glColor3f(0.13, 0.12, 0.12); //hair color
	circle(140, SCREEN_HEIGHT / 2 + 10, 45);

	//FACE SHAPE
	if (frame > infected_frame) {
		glColor3f(0.16, 0.71, 0.45); //skin color green
	}
	else {
		glColor3f(1.0, 0.89, 0.70); //skin color
	}
	circle(150, SCREEN_HEIGHT / 2, 40);

	//EYES
	ken_eyes_normal();

	//MOUTH
	halfCircleInverse(160, SCREEN_HEIGHT / 2 - 20, 12);
}

void ken_head_infected() {
	//NECK
	glColor3f(0.16, 0.71, 0.45); //skin color green
	rectangle(140, SCREEN_HEIGHT / 2 - 55, 30, 40);

	//HAIR
	glColor3f(0.13, 0.12, 0.12); //hair color
	circle(140, SCREEN_HEIGHT / 2 + 10, 45);

	//FACE SHAPE
	glColor3f(0.16, 0.71, 0.45); //skin color green
	circle(150, SCREEN_HEIGHT / 2, 40);

	//EYES
	ken_eyes_normal();

	//MOUTH
	halfCircle(160, SCREEN_HEIGHT / 2 - 32, 12);
}

void ken_head_dead() {
	//NECK
	glColor3f(0.16, 0.71, 0.45); //skin color green
	rectangle(140, SCREEN_HEIGHT / 2 - 55, 30, 40);

	//HAIR
	glColor3f(0.13, 0.12, 0.12); //hair color
	circle(140, SCREEN_HEIGHT / 2 + 10, 45);

	//FACE SHAPE
	glColor3f(0.16, 0.71, 0.45); //skin color green
	circle(150, SCREEN_HEIGHT / 2, 40);

	//EYES
	ken_eyes_dead();

	//MOUTH
	halfCircle(160, SCREEN_HEIGHT / 2 - 32, 12);
}

void ken_leftArm() {
	//SHOULDER
	glColor3f(0.11, 0.60, 0.77); //dark blue
	circle(145 + 20, SCREEN_HEIGHT / 2.5, 12.5);

	//ARM
	if (frame > infected_frame) {
		glColor3f(0.16, 0.71, 0.45); //skin color green
	}
	else {
		glColor3f(1.0, 0.89, 0.70); //skin color
	}
	rectangle(145 - 12.5 + 20, SCREEN_HEIGHT / 2.5 - 60, 25, 60);

	//HAND
	circle(145 + 20, SCREEN_HEIGHT / 2.5 - 60, 12.5);
}

void ken_rightArm() {
	//SHOULDER
	glColor3f(0.15, 0.66, 1.00); //light blue
	circle(145, SCREEN_HEIGHT / 2.5, 12.5);

	//ARM
	if (frame > infected_frame) {
		glColor3f(0.16, 0.71, 0.45); //skin color green
	}
	else {
		glColor3f(1.0, 0.89, 0.70); //skin color
	}
	rectangle(145 - 12.5, SCREEN_HEIGHT / 2.5 - 60, 25, 60);

	//HAND
	circle(145, SCREEN_HEIGHT / 2.5 - 60, 12.5);
}

void ken_leftLeg() {
	//JOINT
	glColor3f(0.4, 0.17, 0.56); //light purple
	circle(145 + 20, SCREEN_HEIGHT / 4.3, 12.5);

	//SHOE
	glColor3f(0.61, 0.12, 0.38); //light maroon
	circle(145 + 20, SCREEN_HEIGHT / 6 - 60, 12.5);

	//LEG
	glColor3f(0.4, 0.17, 0.56); //light purple
	rectangle(145 - 12.5 + 20, SCREEN_HEIGHT / 4.3 - 108, 25, 108);
}

void ken_rightLeg() {
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
}



void ken_body() {
	//WAIST
	glColor3f(0.32, 0.13, 0.47); //dark purple
	circle(125 + 30, SCREEN_HEIGHT / 4, 30);

	//BODY
	glColor3f(0.15, 0.66, 1.00); //light blue
	rectangle(125, SCREEN_HEIGHT / 4, 60, 130);
}



void ken() {
	ken_head();
	ken_leftArm();
	ken_leftLeg();
	ken_body();
	ken_rightArm();
	ken_rightLeg();
}

void ken_infected() {
	ken_head_infected();
	ken_leftArm();
	ken_leftLeg();
	ken_body();
	ken_rightArm();
	ken_rightLeg();
}

void ken_dead() {
	ken_head_dead();
	ken_leftArm();
	ken_leftLeg();
	ken_body();
	ken_rightArm();
	ken_rightLeg();
}

void ken_moveCentre() {
	glPushMatrix();
	glTranslated(300, 0, 0);
	ken();
	glPopMatrix();
}