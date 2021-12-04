void bulb_inverse(int x, int y) {

	// Body
	glColor3ub(35, 31, 32);
	rectangle(x - 18, y - 150, 40, 120);

	// Yellow Part
	glColor3ub(255, 242, 0);
	circle(x, y, 50);
}

void scene3_background() {
	// Wall
	glColor3ub(188, 190, 192);
	rectangle(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);

	// Column
	column(SCREEN_WIDTH / 7, 0, 80);

	// Table
	glColor3ub(255, 255, 255);
	rectangle(4 * SCREEN_WIDTH/7, 0, 600, SCREEN_HEIGHT / 6);

	bulb_inverse(6 * SCREEN_WIDTH / 9, 200);
	bulb_inverse(6 * SCREEN_WIDTH / 9 + 150, 200);
	bulb_inverse(6 * SCREEN_WIDTH / 9 + 300, 200);
}






void scene3() {
	scene3_background();
	//scene3_ken();
}