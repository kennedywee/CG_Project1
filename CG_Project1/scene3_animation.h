void scene3_ken_infected() {
	glPushMatrix();
	glScalef(3, 3, 1);
	glTranslatef(0, -250, 0);
	ken_infected();
	glPopMatrix();
}

void scene3_text_damage(float textDamage_slidey, int spacingX, int spacingY) {
	glColor3f(1, 0, 0); //red
	renderSpacedBitmapString(
		SCREEN_WIDTH / 5 + spacingX,
		3 * SCREEN_HEIGHT / 5 + textDamage_slidey + spacingY,
		GLUT_BITMAP_HELVETICA_18,
		"-100 Virus Damage");
}

void scene3_ken_idle() {
	if (backForth) {
		if (backForthValue < 50) backForthValue += 2;
		else backForth = false;
	}
	else if (!backForth) {
		if (backForthValue < 2) backForth = true;
		backForthValue -= 2;
	}
}

void scene3_text_damage_idle() {
	if (textDamage_slidey < 50) {
		textDamage_slidey += 0.3;
	}
}

void scene3_ken_animation() {
	glPushMatrix();
	glTranslatef(backForthValue, 0, 1);
	scene3_ken_infected();
	glPopMatrix();
}

void scene3_text_animation() {
	glColor3f(0, 0, 0); //black
	renderSpacedBitmapString(
		3 * SCREEN_WIDTH / 5, 
		SCREEN_HEIGHT / 2, 
		GLUT_BITMAP_TIMES_ROMAN_24, 
		"Mr. Stark, I don't feel so good.");

	renderSpacedBitmapString(
		3 * SCREEN_WIDTH / 5,
		SCREEN_HEIGHT / 2 - 20,
		GLUT_BITMAP_TIMES_ROMAN_24,
		"By Spider-Man");
}

void scene3_text_damage_animation(){
	if (frame >= 3800 && frame < 3820) {
		scene3_text_damage(textDamage_slidey, 0, 0);
	}
	else if (frame >= 3820 && frame < 3825) {
		scene3_text_damage(textDamage_slidey, 100, 100);
	}
	else if (frame >= 3825 && frame < 3830) {
		scene3_text_damage(textDamage_slidey, 200, 50);
	}
	else if (frame >= 3830 && frame < 3835) {
		scene3_text_damage(textDamage_slidey, 300, 0);
	}
}

void scene3_animation() {
	/*
	if (frame > 3835) {
		glTranslatef(-70, -35, 0);
		glScalef(1.1f, 1.1f, 1.1f);
		scene3_ken_animation();
		scene3_text_animation();
		scene3_text_damage_animation();
	}
	*/
	scene3_ken_animation();
	scene3_text_animation();
	scene3_text_damage_animation();
}

void scene3_idle() {
	scene3_ken_idle();
	scene3_text_damage_idle();
}