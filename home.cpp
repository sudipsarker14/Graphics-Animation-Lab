#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;

void myInit () {
    glClearColor(128.0f/255.0f,0, 0, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 500, 0, 500, -10.0, 10.0);
}

void drawHut(float x, float y) {
    // Walls of the hut (rectangle)
    glBegin(GL_QUADS);
    glColor3ub(184, 134, 11); // Golden brown color for walls
    glVertex2f(x, y);
    glVertex2f(x + 100, y);
    glVertex2f(x + 100, y + 70);
    glVertex2f(x, y + 70);
    glEnd();

    // Roof of the hut (triangle)
    glBegin(GL_TRIANGLES);
    glColor3ub(139, 69, 19); // Brown color for the roof
    glVertex2f(x - 10, y + 70);   // Left bottom
    glVertex2f(x + 110, y + 70); // Right bottom
    glVertex2f(x + 50, y + 120); // Top middle
    glEnd();

    // Door of the hut (rectangle)
    glBegin(GL_QUADS);
    glColor3ub(105, 105, 105); // Gray color for the door
    glVertex2f(x + 35, y);
    glVertex2f(x + 65, y);
    glVertex2f(x + 65, y + 40);
    glVertex2f(x + 35, y + 40);
    glEnd();

    // Left window of the hut (small rectangle)
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255); // White color for the window
    glVertex2f(x + 10, y + 40);
    glVertex2f(x + 30, y + 40);
    glVertex2f(x + 30, y + 60);
    glVertex2f(x + 10, y + 60);
    glEnd();
}

void display () {
    glClear(GL_COLOR_BUFFER_BIT);

    // Ground (green rectangle)
    glBegin(GL_QUADS);
    glColor3ub(57, 99, 35);
    glVertex2f(0, 0);
    glVertex2f(500, 0);
    glVertex2f(500, 250);
    glVertex2f(0, 250);
    glEnd();

    // Sky (sky blue rectangle)
    glBegin(GL_QUADS);
    glColor3ub(135, 206, 235); // Sky blue color
    glVertex2f(0, 250);
    glVertex2f(500, 250);
    glVertex2f(500, 500);
    glVertex2f(0, 500);
    glEnd();

    // Draw 3 huts using a loop at different positions
    for (int i = 0; i < 3; i++) {
        float xPos = 100 + i * 150; // Horizontal spacing between huts
        drawHut(xPos, 250); // Draw hut at the calculated position
    }

    glFlush();
}

int main (int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // Giving window size in X- and Y- direction
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 0);

    // Giving name to window
    glutCreateWindow("Hut Scene");
    myInit();

    glutDisplayFunc(display);
    glutMainLoop();
}
