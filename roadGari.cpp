#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;
float moonY=250; //for y
float skyR = 240, skyG = 154, skyB =79;
void circle(float x1,float y1)
{
    float x=x1;
    float y=y1;
    float radius=25;
    double pii=3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(245, 220, 56);
    glVertex2f( x,y );
    for(int i=0; i<=360; i++) ///i=0,1,2 angle=360
    {
        glColor3ub(237, 139, 47);
        float a = x+radius*cos(i*(pii/180));
        float b = y+radius*sin(i*(pii/180));
        glVertex2f(a,b);
    }
    glEnd();
}
// Global variable for car position
float carPosX = -200.0f;
//car circle
void circle1(float x2,float y2)
{
    float x=x2;
    float y=y2;
    float radius=15;
    double pii=3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
    glVertex2f( x,y );
    for(int i=0; i<=360; i++) ///i=0,1,2 360
    {
        glColor3ub(0,0,0);
        float a=x+radius*cos(i*(pii/180));
        float b=y+radius*sin(i*(pii/180));
        glVertex2f( a,b);
    }
    glEnd();
}
void pichonerGhash(int x,int y,int r,int g,int b)
{
    glBegin(GL_TRIANGLES);
    glColor3ub(r,g,b);
    glVertex2f( x,y ); // Triangle vertex 1
    glVertex2f( x+30, y ); // Triangle vertex 2
    glVertex2f( x+15, y+60); // Triangle vertex 3
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(r,g,b);
    glVertex2f( x+2,y+15 );
    glVertex2f( x+28, y+15 );
    glVertex2f( x+15, y+65);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(r,g,b);
    glVertex2f( x+4,y+30 );
    glVertex2f( x+26, y+30 );
    glVertex2f( x+15, y+65);
    glEnd();
}
void myInit ()
{
    glClearColor(1, 1, 1, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
// Invert the y-axis by swapping the bottom and top values in glOrtho
    glOrtho(0, 600, 0, 500, -10.0, 10.0);
}
//road(lowerlock)
void roadblock(int x, int y)
{
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(x, y);//x=9, y=21
    glVertex2f(x+20, y);
    glVertex2f(x+21, y+4);
    glVertex2f(x+1, y+4);
    glEnd();
}
//upper block road
void roadblock1(int x, int y)
{
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(x, y);//x=9, y=77
    glVertex2f(x+20, y);
    glVertex2f(x+21, y+4);
    glVertex2f(x+1, y+4);
    glEnd();
}
void display ()
{
    glClear(GL_COLOR_BUFFER_BIT);
// Draw the sky
    glBegin(GL_QUADS);
    glColor3ub(skyR, skyG, skyB); // Use the global variables for sky color
    glVertex2f( 0, 100 );
    glVertex2f( 600, 100 );
    glColor3ub(138,184,237);  // sky blue
    glVertex2f( 600, 500 );
    glVertex2f( 0, 500 );
    glEnd();
    circle(100,moonY); // For sun
    pichonerGhash(30,110,23, 179, 39);
    pichonerGhash(3,110,23, 179, 39);
    pichonerGhash(60,130,23, 179, 39);
    pichonerGhash(95,140,23, 179, 39);
// Orange building
    glBegin(GL_QUADS);
    glColor3ub(168, 97, 20);
    glVertex2f(120, 150);
    glVertex2f(160, 150);
    glVertex2f(160, 240);
    glVertex2f(120, 210);
    glEnd();
// window 1
    glBegin(GL_QUADS);
    glColor3ub(247, 252, 252);
    glVertex2f(125, 150);
    glVertex2f(135, 150);
    glVertex2f(135, 208);
    glVertex2f(125, 200);
    glEnd();
// window 2
    glBegin(GL_QUADS);
    glColor3ub(247, 252, 252);
    glVertex2f(140, 150);
    glVertex2f(155, 150);
    glVertex2f(155, 220);
    glVertex2f(140, 210);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(250, 127, 5);
    glVertex2f(160, 150);
    glVertex2f(190, 150);
    glVertex2f(190, 220);
    glVertex2f(160, 240);
    glEnd();
// Brown platform
    glBegin(GL_QUADS);
    glColor3ub(77, 27, 27);
    glVertex2f(0, 100);
    glVertex2f(800, 100);
    glVertex2f(800, 110);
    glVertex2f(0, 110);
    glEnd();
//road
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0,0);
    glVertex2f(800, 0);
    glVertex2f(800, 100);
    glVertex2f(0, 100);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(0, 47);
    glVertex2f(800, 47);
    glVertex2f(800, 53);
    glVertex2f(0, 53);
    glEnd();
//lower road block
    roadblock(9, 21);
    roadblock(69, 21);
    roadblock(129, 21);
    roadblock(189, 21);
    roadblock(249, 21);
    roadblock(309, 21);
    roadblock(369, 21);
    roadblock(429, 21);
    roadblock(489, 21);
    roadblock(549, 21);
//upper block road
    roadblock1(9, 77);
    roadblock1(69, 77);
    roadblock1(129, 77);
    roadblock1(189, 77);
    roadblock1(249, 77);
    roadblock1(309, 77);
    roadblock1(369, 77);
    roadblock1(429, 77);
    roadblock1(489, 77);
    roadblock1(549, 77);
//road close
// Pink building
    glBegin(GL_QUADS);
    glColor3ub(166, 17, 161);
    glVertex2f(60, 110);
    glVertex2f(100, 110);
    glVertex2f(100, 160);
    glVertex2f(60, 140);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(65, 115);
    glVertex2f(95, 115);
    glVertex2f(95, 140);
    glVertex2f(65, 130);
    glEnd();
//lines
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(166, 17, 161);
    glVertex2f( 80,110 );
    glVertex2f( 80,140 );
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(214, 30, 208);
    glVertex2f(100, 110);
    glVertex2f(190, 110);
    glVertex2f(190, 150);
    glVertex2f(100, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(110, 115);
    glVertex2f(180, 115);
    glVertex2f(180, 140);
    glVertex2f(110, 150);
    glEnd();
//lines
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(214, 30, 208);
    glVertex2f( 133,115 );
    glVertex2f( 133,150 );
    glEnd();
//lines
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(214, 30, 208);
    glVertex2f( 158,115 );
    glVertex2f( 158,150 );
    glEnd();
// Black building
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(190, 110);
    glVertex2f(240, 110);
    glVertex2f(240, 300);
    glVertex2f(190, 270);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(195, 130);
    glVertex2f(230, 130);
    glVertex2f(230, 280);
    glVertex2f(195, 260);
    glEnd();
//lines
    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(0,0, 0);
    glVertex2f( 212,115 );
    glVertex2f( 212,280 );
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(240, 110);
    glVertex2f(260, 110);
    glVertex2f(260, 270);
    glVertex2f(240, 300);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(245, 110);
    glVertex2f(255, 110);
    glVertex2f(255, 260);
    glVertex2f(245, 280);
    glEnd();
//lines
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0, 0);
    glVertex2f( 250,115 );
    glVertex2f( 250,280 );
    glEnd();
// Blue building
    glBegin(GL_QUADS);
    glColor3ub(38, 79, 201);
    glVertex2f(300, 110);
    glVertex2f(350, 110);
    glVertex2f(350, 300);
    glVertex2f(300, 290);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(310, 115);
    glVertex2f(340, 115);
    glVertex2f(340, 285);
    glVertex2f(310, 280);
    glEnd();
//lines
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(38, 79, 201);
    glVertex2f( 320,115 );
    glVertex2f( 320,285 );
    glEnd();
//lines
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(38, 79, 201);
    glVertex2f( 330,115 );
    glVertex2f( 330,285 );
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(38, 73, 171);
    glVertex2f(350, 110);
    glVertex2f(380, 110);
    glVertex2f(380, 290);
    glVertex2f(350, 300);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(355, 160);
    glVertex2f(375, 160);
    glVertex2f(375, 280);
    glVertex2f(355, 285);
    glEnd();
//lines
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(38, 73, 171);
    glVertex2f( 362,160 );
    glVertex2f( 362,285 );
    glEnd();
//lines
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(38, 73, 171);
    glVertex2f( 369,160 );
    glVertex2f( 369,285 );
    glEnd();
// Brown building
    glBegin(GL_QUADS);
    glColor3ub(128, 8, 24);
    glVertex2f(240, 110);
    glVertex2f(280, 110);
    glVertex2f(280, 220);
    glVertex2f(240, 190);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(245, 115);
    glVertex2f(270, 115);
    glVertex2f(270, 200);
    glVertex2f(245, 180);
    glEnd();
//lines
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(128, 8, 24);
    glVertex2f( 252,115 );
    glVertex2f( 252,190 );
    glEnd();
//lines
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(128, 8, 24);
    glVertex2f( 262,115 );
    glVertex2f( 262,200 );
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(194, 29, 29);
    glVertex2f(280, 110);
    glVertex2f(310, 110);
    glVertex2f(310, 190);
    glVertex2f(280, 220);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(282, 115);
    glVertex2f(295, 115);
    glVertex2f(295, 132);
    glVertex2f(282, 138);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(295, 137);
    glVertex2f(305, 135);
    glVertex2f(305, 157);
    glVertex2f(295, 163);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(282, 180);
    glVertex2f(295, 170);
    glVertex2f(295, 193);
    glVertex2f(282, 205);
    glEnd();
// Pink building
    glBegin(GL_QUADS);
    glColor3ub(138, 23, 118);
    glVertex2f(360, 110);
    glVertex2f(400, 110);
    glVertex2f(400, 180);
    glVertex2f(360, 160);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(365, 115);
    glVertex2f(390, 115);
    glVertex2f(390, 165);
    glVertex2f(365, 155);
    glEnd();
//lines
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(138, 23, 118);
    glVertex2f( 372,115 );
    glVertex2f( 372,165 );
    glEnd();
//lines
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(138, 23, 118);
    glVertex2f( 382,115 );
    glVertex2f( 382,165 );
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(209, 44, 160);
    glVertex2f(400, 110);
    glVertex2f(440, 110);
    glVertex2f(440, 160);
    glVertex2f(400, 180);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 1, 1);
    glVertex2f(407, 115);
    glVertex2f(435, 115);
    glVertex2f(435, 155);
    glVertex2f(407, 170);
    glEnd();
