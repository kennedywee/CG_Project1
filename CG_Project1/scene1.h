void scene1_floor() {
	glColor3f(0.37, 0.22, 0.07); // dark brown
	rectangle(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT / 3);
}

void scene1_wall() {
	glColor3f(0.76, 0.60, 0.42); //light brown
	rectangle(0, SCREEN_HEIGHT / 3, SCREEN_WIDTH, SCREEN_HEIGHT);
}

void door1() {
	glColor3f(0.0, 0.0, 0.0); // black
	rectangle(SCREEN_WIDTH / 2 - 60, SCREEN_HEIGHT / 3 - 60, SCREEN_WIDTH / 7 + 35, SCREEN_HEIGHT / 2 - 20); //door frame

	glColor3f(0.92, 0.10, 0.14); // red
	rectangle(SCREEN_WIDTH / 2 - 60 + 10, SCREEN_HEIGHT / 3 - 40 - 10, SCREEN_WIDTH / 7 + 35 - 20, SCREEN_HEIGHT / 2 - 40); //door wall

	glColor3f(1.0, 1.0, 1.0); // white
	circle(SCREEN_WIDTH / 2 + 110, SCREEN_HEIGHT / 2 - 20, 15);

	glColor3f(0.37, 0.22, 0.07); // dark brown
	circle(SCREEN_WIDTH / 2 + 110, SCREEN_HEIGHT / 2 - 20, 11);

	glColor3f(1.0, 1.0, 1.0); // white
	renderSpacedBitmapString(SCREEN_WIDTH / 2 - 12, SCREEN_HEIGHT / 1.5 - 20, GLUT_BITMAP_HELVETICA_18, "ANTI VACCINE"); // Add text on the scene
}

void door2() {
	glColor3f(0.0, 0.0, 0.0); // black
	rectangle(SCREEN_WIDTH / 2 + 200, SCREEN_HEIGHT / 3 - 60, SCREEN_WIDTH / 7 + 35, SCREEN_HEIGHT / 2 - 20); //door frame

	glColor3f(0.0, 0.65, 0.31); // green
	rectangle(SCREEN_WIDTH / 2 + 200 + 10, SCREEN_HEIGHT / 3 - 40 - 10, SCREEN_WIDTH / 7 + 35 - 20, SCREEN_HEIGHT / 2 - 40); //door wall

	glColor3f(1.0, 1.0, 1.0); // white
	circle(SCREEN_WIDTH / 2 + 110 + 260, SCREEN_HEIGHT / 2 - 20, 15);

	glColor3f(0.37, 0.22, 0.07); // dark brown
	circle(SCREEN_WIDTH / 2 + 110 + 260, SCREEN_HEIGHT / 2 - 20, 11);

	glColor3f(1.0, 1.0, 1.0); // white
	renderSpacedBitmapString(SCREEN_WIDTH / 2 - 12 + 250, SCREEN_HEIGHT / 1.5 - 20, GLUT_BITMAP_HELVETICA_18, "VACCINE"); // Add text on the scene
}

void scene1() {
	scene1_floor();
	scene1_wall();
	door1();
	door2();
}