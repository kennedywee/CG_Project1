void circle(int x, int y, int r)
{
    float th;
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        th = i * (3.1416 / 180);
        glVertex2f(x + r * cos(th), y + r * sin(th));
    }

    glEnd();

}

void halfCircle(int x, int y, int r)
{
    float th;
    glBegin(GL_POLYGON);
    for (int i = 0; i < 180; i++)
    {
        th = i * (3.1416 / 180);
        glVertex2f(x + r * cos(th), y + r * sin(th));
    }

    glEnd();

}

void halfCircleInverse(int x, int y, int r)
{
    float th;
    glBegin(GL_POLYGON);
    for (int i = 180; i < 360; i++)
    {
        th = i * (3.1416 / 180);
        glVertex2f(x + r * cos(th), y + r * sin(th));
    }

    glEnd();

}

void rectangle(int x, int y, int w, int h) {
    glBegin(GL_POLYGON);
    glVertex2i(x, y);
    glVertex2i(x + w, y);
    glVertex2i(x + w, y + h);
    glVertex2i(x, y + h);
    glEnd();
}

void renderSpacedBitmapString(float x, float y, void* font, const char* string) {
    const char* c;
    int x1 = x;
    for (c = string; *c != '\0'; c++) {
        glRasterPos2f(x1, y);
        glutBitmapCharacter(font, *c);
        x1 = x1 + glutBitmapWidth(font, *c);
    }
}

void drawHeart(int scale) {
    glPushMatrix();

    glScalef(scale, scale, 1);
    if (frame > infected_frame) {
        glColor3ub(26, 114, 70);  // Color Red
    }
    else {
        glColor3ub(255, 0, 0);  // Color Red
    }

    glBegin(GL_POLYGON);
    for (float x = -1.139; x <= 1.139; x += 0.001)
    {
        float delta = cbrt(x * x) * cbrt(x * x) - 4 * x * x + 4;
        float y1 = (cbrt(x * x) + sqrt(delta)) / 2;
        float y2 = (cbrt(x * x) - sqrt(delta)) / 2;
        glVertex2f(x, y1);
        glVertex2f(x, y2);
    }
    glEnd();
    glPopMatrix();
}

void heart(int x, int y, int scale) {
    glPushMatrix();
    glTranslatef(x, y, 1);
    drawHeart(scale);
    glPopMatrix();
}