//lines
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(209, 44, 160);
    glVertex2f( 416,115 );
    glVertex2f( 416,170 );
    glEnd();
//lines
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(209, 44, 160);
    glVertex2f( 426,115 );
    glVertex2f( 426,165 );
    glEnd();
// electric piller 1
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 460,110 );
    glVertex2f( 460,250 );
    glEnd();
// rope 1
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 460,245 );
    glVertex2f( 600,210 );
    glEnd();
// rope 2
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 460,235 );
    glVertex2f( 600,198 );
    glEnd();
// rope 3
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 460,225 );
    glVertex2f( 600,185 );
    glEnd();
//light
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 460,248 );
    glVertex2f( 475,252 );
    glEnd();
    glLineWidth(8);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 475,252 );
    glVertex2f( 495,254 );
    glEnd();
// electric piller 2
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 60,110 );
    glVertex2f( 60,210 );
    glEnd();
// rope 1
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 460,245 );
    glVertex2f( 60,203 );
    glEnd();
// rope 2
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 460,235 );
    glVertex2f( 60,197 );
    glEnd();
// rope 3
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 460,225 );
    glVertex2f( 60,192 );
    glEnd();
// small rope in left side
// rope 1
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 60,203 );
    glVertex2f( 0,190 );
    glEnd();
