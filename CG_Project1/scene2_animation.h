void scene2_ken_idle() {
	if (ken_slidex < 1000) {
		ken_movex = 0; ken_count = 0; kenleg_count = 0; kenarm_count = 0;
	}

	if (ken_movex == 0) ken_slidex += 0.5;//4

	if (ken_count == 0) {
		kenR_lost = 1; kenL_lost = 0;
	}
	else {
		kenR_lost = 0; kenL_lost = 0;
	}
	glutPostRedisplay();
}


void scene2_kenleftleg_idle() {

	if (kenlegL_angle > 30)  kenleg_angle_move = 0;
	if (kenleg_angle_move == 0)  kenlegL_angle -= 0.8;
	if (kenlegL_angle < -30)  kenleg_angle_move = 1;
	if (kenleg_angle_move == 1)  kenlegL_angle += 0.8;

	if (kenleg_count == 0) {
		kenR_leg_lost = 1; kenL_leg_lost = 0;
	}
	else {
		kenR_leg_lost = 0; kenL_leg_lost = 0;
	}
	glutPostRedisplay();
}

void scene2_kenrightleg_idle() {

	if (kenlegR_angle > 30)  kenleg_angle_move = 1;
	if (kenleg_angle_move == 1)  kenlegR_angle -= 0.8;
	if (kenlegR_angle < -30)  kenleg_angle_move = 0;
	if (kenleg_angle_move == 0)  kenlegR_angle += 0.8;

	if (kenleg_count == 0) {
		kenR_leg_lost = 1; kenL_leg_lost = 0;
	}
	else {
		kenR_leg_lost = 0; kenL_leg_lost = 0;
	}
	glutPostRedisplay();
}

void scene2_kenrightarm_idle() {
	if (kenarmR_angle > 30) kenarm_angle_move = 1;
	if (kenarm_angle_move == 0) kenarmR_angle += 0.8;
	if (kenarmR_angle < -30) kenarm_angle_move = 0;
	if (kenarm_angle_move == 1) kenarmR_angle -= 0.8;

	if (kenarm_count == 0) { kenR_arm_lost = 1; kenL_arm_lost = 0; }
	else { kenR_arm_lost = 0; kenL_arm_lost = 0; } glutPostRedisplay();
}

void scene2_kenleftarm_idle() {
	if (kenarmL_angle > 30) kenarm_angle_move = 0;
	if (kenarm_angle_move == 0) kenarmL_angle -= 0.8;
	if (kenarmL_angle < -30) kenarm_angle_move = 1;
	if (kenarm_angle_move == 1) kenarmL_angle += 0.8;

	if (kenarm_count == 0) { kenR_arm_lost = 1; kenL_arm_lost = 0; }
	else { kenR_arm_lost = 0; kenL_arm_lost = 0; } glutPostRedisplay();
}

void scene2_ken_animation() {
	//moving to the right
	glPushMatrix();
	if (ken_count == 0)
		glTranslatef(ken_slidex, ken_slidey, 0);
	glTranslatef(-40, 155, 0);
	glScalef(1, 1, 1);
	glScalef(kenR_lost, kenR_lost, 0);
	ken_body();
	ken_head();
	glPopMatrix();
}

void scene2_kenLleg_animation() {
	glPushMatrix();
	if (kenleg_count == 0) {
		glTranslatef(ken_slidex - 40, ken_slidey + 150, 0);
		glTranslatef(150, 180, 0);
		glScalef(1, 1, 1);
		glRotatef(kenlegL_angle, 0, 0, 1);
		glTranslatef(-150, -180, 0);
	}

	//glScalef(kenR_leg_lost, kenR_leg_lost, 0);
	ken_leftLeg();
	glPopMatrix();
}

void scene2_kenRleg_animation() {
	glPushMatrix();
	if (kenleg_count == 0) {
		glTranslatef(ken_slidex - 40, ken_slidey + 150, 0);
		glTranslatef(150, 180, 0);
		glScalef(1, 1, 1);
		glRotatef(kenlegR_angle, 0, 0, 1);
		glTranslatef(-150, -180, 0);
	}
	glScalef(kenR_leg_lost, kenR_leg_lost, 0);
	ken_rightLeg();
	glPopMatrix();
}

