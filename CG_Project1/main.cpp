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

//#include "intro.h"
//#include "intro_animation.h"
#include "scene1.h"
#include "scene1_animation.h"
#include "scene2.h"
#include "scene2_animation.h"
#include "scene3.h"
#include "scene3_animation.h"
//#include "scene4.h"
//#include "scene4_animation.h"
//#include "scene5.h"
//#include "scene5_animation.h"





void Timer(int value) {
    if (value)glutPostRedisplay();
    glutTimerFunc(300, Timer, value);
}


void scenes() {
    /*
    if (scene_counter == 1) {
        scene1(); scene1_animation();
    }
    */
    if (scene_counter == 2) {
        scene1(); scene1_animation();
    } 
    if (scene_counter == 3) {
        glLoadIdentity(); scene2(); scene2_animation();
    }
    if (scene_counter == 4) {
        scene3(); scene3_animation();
    }

    /*
    else if (scene_counter == 5) {
        scene4(); scene4_animation();
    }
    else if (scene_counter == 6) {
        scene5(); scene5_animation();
    }
    */
 
    
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0, 0.0, 0.0, 0.0);

    ++frame;
    printf("%d\n", frame);

    // Scene Counter
    if (frame >= 100 && frame < 200) scene_counter = 1; //introduction
    else if (frame >= 200 && frame < 1470) scene_counter = 2; //scene1 = going to door
    else if (frame >= 1470 && frame < 3800) scene_counter = 3; //scene2 = meet infected person
    else if (frame >= 3800 && frame < 5000) scene_counter = 4; //scene3 = panic mc
    else if (frame >= 5000 && frame < 6000) scene_counter = 5; //scene4 = virus attack antibody
    else if (frame >= 6000 && frame < 7000) scene_counter = 6; //scene5 = virus attack antibody
    
    scenes();

    glFlush();
    glutSwapBuffers();
}

void idle() {
    if (isIdle_S1) {
        scene1_idle();
    }

    if (isRunning) {
        //if (scene_counter == 1) intro_idle();
        //if (scene_counter == 2) scene1_idle();
        if (scene_counter == 3) scene2_idle();
        if (scene_counter == 4) scene3_idle();
        //if (scene_counter == 5) scene4_idle();
        //if (scene_counter == 6) scene5_idle();
    }

    if (frame > 10000) {
        frame = 0;
        exit(0);
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