void firstlayers()
{
	glColor3f(0.74, 0.11, 0.17); //red
	rectangle(0, 0, 1280, 720);

}

void fightbanner()
{
	glColor3f(0, 0, 0);
	rectangle(0, 600, 1280, 700);

	glColor3f(1.0, 1.0, 1.0);//middle
	renderSpacedBitmapString(SCREEN_WIDTH / 2 - 270, 650, GLUT_BITMAP_TIMES_ROMAN_24, "COVID VIRUS MONSTER VS ANTI BODY MAN"); // Add text on the scene
}

void ringfloor() {
	glColor3f(0.1, 0.1, 0.1); // dark green
	rectangle(0, 0, 1280, 90);
}

void antibodywhole(int x, int y)
{
	// Vertical
	glColor3ub(0, 0, 0);
	rectangle(x - 3, y - 50, 7, 95);

	// Horizontal
	glColor3ub(0, 0, 0);
	rectangle(x - 45, y - 3, 90, 7);

	glColor3ub(255, 242, 0);
	circle(x, y, 15);
}

void scene_antibody() {

	antibodywhole(SCREEN_WIDTH / 2 - 500 + 3, SCREEN_HEIGHT / 2 + 50);
	antibodywhole(SCREEN_WIDTH / 2 + 500, SCREEN_HEIGHT / 2 + 100);
	antibodywhole(SCREEN_WIDTH / 2 - 300, SCREEN_HEIGHT / 2 + 150);
	antibodywhole(SCREEN_WIDTH / 2 + 200, SCREEN_HEIGHT / 2 + 50);
}

void scene4() {
	firstlayers();
	fightbanner();
	ringfloor();
	scene_antibody();
}
