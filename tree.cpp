#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;

void myInit ()
{

//glClearColor(0.0, 1.0, 0.0, 0.0);
//glClearColor(184.0f/255.0f, 213.0f/255.0f, 238.0f/255.0f, 1.0f);
//glColor3f(0.0, 0.2, 0.0);
glClearColor(128.0f/255.0f,0, 0, 1.0f);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();


// setting window dimension in X- and Y- direction
glOrtho(0, 500, 0, 500, -10.0, 10.0);


}
void drawTree(float x, float y) {
    // Tree trunk (a simple rectangle)
    glBegin(GL_QUADS);
    glColor3ub(71, 14, 22);  // Brown color for the trunk
    glVertex2f(x, y);
    glVertex2f(x + 25, y);
    glVertex2f(x + 25, y + 70);
    glVertex2f(x, y + 70);
    glEnd();

    // Tree foliage (using a triangle for simplicity)
    glBegin(GL_TRIANGLES);
    glColor3ub(57, 99, 35);  // Green color for foliage
    glVertex2f(x - 20, y + 70);   // Left bottom
    glVertex2f(x + 45, y + 70);   // Right bottom
    glVertex2f(x + 12.5, y + 120); // Top middle
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(57, 99, 35);  // Green color for foliage
    glVertex2f(x - 20, y + 90);   // Left bottom
    glVertex2f(x + 45, y + 90);   // Right bottom
    glVertex2f(x + 12.5, y + 140); // Top middle
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(57, 99, 35);  // Green color for foliage
    glVertex2f(x - 20, y + 110);   // Left bottom
    glVertex2f(x + 45, y + 110);   // Right bottom
    glVertex2f(x + 12.5, y + 160); // Top middle
    glEnd();
    /* Adding leaf above the tree (simple triangle)
    glBegin(GL_TRIANGLES);
    glColor3ub(57, 99, 35);  // Green color for the leaf
    glVertex2f(x + 5, y + 130);   // Left bottom
    glVertex2f(x + 20, y + 130);  // Right bottom
    glVertex2f(x + 12.5, y + 150); // Top middle
    glEnd();*/
}


void display ()
{

glClear(GL_COLOR_BUFFER_BIT);

//Quads
glBegin(GL_QUADS);
glColor3ub(57, 99, 35);
glVertex2f( 0,0 );
glVertex2f( 500, 0 );
glVertex2f( 500, 250);
glVertex2f( 0, 250);
glEnd();
//Quads
glBegin(GL_QUADS);
glColor3ub(240, 234, 70);
glVertex2f( 0,250 );
glVertex2f( 500, 250 );
glVertex2f( 500, 500);
glVertex2f( 0, 500);
glEnd();

glBegin(GL_QUADS);
glColor3ub(71, 14, 22);
glVertex2f( 100,250 );
glVertex2f( 125, 250 );
glVertex2f( 125,320);
glVertex2f( 100, 320);
glEnd();

    // Draw 4 trees using a loop at different positions
    for (int i = 0; i < 3; i++) {
        float xPos = 100 + i * 120; // Horizontal spacing between trees
        drawTree(xPos, 250); // Draw tree at the calculated position
    }

//Triangle
glBegin(GL_TRIANGLES);
glColor3ub(57, 99, 35);
glVertex2f( 85,320 );
glVertex2f( 140, 320 );
glVertex2f( 113,370);
glEnd();

//Triangle
/*glBegin(GL_TRIANGLES);
glColor3f(0,0,0);
glVertex2f( 250,250 );
glVertex2f( 300, 200 );
glVertex2f( 200, 200);
glEnd();
/*
//lines
glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f( 250,500 );
glVertex2f( 250, 0 );
glEnd();

//point

glPointSize(100);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f( 100,100 );
glEnd();

//Quads
glBegin(GL_QUADS);
glColor3ub(128,0,0);
glVertex2f( 0,0 );
glVertex2f( 200, 0 );
glVertex2f( 200, 200);
glVertex2f( 0, 200);
glEnd();

//polygon
glBegin(GL_POLYGON);
glColor3f(0,1,0);
glVertex2f( 100,100 );
glVertex2f( 100, 0 );
glVertex2f( 50, 0 );
glVertex2f( 10, 50 );
glVertex2f( 50, 200 );

glEnd();

*/

glFlush();
}

int main (int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

// giving window size in X- and Y- direction
glutInitWindowSize(500, 500);
glutInitWindowPosition(100, 0);

// Giving name to window
glutCreateWindow("bahubali 3");
myInit();

glutDisplayFunc(display);
//glutTimerFunc(25, update, 0);

glutMainLoop();
}
