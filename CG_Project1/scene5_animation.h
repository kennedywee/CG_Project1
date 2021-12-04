void scene5_ken_infected() {
	glPushMatrix();
	glScalef(3, 3, 1);
	glTranslatef(0, -250, 0);
	ken_dead();
	glPopMatrix();
}

void scene5_text_damage(float textDamage_slidey, int spacingX, int spacingY) {
	glColor3f(1, 0, 0); //red
	renderSpacedBitmapString(
		SCREEN_WIDTH / 5 + spacingX,
		3 * SCREEN_HEIGHT / 5 + textDamage_slidey + spacingY,
		GLUT_BITMAP_HELVETICA_18,
		"Eliminated");
}

void scene5_ken_idle() {
	if (backForth) {
		if (backForthValue < 50) backForthValue += 2;
		else backForth = false;
	}
	else if (!backForth) {
		if (backForthValue < 2) backForth = true;
		backForthValue -= 2;
	}
}

void scene5_text_damage_idle() {
	if (textDamage_slidey < 50) {
		textDamage_slidey += 0.3;
	}
}

void scene5_text_animation() {
	glColor3f(0, 0, 0); //black
	renderSpacedBitmapString(
		3 * SCREEN_WIDTH / 5,
		SCREEN_HEIGHT / 2,
		GLUT_BITMAP_TIMES_ROMAN_24,
		"The Character Died Because Of Corona Virus");

	renderSpacedBitmapString(
		3 * SCREEN_WIDTH / 5,
		SCREEN_HEIGHT / 2 - 30,
		GLUT_BITMAP_TIMES_ROMAN_24,
		"Stay Safe and Stay Away From Covid19!");

	renderSpacedBitmapString(
		3 * SCREEN_WIDTH / 5,
		SCREEN_HEIGHT / 2 - 60,
		GLUT_BITMAP_TIMES_ROMAN_24,
		"~ The End ~");
}

void scene5_text_damage_animation() {
	if (frame >= 3800 && frame < 3820) {
		scene5_text_damage(textDamage_slidey, 0, 0);
	}
	else if (frame >= 3820 && frame < 3825) {
		scene5_text_damage(textDamage_slidey, 100, 100);
	}
	else if (frame >= 3825 && frame < 3830) {
		scene5_text_damage(textDamage_slidey, 200, 50);
	}
	else if (frame >= 3830 && frame < 3835) {
		scene5_text_damage(textDamage_slidey, 300, 0);
	}
}

void scene5_animation() {
	/*
	if (frame > 3835) {
		glTranslatef(-70, -35, 0);
		glScalef(1.1f, 1.1f, 1.1f);
		scene5_ken_animation();
		scene5_text_animation();
		scene5_text_damage_animation();
	}
	*/
	scene5_ken_infected();
	scene5_text_animation();
	scene5_text_damage_animation();
}

void scene5_idle() {
	scene5_ken_idle();
	scene5_text_damage_idle();
}