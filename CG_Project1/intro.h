void Belakang_habis()
{
	glColor3f(0.1, 0.1, 0.1);
	rectangle(0, 0, 1280, 720);

}

void Belakang_atas()
{
	glColor3f(0, 0, 0);
	rectangle(0, 500, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);

	glColor3f(1.0, 1.0, 1.0);//left
	renderSpacedBitmapString(100, 680, GLUT_BITMAP_TIMES_ROMAN_24, "DANGER OF COVID!!"); // Add text on the scene

	glColor3f(1.0, 0.0, 0.0);//middle
	renderSpacedBitmapString(400, 680 - 50, GLUT_BITMAP_TIMES_ROMAN_24, "DANGER OF COVID!! DANGER OF COVID!!"); // Add text on the scene

	glColor3f(1.0, 1.0, 1.0);//left
	renderSpacedBitmapString(100, 680 - 50 - 50, GLUT_BITMAP_TIMES_ROMAN_24, "DANGER OF COVID!!"); // Add text on the scene

	glColor3f(1.0, 1.0, 1.0);//right
	renderSpacedBitmapString(940, 680, GLUT_BITMAP_TIMES_ROMAN_24, "DANGER OF COVID!!"); // Add text on the scene

	glColor3f(1.0, 1.0, 1.0);//right
	renderSpacedBitmapString(940, 680 - 50 - 50, GLUT_BITMAP_TIMES_ROMAN_24, "DANGER OF COVID!!"); // Add text on the scene

}

void tanda()
{
	glColor3f(1, 1, 1);
	rectangle(SCREEN_WIDTH / 2 + 100 + 40, SCREEN_HEIGHT / 2 + 70 + 5, 300, 90);

	glColor3f(0, 0, 0);
	rectangle(SCREEN_WIDTH / 2 + 100 + 40 + 5, SCREEN_HEIGHT / 2 + 60 + 10 + 10, 290, 80);

	glColor3f(1.0, 1.0, 1.0);
	renderSpacedBitmapString(SCREEN_WIDTH / 2 + 100 + 70, SCREEN_HEIGHT / 2 + 110, GLUT_BITMAP_9_BY_15, "WHICH ONE WOULD YOU CHOOSE?"); // Add text on the scene

}

void Belakang_bawah()
{
	glColor3f(0.37, 0.22, 0.07);
	rectangle(0, 0, 1280, 550);
}


void choosedoor1() {
	glPushMatrix();
	glTranslated(350, -135, 0);
	door1();
	glPopMatrix();
}


void choosedoor2() {
	glPushMatrix();
	glTranslated(-140, -135, 0);
	door2();
	glPopMatrix();
}


void ken_move()
{
	glPushMatrix();
	glTranslated(460, -20, 0);
	ken();
	glPopMatrix();
}

void lisa_move()
{
	glPushMatrix();
	glTranslated(1070, -20, 0);
	lisa();
	glPopMatrix();
}

void floor() {
	glColor3f(0.0, 0.1, 0.00); // dark green
	rectangle(0, 0, 1280, 70);
}

void teamframe()
{
	glColor3f(0, 0, 0);
	rectangle(SCREEN_WIDTH / 2 - 550, SCREEN_HEIGHT / 2 + 70 + 70, 400, 10);

	glColor3f(0, 0, 0); //light one line
	rectangle(SCREEN_WIDTH / 2 - 500, SCREEN_HEIGHT / 2 + 50, 5, 100);

	glColor3f(0, 0, 0); //light two line
	rectangle(SCREEN_WIDTH / 2 - 400, SCREEN_HEIGHT / 2 + 50, 5, 100);

	glColor3f(0, 0, 0); //light three line
	rectangle(SCREEN_WIDTH / 2 - 300, SCREEN_HEIGHT / 2 + 50, 5, 100);

	glColor3f(0, 0, 0); //light four line
	rectangle(SCREEN_WIDTH / 2 - 200, SCREEN_HEIGHT / 2 + 50, 5, 100);

	glColor3f(1, 1, 0); //bulb 1
	circle(SCREEN_WIDTH / 2 - 200 + 3, SCREEN_HEIGHT / 2 + 50, 15);

	glColor3f(1, 1, 0); //bulb 2
	circle(SCREEN_WIDTH / 2 - 300 + 3, SCREEN_HEIGHT / 2 + 50, 15);

	glColor3f(1, 1, 0); //bulb 3
	circle(SCREEN_WIDTH / 2 - 400 + 3, SCREEN_HEIGHT / 2 + 50, 15);

	glColor3f(1, 1, 0); //bulb 4
	circle(SCREEN_WIDTH / 2 - 500 + 3, SCREEN_HEIGHT / 2 + 50, 15);

	glColor3f(1.0, 1.0, 1.0);//right
	renderSpacedBitmapString(SCREEN_WIDTH / 2 - 500 + 15, SCREEN_HEIGHT / 2 - 40, GLUT_BITMAP_TIMES_ROMAN_24, "CREATED BY GROUP 14"); // Add text on the scene

	glColor3f(1.0, 1.0, 1.0);//right
	renderSpacedBitmapString(SCREEN_WIDTH / 2 - 500 + 15, SCREEN_HEIGHT / 2 - 70, GLUT_BITMAP_HELVETICA_18, "TAN ZHENG YUAN"); // Add text on the scene

	glColor3f(1.0, 1.0, 1.0);//right
	renderSpacedBitmapString(SCREEN_WIDTH / 2 - 500 + 15, SCREEN_HEIGHT / 2 - 100, GLUT_BITMAP_HELVETICA_18, "KENNEDY WEE SUPITANG"); // Add text on the scene

	glColor3f(1.0, 1.0, 1.0);//right
	renderSpacedBitmapString(SCREEN_WIDTH / 2 - 500 + 15, SCREEN_HEIGHT / 2 - 130, GLUT_BITMAP_HELVETICA_18, "FEREZ FERNANDEZ"); // Add text on the scene

	glColor3f(1.0, 1.0, 1.0);//right
	renderSpacedBitmapString(SCREEN_WIDTH / 2 - 500 + 15, SCREEN_HEIGHT / 2 - 160, GLUT_BITMAP_HELVETICA_18, "NETHANEL JUSHUA"); // Add text on the scene

}

void intro() {
	Belakang_habis();
	Belakang_atas();
	Belakang_bawah();
	ken_move();
	lisa_move();
	choosedoor1();
	choosedoor2();
	tanda();
	floor();
	teamframe();
}
