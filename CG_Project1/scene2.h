void column(int x, int y, int size) {
	glColor3ub(109, 110, 113);
	rectangle(x - size/2, y, size, SCREEN_HEIGHT);
}

void bulb(int x, int y) {
	
	// Body
	glColor3ub(35, 31, 32);
	rectangle(x-7, y+10, 15, 40);

	// Yellow Part
	glColor3ub(255, 242, 0);
	circle(x, y, 20);
}

void scene2_background() {
	// Wall
	glColor3ub(188, 190, 192);
	rectangle(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);

	// Columns
	column(1 * SCREEN_WIDTH / 4, 0, 40);
	column(3 * SCREEN_WIDTH / 4, 0, 40);

	// Floor
	glColor3ub(128, 130, 133);
	rectangle(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT/5);

	// Bulbs
	bulb(1 * SCREEN_WIDTH/4 - 100, SCREEN_HEIGHT - 50);
	bulb(2 * SCREEN_WIDTH / 4, SCREEN_HEIGHT - 50);
	bulb(3 * SCREEN_WIDTH / 4 + 100, SCREEN_HEIGHT - 50);
}

void scene2() {
	scene2_background();
}