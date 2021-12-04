void scene5_background() {
	// Wall
	glColor3ub(188, 190, 192);
	rectangle(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);

	// Column
	column(SCREEN_WIDTH / 7, 0, 80);

	// Table
	glColor3ub(255, 255, 255);
	rectangle(4 * SCREEN_WIDTH / 7, 0, 600, SCREEN_HEIGHT / 6);

	bulb_inverse(6 * SCREEN_WIDTH / 9, 200);
	bulb_inverse(6 * SCREEN_WIDTH / 9 + 150, 200);
	bulb_inverse(6 * SCREEN_WIDTH / 9 + 300, 200);
}

void scene5() {
	scene5_background();
}