// rope 2
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 60,197 );
    glVertex2f( 0,188 );
    glEnd();
// rope 3
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 60,192 );
    glVertex2f( 0,186 );
    glEnd();
// light
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 60,208 ); //starting point
    glVertex2f( 50,210 ); // ending point
    glEnd();
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f( 50,209 );
    glVertex2f( 35,211 );
    glEnd();
    glPushMatrix();
// Apply translation to move the car horizontally
    glTranslatef(carPosX, 0.0f, 0.0f);
//car
    glBegin(GL_QUADS);
    glColor3ub(201, 178, 26);
    glVertex2f( 100,70 );
    glVertex2f( 170,70 );
    glVertex2f( 170,120);
    glVertex2f( 100,120);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(201, 178, 26);
    glVertex2f( 170,70 );
    glVertex2f( 200,70 );
    glVertex2f( 200,90);
    glVertex2f( 170,120);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f( 110,95 );
    glVertex2f( 145,95);
    glVertex2f( 145,110);
    glVertex2f( 110,110);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f( 150,95 );
    glVertex2f( 170,95);
    glVertex2f( 170,110);
    glVertex2f( 150,110);
    glEnd();
    circle1(125,75);
    circle1(165,75);
    glPopMatrix();
//car close
    glFlush();
}
// Idle function to update the car position
void idle()
{
    carPosX += 0.1f; // Increment car position for smooth movement
    if (carPosX > 500)
    {
        carPosX = -2000.0f; // Reset position when it moves off the screen
    }
    glutPostRedisplay(); // Request to redraw the screen
}
void my_keyboard(unsigned char key, int x, int y)
{
    if (key == 'y')
    {
// Change the sky color when 'X' key is pressed
        skyR = 0.0f ;
        skyG = 0.0f ;
        skyB = 0.0f;
// Request the window to redraw itself with the new color
        glutPostRedisplay();
    }
}
void update(int value)
{
    moonY=moonY-0.2; //speed of sun
    glutPostRedisplay();
    glutTimerFunc(25, update, 0);
}
int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
// giving window size in X- and Y- direction
    glutInitWindowSize(600, 500);
    glutInitWindowPosition(100, 0);
// Giving name to window
    glutCreateWindow("Urban Sunset");
    myInit();
    glutDisplayFunc(display);
    glutKeyboardFunc(my_keyboard);
    glutTimerFunc(25, update, 0);
    glutIdleFunc(idle);
    glutMainLoop();
}