void scene2_kenRarm_animation() {
	glPushMatrix();
	if (kenarm_count == 0) {
		glTranslatef(ken_slidex - 40, ken_slidey + 150, 0);
		glTranslatef(150, 270, 0);
		glScalef(1, 1, 1);
		glRotatef(kenarmR_angle, 0, 0, 1);
		glTranslatef(-150, -270, 0);
	}
	glScalef(kenR_arm_lost, kenR_arm_lost, 0);
	ken_rightArm();
	glPopMatrix();
}

void scene2_kenLarm_animation() {
	glPushMatrix();
	if (kenarm_count == 0) {
		glTranslatef(ken_slidex - 40, ken_slidey + 150, 0);
		glTranslatef(150, 270, 0);
		glScalef(1, 1, 1);
		glRotatef(kenarmL_angle, 0, 0, 1);
		glTranslatef(-150, -270, 0);
	}
	glScalef(kenR_arm_lost, kenR_arm_lost, 0);
	ken_leftArm();
	glPopMatrix();
}

void scene2_lisa_idle() {
	if (lisa_slidex > 0) {
		lisa_movex = 1; lisa_count = 0; lisaleg_count = 0; lisaarm_count = 0;
	}

	if (lisa_movex == 1) lisa_slidex -= 0.5;//4

	if (lisa_count == 0) {
		lisaR_lost = 1; lisaL_lost = 0;
	}
	else {
		lisaR_lost = 0; lisaL_lost = 0;
	}
	glutPostRedisplay();
}


void scene2_lisaleftleg_idle() {

	if (lisalegL_angle > 30)  lisaleg_angle_move = 0;
	if (lisaleg_angle_move == 0)  lisalegL_angle -= 0.8;
	if (lisalegL_angle < -30)  lisaleg_angle_move = 1;
	if (lisaleg_angle_move == 1)  lisalegL_angle += 0.8;

	if (lisaleg_count == 0) {
		lisaR_leg_lost = 1; lisaL_leg_lost = 0;
	}
	else {
		lisaR_leg_lost = 0; lisaL_leg_lost = 0;
	}
	glutPostRedisplay();
}

void scene2_lisarightleg_idle() {

	if (lisalegR_angle > 30)  lisaleg_angle_move = 1;
	if (lisaleg_angle_move == 1)  lisalegR_angle -= 0.8;
	if (lisalegR_angle < -30)  lisaleg_angle_move = 0;
	if (lisaleg_angle_move == 0)  lisalegR_angle += 0.8;

	if (lisaleg_count == 0) {
		lisaR_leg_lost = 1; lisaL_leg_lost = 0;
	}
	else {
		lisaR_leg_lost = 0; lisaL_leg_lost = 0;
	}
	glutPostRedisplay();
}

void scene2_lisarightarm_idle() {
	if (lisaarmR_angle > 30) lisaarm_angle_move = 1;
	if (lisaarm_angle_move == 0) lisaarmR_angle += 0.8;
	if (lisaarmR_angle < -30) lisaarm_angle_move = 0;
	if (lisaarm_angle_move == 1) lisaarmR_angle -= 0.8;

	if (lisaarm_count == 0) { lisaR_arm_lost = 1; lisaL_arm_lost = 0; }
	else { lisaR_arm_lost = 0; lisaL_arm_lost = 0; } glutPostRedisplay();
}

void scene2_lisaleftarm_idle() {
	if (lisaarmL_angle > 30) lisaarm_angle_move = 0;
	if (lisaarm_angle_move == 0) lisaarmL_angle -= 0.8;
	if (lisaarmL_angle < -30) lisaarm_angle_move = 1;
	if (lisaarm_angle_move == 1) lisaarmL_angle += 0.8;

	if (lisaarm_count == 0) { lisaR_arm_lost = 1; lisaL_arm_lost = 0; }
	else { lisaR_arm_lost = 0; lisaL_arm_lost = 0; } glutPostRedisplay();
}

