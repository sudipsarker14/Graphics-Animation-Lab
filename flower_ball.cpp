#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;

int cir2x = 400;
int cir2y = 400;

void circle(float x1,float y1){
  float x=x1;
  float y=y1;

  float radius=50;
  double pii=3.1416;
  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(222,219,214);
  glVertex2f( x,y );
  for(int i=0;i<=360;i++){  ///i=0,1,2      360

    glColor3ub(181,178,174);

    float a=x+radius*cos(i*(pii/180));
    float b=y+radius*sin(i*(pii/180));
    glVertex2f( a,b);


  }
  glEnd();



}

void circle2(float x1,float y1){
  float x=x1;
  float y=y1;

  float radius=20;
  double pii=3.1416;
  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(222,219,214);
  glVertex2f( x,y );
  for(int i=0;i<=360;i++){  ///i=0,1,2      360

    glColor3ub(181,178,174);

    float a=x+radius*cos(i*(pii/180));
    float b=y+radius*sin(i*(pii/180));
    glVertex2f( a,b);



  }
  glEnd();



}


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


void display ()
{



glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_TRIANGLES);
glColor3f(0,0,0);
glVertex2f( 200,250 ); 
glVertex2f( 170, 310 );
glVertex2f( 230, 310);
glEnd();

circle(200,200);

glBegin(GL_TRIANGLES);
glColor3f(0,0,0);
glVertex2f( 250,200 ); 
glVertex2f( 300, 250 );
glVertex2f( 320, 190);
glEnd();


glBegin(GL_TRIANGLES);
glColor3f(0,0,0);
glVertex2f( 150,200 ); 
glVertex2f( 90, 230 );
glVertex2f( 90, 170);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0,0,0);
glVertex2f( 180,150 ); 
glVertex2f( 130, 100 );
glVertex2f( 200, 90);
glEnd();


glBegin(GL_TRIANGLES);
glColor3f(0,0,0);
glVertex2f( 225,155 ); 
glVertex2f( 240, 90 );
glVertex2f( 290, 110);
glEnd();

circle2(cir2x,cir2y);
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



/*
void my_keyboard(unsigned char key, int x, int y)
{
    cout<<key<<endl;
    if(key=='a'){
        gariX+=2;
    }
    if(key=='w'){
        gariY-=2;
    }

}
*/

glFlush();
}

int direction = -1; // Start moving upwards (negative direction)

void update(int value) {
   // Update cir2y based on direction
   cir2y += direction * 2;  // Multiply by direction to move in both directions

   // Check for the bottom boundary (e.g., 0) and reverse direction when it hits
   if (cir2y <= 0) {
       direction = 1;  // Move upwards when hitting the bottom
   }

   // Check for the top boundary (e.g., 500) and reverse direction when it hits
   if (cir2y >= 300) {
       direction = -1;  // Move downwards when hitting the top
   }

   glutPostRedisplay();
   glutTimerFunc(25, update, 0);
}


void my_keyboard(unsigned char key, int x, int y)
{
    cout<<key<<endl;

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
    glutKeyboardFunc(my_keyboard);
	glutTimerFunc(25, update, 0);

	//glutTimerFunc(25, update, 0);

	glutMainLoop();
}
