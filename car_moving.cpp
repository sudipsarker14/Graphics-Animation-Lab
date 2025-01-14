#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;

int gariX = 100;
int gariY =100;

void circle(float x1,float y1,float radius){
  float x=x1;
  float y=y1;

  //float radius=20;
  double pii=3.1416;
  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(63, 191, 76);
  glVertex2f( x,y );
  for(int i=0;i<=360;i++){  ///i=0,1,2      360

    glColor3ub(181,178,174);

    float a=x+radius*cos(i*(pii/180));
    float b=y+radius*sin(i*(pii/180));
    glVertex2f( a,b);


  }
  glEnd();
}

void my_keyboard(unsigned char key, int x, int y)
{
    if(key=='a'){
        gariX-=2;
    }
    cout<<key<<endl;

}


void update(int value) {


    gariX+=2;
    if(gariX>500){
        gariX=10;
    }

	glutPostRedisplay();
	glutTimerFunc(25, update, 0);
}

void gari(float x, float y){
//Quads
glBegin(GL_QUADS);
glColor3ub(212, 28, 232);
glVertex2f( x,y ); //pivot (30,30)
glVertex2f( x, y+20 );
glVertex2f( x+70, y+20);
glVertex2f( x+70, y);
glEnd();

//Quads
glBegin(GL_QUADS);
glColor3ub(71, 67, 161);
glVertex2f( x+10,y+20 );
glVertex2f( x+15, y+40 );
glVertex2f( x+55, y+40);
glVertex2f( x+60, y+20);
glEnd();

circle(x+15,y,8);
circle(x+55,y,8);
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
gari(gariX, gariY);

/*
//Triangle
glBegin(GL_TRIANGLES);
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
	glutKeyboardFunc(my_keyboard);
	glutTimerFunc(25, update, 0);

	glutMainLoop();
}
