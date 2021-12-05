#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <gl\GL.h>
#include <gl\GLU.h>
#include <gl\glut.h>
#include <math.h>
#include <mmsystem.h>
#include <iostream>
#include <string.h>
#include <cmath>

// Headers
#include "superglobal.h"
#include "functions.h"
#include "ken.h"
#include "lisa.h"
#include "covid.h"
#include "vaccine.h"

//#include "intro_animation.h"
#include "scene1.h"
#include "scene1_animation.h"
#include "scene2.h"
#include "scene2_animation.h"
#include "scene3.h"
#include "scene3_animation.h"
#include "intro.h"
#include "scene4.h"
#include "scene4_animation.h"
#include "scene5.h"
#include "scene5_animation.h"

void Timer(int value) {
	if (value)glutPostRedisplay();
	glutTimerFunc(300, Timer, value);
}

void scenes() {

	if (scene_counter == 1) {
		intro();
	}

	if (scene_counter == 2) {
		scene1(); scene1_animation();
	}
	if (scene_counter == 3) {
		glLoadIdentity(); scene2(); scene2_animation();
	}
	if (scene_counter == 4) {
		scene3(); scene3_animation();
	}


	else if (scene_counter == 5) {
		scene4(); scene4_animation();
	}


	if (scene_counter == 6) {
		scene5(); scene5_animation();
	}
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0, 0.0, 0.0, 0.0);

	++frame;
	//scene_counter = 5;
	printf("%d\n", frame);

	// Scene Counter
	if (frame >= 0 && frame < 20) scene_counter = 1; //introduction
	else if (frame >= 20 && frame < 1470) scene_counter = 2; //scene1 = going to door
	else if (frame >= 1470 && frame < 3800) scene_counter = 3; //scene2 = meet infected person
	else if (frame >= 3800 && frame < 3840) scene_counter = 4; //scene3 = panic mc
	else if (frame >= 3840 && frame < 4800) scene_counter = 5; //scene4 = virus attack antibody
	else if (frame >= 4800 && frame < 4840) scene_counter = 6; //scene5 = mc died

	scenes();

	glFlush();
	glutSwapBuffers();
}

void idle() {

	if (isRunning) {
		//if (scene_counter == 1) intro_idle();
		if (scene_counter == 2) {
			if (flag_S1) {
				isIdle_S1 = true;
				flag_S1 = false;
			}
		}
		if (scene_counter == 3) scene2_idle();
		if (scene_counter == 4) scene3_idle();
		//if (scene_counter == 5) scene4_idle();
		if (scene_counter == 6) scene5_idle();
	}

	if (isIdle_S1) {
		scene1_idle();
	}

	if (frame > 4840) {
		glLoadIdentity();
		frame = 0;
		
		isRunning = true;

		isScene_1 = true;
		isIdle_S1 = false;
		isAnima_S1 = true;
		flag_S1 = true;

		manlegL_angle = 0;
		manlegR_angle = 0;
		manleg_angle_move = 0;
		manleg_move_x = 0;
		manleg_move_y = 0;
		manleg_count = 0;
		manR_leg_lost = 0;
		manL_leg_lost = 0;

		manarmL_angle = 0;
		manarmR_angle = 0;
		manarm_angle_move = 0;
		manarm_move_x = 0;
		manarm_move_y = 0;
		manarm_count = 0;
		manR_arm_lost = 0;
		manL_arm_lost = 0;

		man_movex = 0;
		man_movey = 0;
		man_count = 0;
		man_slidex = 0;
		man_slidey = 0;
		manR_lost = 0;
		manL_lost = 0;

		heartbeep = 0;
		heartFlag = true;

		kenlegL_angle = 0;
		kenlegR_angle = 0;
		kenleg_angle_move = 0;
		kenleg_move_x = 0;
		kenleg_move_y = 0;
		kenleg_count = 0;
		kenR_leg_lost = 0;
		kenL_leg_lost = 0;

		//ken leg scene 2
		kenlegL_angle = 0;
		kenlegR_angle = 0;
		kenleg_angle_move = 0;
		kenleg_move_x = 0;
		kenleg_move_y = 0;
		kenleg_count = 0;
		kenR_leg_lost = 0;
		kenL_leg_lost = 0;

		//ken arms scene 2
		kenarmL_angle = 0;
		kenarmR_angle = 0;
		kenarm_angle_move = 0; 
		kenarm_move_x = 0;
		kenarm_move_y = 0; 
		kenarm_count = 0;
		kenR_arm_lost = 0; 
		kenL_arm_lost = 0;

		//ken animation scene 2
		ken_movex = 0; 
		ken_movey; 
		ken_count = 0;
		ken_slidex = 0; ken_slidey = 0; 
		kenR_lost = 0; 
		kenL_lost = 0;

		//lisa leg 
		lisalegL_angle = 0; 
		lisalegR_angle = 0;
		lisaleg_angle_move = 0; 
		lisaleg_move_x = 0;
		lisaleg_move_y = 0; 
		lisaleg_count = 0;
		lisaR_leg_lost = 0; 
		lisaL_leg_lost = 0;

		//lisa arms 
		lisaarmL_angle = 0; 
		lisaarmR_angle = 0;
		lisaarm_angle_move = 0; 
		lisaarm_move_x = 0;
		lisaarm_move_y = 0; 
		lisaarm_count = 0;
		lisaR_arm_lost = 0; 
		lisaL_arm_lost = 0;

		//lisa animation 
		lisa_movex = 0; 
		lisa_movey = 0;
		lisa_count = 0; 
		lisa_slidex = 1100;
		lisa_slidey = 0; 
		lisaR_lost = 0; lisaL_lost = 0;

		textDamage_slidey = 0; 
		backForthValue = 0;
		backForth = true;

		move_Covid = 0;

		//exit(0);
	}

}


void initGL() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT);
	glMatrixMode(GL_MODELVIEW);

	glPointSize(10.0);
	glLineWidth(5.0);
}

void Visibility(GLint state) {
	switch (state) {
	case GLUT_VISIBLE:
		Timer(1);
		break;
	case GLUT_NOT_VISIBLE:
		Timer(0);
		break;
	default:
		break;
	}
}

int main(int argc, char** argv) {
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInit(&argc, argv);
	glutInitWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	glutCreateWindow("Danger of Pandemic");
	initGL();

	glutDisplayFunc(display);
	glutTimerFunc(0, Timer, 0);
	glutIdleFunc(idle);
	glutVisibilityFunc(Visibility);

	glutMainLoop();

}