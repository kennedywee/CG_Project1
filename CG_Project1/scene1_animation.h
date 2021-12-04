void scene1_man_idle() {
	if (man_slidex < 1000) {
		man_movex = 0; man_count = 0; manleg_count = 0; manarm_count = 0;
	}

	if (man_movex == 0) man_slidex += 0.5;//4

	if (man_count == 0) {
		manR_lost = 1; manL_lost = 0;
	}
	else {
		manR_lost = 0; manL_lost = 0;
	}
	glutPostRedisplay();
}


void scene1_manleftleg_idle() {

	if (manlegL_angle > 30)  manleg_angle_move = 0;
	if (manleg_angle_move == 0)  manlegL_angle -= 0.8;
	if (manlegL_angle < -30)  manleg_angle_move = 1;
	if (manleg_angle_move == 1)  manlegL_angle += 0.8;

	if (manleg_count == 0) {
		manR_leg_lost = 1; manL_leg_lost = 0;
	}
	else {
		manR_leg_lost = 0; manL_leg_lost = 0;
	}
	glutPostRedisplay();
}

void scene1_manrightleg_idle() {

	if (manlegR_angle > 30)  manleg_angle_move = 1;
	if (manleg_angle_move == 1)  manlegR_angle -= 0.8;
	if (manlegR_angle < -30)  manleg_angle_move = 0;
	if (manleg_angle_move == 0)  manlegR_angle += 0.8;

	if (manleg_count == 0) {
		manR_leg_lost = 1; manL_leg_lost = 0;
	}
	else {
		manR_leg_lost = 0; manL_leg_lost = 0;
	}
	glutPostRedisplay();
}

void scene1_manrightarm_idle() {
	if (manarmR_angle > 30) manarm_angle_move = 1;
	if (manarm_angle_move == 0) manarmR_angle += 0.8;
	if (manarmR_angle < -30) manarm_angle_move = 0;
	if (manarm_angle_move == 1) manarmR_angle -= 0.8;

	if (manarm_count == 0) { manR_arm_lost = 1; manL_arm_lost = 0; }
	else { manR_arm_lost = 0; manL_arm_lost = 0; } glutPostRedisplay();
}

void scene1_manleftarm_idle() {
	if (manarmL_angle > 30) manarm_angle_move = 0;
	if (manarm_angle_move == 0) manarmL_angle -= 0.8;
	if (manarmL_angle < -30) manarm_angle_move = 1;
	if (manarm_angle_move == 1) manarmL_angle += 0.8;

	if (manarm_count == 0) { manR_arm_lost = 1; manL_arm_lost = 0; }
	else { manR_arm_lost = 0; manL_arm_lost = 0; } glutPostRedisplay();
}

void scene1_man_animation() {
	//moving to the right
	glPushMatrix();
	if (man_count == 0)
		glTranslatef(man_slidex, man_slidey, 0);
	glTranslatef(-40, 155, 0);
	glScalef(0.4, 0.4, 1);
	glScalef(manR_lost, manR_lost, 0);
	ken_body();
	ken_head();
	glPopMatrix();
}

void scene1_manLleg_animation() {
	glPushMatrix();
	if (manleg_count == 0) {
		glTranslatef(man_slidex - 130, man_slidey + 45, 0);
		glTranslatef(150, 180, 0);
		glScalef(0.4, 0.4, 1);
		glRotatef(manlegL_angle, 0, 0, 1);
		glTranslatef(-150, -180, 0);
	}

	glScalef(manR_leg_lost, manR_leg_lost, 0);
	ken_leftLeg();
	glPopMatrix();
}

void scene1_manRleg_animation() {
	glPushMatrix();
	if (manleg_count == 0) {
		glTranslatef(man_slidex - 130, man_slidey + 45, 0);
		glTranslatef(150, 180, 0);
		glScalef(0.4, 0.4, 1);
		glRotatef(manlegR_angle, 0, 0, 1);
		glTranslatef(-150, -180, 0);
	}
	glScalef(manR_leg_lost, manR_leg_lost, 0);
	ken_rightLeg();
	glPopMatrix();
}

void scene1_manRarm_animation() {
	glPushMatrix();
	if (manarm_count == 0) {
		glTranslatef(man_slidex - 130, man_slidey - 10, 0);
		glTranslatef(150, 270, 0);
		glScalef(0.4, 0.4, 1);
		glRotatef(manarmR_angle, 0, 0, 1);
		glTranslatef(-150, -270, 0);
	}
	glScalef(manR_arm_lost, manR_arm_lost, 0);
	ken_rightArm();
	glPopMatrix();
}

void scene1_manLarm_animation() {
	glPushMatrix();
	if (manarm_count == 0) {
		glTranslatef(man_slidex - 130, man_slidey - 10, 0);
		glTranslatef(150, 270, 0);
		glScalef(0.4, 0.4, 1);
		glRotatef(manarmL_angle, 0, 0, 1);
		glTranslatef(-150, -270, 0);
	}
	glScalef(manR_arm_lost, manR_arm_lost, 0);
	ken_leftArm();
	glPopMatrix();
}


void scene1_idle() {
	scene1_man_idle();
	scene1_manleftarm_idle();
	scene1_manrightarm_idle();
	scene1_manrightleg_idle();
	scene1_manleftleg_idle();
}

void scene1_animation() {

	if (frame >= 500 && frame < 530) {
		renderSpacedBitmapString(150, 450, GLUT_BITMAP_HELVETICA_18, "WHICH DOOR I NEED TO CHOOSE??"); // Add text on the scene
		isIdle_S1 = false;
	}
	else if (frame >= 530 && frame < 1450) {
		renderSpacedBitmapString(150, 450, GLUT_BITMAP_HELVETICA_18, "MAY BE RED DOOR SUITABLE FOR ME!"); // Add text on the scene
		isIdle_S1 = true;
	}
	else if (frame >= 1450 && frame < 1470) {
		isIdle_S1 = false;
		door1();
		glTranslatef(-70, -35, 0);
		glScalef(1.1f, 1.1f, 1.1f);
	}

	scene1_manLarm_animation();
	scene1_manLleg_animation();
	scene1_manRleg_animation();
	scene1_man_animation();
	scene1_manRarm_animation();

}

void display_s1() {
	glClear(GL_COLOR_BUFFER_BIT);

	//Display scene 1
	if (isScene_1) {
		scene1();
	}

	//Make moving functions
	if (isIdle_S1) {
		scene1_idle();
	}

	//Make man animation functions
	if (isAnima_S1) {
		scene1_animation();
	}


	if (frame >= 500 && frame < 530) {
		renderSpacedBitmapString(150, 450, GLUT_BITMAP_HELVETICA_18, "WHICH DOOR I NEED TO CHOOSE??"); // Add text on the scene
		isIdle_S1 = false;
	}
	else if (frame >= 530 && frame < 1450) {
		renderSpacedBitmapString(150, 450, GLUT_BITMAP_HELVETICA_18, "MAY BE RED DOOR SUITABLE FOR ME!"); // Add text on the scene
		isIdle_S1 = true;
	}
	else if (frame >= 1450 && frame < 1470) {
		isIdle_S1 = false;
		door1();
		glTranslatef(-70, -35, 0);
		glScalef(1.1f, 1.1f, 1.1f);
	}
	else if (frame >= 1470) {
		isIdle_S1 = false;
		isScene_1 = false;
		isAnima_S1 = false;
	}

	glFlush();
	glutSwapBuffers();
}