void scene2_lisa_animation() {
	//moving to the right
	glPushMatrix();
	if (lisa_count == 0) glTranslatef(lisa_slidex, lisa_slidey, 0);
	glTranslatef(-40, 155, 0);
	glScalef(1, 1, 1);
	glScalef(lisaR_lost, lisaR_lost, 0);
	lisa_head();
	lisa_body();
	glPopMatrix();
}

void scene2_lisaLleg_animation() {
	glPushMatrix();
	if (lisaleg_count == 0) {
		glTranslatef(lisa_slidex - 40, lisa_slidey + 150, 0);
		glTranslatef(150, 180, 0);
		glScalef(1, 1, 1);
		glRotatef(lisalegL_angle, 0, 0, 1);
		glTranslatef(-150, -180, 0);
	}

	glScalef(lisaR_leg_lost, lisaR_leg_lost, 0);
	lisa_leftLeg();
	glPopMatrix();
}

void scene2_lisaRleg_animation() {
	glPushMatrix();
	if (lisaleg_count == 0) {
		glTranslatef(lisa_slidex - 40, lisa_slidey + 150, 0);
		glTranslatef(150, 180, 0);
		glScalef(1, 1, 1);
		glRotatef(lisalegR_angle, 0, 0, 1);
		glTranslatef(-150, -180, 0);
	}
	glScalef(lisaR_leg_lost, lisaR_leg_lost, 0);
	lisa_rightLeg();
	glPopMatrix();
}

void scene2_lisaRarm_animation() {
	glPushMatrix();
	if (lisaarm_count == 0) {
		glTranslatef(lisa_slidex - 40, lisa_slidey + 150, 0);
		glTranslatef(150, 270, 0);
		glScalef(1, 1, 1);
		glRotatef(lisaarmR_angle, 0, 0, 1);
		glTranslatef(-150, -270, 0);
	}
	glScalef(lisaR_arm_lost, lisaR_arm_lost, 0);
	lisa_rightArm();
	glPopMatrix();
}

void scene2_lisaLarm_animation() {
	glPushMatrix();
	if (lisaarm_count == 0) {
		glTranslatef(lisa_slidex - 40, lisa_slidey + 150, 0);
		glTranslatef(150, 270, 0);
		glScalef(1, 1, 1);
		glRotatef(lisaarmL_angle, 0, 0, 1);
		glTranslatef(-150, -270, 0);
	}
	glScalef(lisaR_arm_lost, lisaR_arm_lost, 0);
	lisa_leftArm();
	glPopMatrix();
}

void scene2_heart_idle() {
	if (heartFlag) {
		heartbeep += 1;
		if (heartbeep == 200) heartFlag = false;
	}

	else {
		heartbeep -= 1;
		if (heartbeep == 100) heartFlag = true;
	}
}

void scene2_idle() {
	scene2_heart_idle();

	scene2_ken_idle();
	scene2_kenleftarm_idle();
	scene2_kenrightarm_idle();
	scene2_kenrightleg_idle();
	scene2_kenleftleg_idle();

	scene2_lisa_idle();
	scene2_lisaleftarm_idle();
	scene2_lisarightarm_idle();
	scene2_lisarightleg_idle();
	scene2_lisaleftleg_idle();
}

void scene2_animation() {

	heart(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, heartbeep);

	glPushMatrix();
	glTranslatef(0, -150, 0);

	

	scene2_kenLarm_animation();
	scene2_kenLleg_animation();
	scene2_kenRleg_animation();
	scene2_ken_animation();
	scene2_kenRarm_animation();

	scene2_lisaLarm_animation();
	scene2_lisaLleg_animation();
	scene2_lisaRleg_animation();
	scene2_lisa_animation();
	scene2_lisaRarm_animation();

	glPopMatrix();

	if (frame > infected_frame) {
		glColor3f(0, 0, 0);
		renderSpacedBitmapString(
			SCREEN_WIDTH / 2 - 100,
			SCREEN_HEIGHT / 2 + 80,
			GLUT_BITMAP_TIMES_ROMAN_24,
			"CLOSE CONTACT!");
	}


}