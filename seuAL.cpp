#include <iostream>
#include<GL/gl.h>
#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <bits/stdc++.h>
#include<GL/gl.h>
#include<windows.h>
#include<math.h>


using namespace std;

const int width = 1000;
const int height = 1000;

GLfloat eyeX =10;
GLfloat eyeY = 20;
GLfloat eyeZ = 50;

GLfloat lookX = 0;
GLfloat lookY = 0;
GLfloat lookZ = 0;

static GLfloat v_cube[8][3] =
{
    {0,0,0},
    {0,0,1},
    {0,1,0},
    {0,1,1},

    {1,0,0},
    {1,0,1},
    {1,1,0},
    {1,1,1}
};

static GLubyte c_ind[6][4] =
{
    {0,2,6,4},
    {1,5,7,3},
    {0,4,5,1},
    {2,3,7,6},
    {0,1,3,2},
    {4,6,7,5}
};

static void getNormal3p(GLfloat x1, GLfloat y1, GLfloat z1, GLfloat x2, GLfloat y2, GLfloat z2, GLfloat x3, GLfloat y3, GLfloat z3)
{
    GLfloat Ux, Uy, Uz, Vx, Vy, Vz, Nx, Ny, Nz;

    Ux = x2-x1;
    Uy = y2-y1;
    Uz = z2-z1;

    Vx = x3-x1;
    Vy = y3-y1;
    Vz = z3-z1;

    Nx = Uy*Vz - Uz*Vy;
    Ny = Uz*Vx - Ux*Vz;
    Nz = Ux*Vy - Uy*Vx;

    glNormal3f(Nx,Ny,Nz);
}

void cube(float r,float g,float b)
{

    glBegin(GL_QUADS);
    glColor3d(r,g,b);
    for (GLint i = 0; i <6; i++)
    {
        getNormal3p(v_cube[c_ind[i][0]][0], v_cube[c_ind[i][0]][1], v_cube[c_ind[i][0]][2],
                    v_cube[c_ind[i][1]][0], v_cube[c_ind[i][1]][1], v_cube[c_ind[i][1]][2],
                    v_cube[c_ind[i][2]][0], v_cube[c_ind[i][2]][1], v_cube[c_ind[i][2]][2]);

        for (GLint j=0; j<4; j++)
        {
            glVertex3fv(&v_cube[c_ind[i][j]][0]);
        }
    }
    glEnd();
}

void color(double x, double y, double z)
{
    cube(x, y, z);
}

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-3, 3, -3, 3, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(eyeX,eyeY,eyeZ, lookX,lookY,lookZ, 0,1,0);
    glViewport(0, 0, width, height);


    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPopMatrix();


    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslated(-16,10,-15);

    glPushMatrix();
    glPushMatrix();
    glTranslated(-22,-22,20);
    glScaled(15,28,10);
    cube(.6,.3,.1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-22.2,5,30.1);
    glScaled(15,.1,0);
    cube(0,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-7,5,20);
    glScaled(.1,.1,10);
    cube(0,0,0);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-7,-22,30.1);
    glScaled(.1,28,.1);
    cube(0,0,0);
    glPopMatrix();

//Window0
    glPushMatrix();
    glPushMatrix();
    glTranslated(0,5,0);
    glPushMatrix();
    glTranslated(-28,-10,0);
    glScaled(-.8,1,1);
    glPushMatrix();
    glTranslated(-10,0,0);
    glPushMatrix();
    glTranslated(0,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
//window2
    glPushMatrix();
    glTranslated(4.5,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();

    glPopMatrix();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-1,0,0);
//Window1
    glPushMatrix();
    glTranslated(0,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
//window2
    glPushMatrix();
    glTranslated(4.5,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPopMatrix();
//Window1
    glPushMatrix();
    glPushMatrix();
    glTranslated(-28,-10,0);
    glScaled(-.8,1,1);
    glPushMatrix();
    glTranslated(-10,0,0);
    glPushMatrix();
    glTranslated(0,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-13.5,-9,30.1);
    glScaled(2,1,0);
    cube(0,0,0);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
//window2
    glPushMatrix();
    glTranslated(4.5,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-1,0,0);
//Window1
    glPushMatrix();
    glTranslated(0,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
//window2
    glPushMatrix();
    glTranslated(4.5,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
//Window0
    glPushMatrix();
    glTranslated(0,10,0);
    glPushMatrix();
    glTranslated(0,5,0);
    glPushMatrix();
    glTranslated(-28,-10,0);
    glScaled(-.8,1,1);
    glPushMatrix();
    glTranslated(-10,0,0);
    glPushMatrix();
    glTranslated(0,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
//window2
    glPushMatrix();
    glTranslated(4.5,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();

    glPopMatrix();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-1,0,0);
//Window1
    glPushMatrix();
    glTranslated(0,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
//window2
    glPushMatrix();
    glTranslated(4.5,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPopMatrix();
//Window1
    glPushMatrix();
    glPushMatrix();
    glTranslated(-28,-10,0);
    glScaled(-.8,1,1);
    glPushMatrix();
    glTranslated(-10,0,0);
    glPushMatrix();
    glTranslated(0,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
//window2
    glPushMatrix();
    glTranslated(4.5,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-1,0,0);
//Window1
    glPushMatrix();
    glTranslated(0,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
//window2
    glPushMatrix();
    glTranslated(4.5,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
//Window0
    glPushMatrix();
    glTranslated(0,20,0);
    glPushMatrix();

    glPushMatrix();
    glTranslated(-28,-10,0);
    glScaled(-.8,1,1);
    glPushMatrix();
    glTranslated(-10,0,0);
    glPushMatrix();
    glTranslated(0,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
//window2
    glPushMatrix();
    glTranslated(4.5,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();

    glPopMatrix();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-1,0,0);
//Window1
    glPushMatrix();
    glTranslated(0,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
//window2
    glPushMatrix();
    glTranslated(4.5,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPopMatrix();
//Window1
    glPushMatrix();
    glPushMatrix();
    glTranslated(-28,-10,0);
    glScaled(-.8,1,1);
    glPushMatrix();
    glTranslated(-10,0,0);
    glPushMatrix();
    glTranslated(0,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
//window2
    glPushMatrix();
    glTranslated(4.5,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPushMatrix();
    glTranslated(-1,0,0);
//Window1
    glPushMatrix();
    glTranslated(0,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
//window2
    glPushMatrix();
    glTranslated(4.5,0,0);
    glPushMatrix();
    glTranslated(-14,-10,30.1);
    glScaled(2,3,0);
    cube(.6,.8,.8);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-14.2,-10.2,30.1);
    glScaled(2.4,3.4,0);
    cube(0,0,0);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();


    //2 len
    glPushMatrix();
    glTranslated(-30,-16,30);
    glScaled(200,0.2,0);
    cube(1.0,1.0,1.0);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-30,-11,30);
    glScaled(200,0.2,0);
    cube(1.0,1.0,1.0);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-30,-21,30);
    glScaled(200,0.2,0);
    cube(1.0,1.0,1.0);
    glPopMatrix();


    //2nd road
    glPushMatrix();
    glTranslated(-2,-22,-40);
    glScaled(20,1,60);
    cube(0,0,0);
    glPopMatrix();




    //road start color change here
    glPushMatrix();
    glTranslated(-2,-22,-49.9);
    glScaled(0.5,1.1,60);
    cube(0.54,0.53,0.53);
    glPopMatrix();

    glPushMatrix();
    glTranslated(15.5,-22,-49.9);
    glScaled(0.5,1.1,60);
    cube(0.54,0.53,0.53);
    glPopMatrix();

//back side view/sky
    glPushMatrix();
    glTranslated(-150,-19,-40);
    glScaled(400,200,0);
    cube(0,0.74,1);           //sky color
    glPopMatrix();

    glPushMatrix();
    glTranslated(10,-13.5,-15);
    glScaled(100,0.5,40);
    cube(0,1,0);  //build down field
    glPopMatrix();

//left bulding ground block

    glPushMatrix();
    glTranslated(-100,-13.5,-15);
    glScaled(100,.1,40);
    cube(0,1,0);
    glPopMatrix();

    //final building

    glPushMatrix();
    glTranslated(5,14,2);
    glScaled(.8,.9,.4);  //building scaled here

    glPushMatrix();
    glTranslated(17,-2,-3);
    glPushMatrix();
    glTranslated(-16,-5,33);
    glScaled(5,3,.1);
    cube(1,1,0.5); //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-10,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);  ////window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-15,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);  //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-20,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);   //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-25,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);   //window block
    glPopMatrix();

    glPushMatrix();
    glTranslated(-23,-5,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);   //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-23,-10,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);  //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-23,-15,33);
    glScaled(5,3,.1);
    cube(1,1,0.5); //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-23,-20,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);   //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-23,-25,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);   //window block
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();

    glPushMatrix();
    glTranslated(-16,-5,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);   //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-10,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);  //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-15,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);   //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-20,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);   //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-25,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);  //window block

    glPopMatrix();

    glPushMatrix();
    glTranslated(-23,-5,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);   //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-23,-10,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);   //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-23,-15,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);   //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-23,-20,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);   //window block
    glPopMatrix();
    glPushMatrix();
    glTranslated(-23,-25,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);    //window block
    glPopMatrix();
    glPopMatrix();
    //seu logo text start here
    glPushMatrix();
    glTranslated(21,-10,3);
    glScaled(.5,.5,1);
    glPushMatrix();
    glTranslated(-20,1,30);
    glScaled(4,1,.5);
    cube(1,1,1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-20,9,30);
    glScaled(5,1,.5);
    cube(1,1,1);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-16,1,30);
    glScaled(1,4,.5);
    cube(1,1,1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-20,5,30);
    glScaled(5,1,.5);
    cube(1,1,1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-20,5,30);
    glScaled(1,4,.5);
    cube(1,1,1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-12,1,30);
    glScaled(5,1,.5);
    cube(1,1,1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-12,1,30);
    glScaled(1,9,.5);
    cube(1,1,1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-12,5,30);
    glScaled(5,1,.5);
    cube(1,1,1);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-12,9,30);
    glScaled(5,1,.5);
    cube(1,1,1);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-4,1,30);
    glScaled(1,9,.5);
    cube(1,1,1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1,1,30);
    glScaled(1,9,.5);
    cube(1,1,1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-4,1,30);
    glScaled(5,1,.5);
    cube(1,1,1);
    glPopMatrix();
    glPopMatrix();


//seu logo text end here

//building color start here

    glPushMatrix();
    glTranslated(-25,-30,0);
    glScaled(50,40,30);
    cube(0.8,0.5,0.2);
    glPopMatrix();

//building color end here

//building top shade start here

    glPushMatrix();
    glPushMatrix();
    glTranslated(-25,10,0);
    glScaled(1,3,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-25,10,29);
    glScaled(1,3,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-25,10,20);
    glScaled(1,3,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-25,10,10);
    glScaled(1,3,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslated(49,0,0);
    glPushMatrix();
    glTranslated(-25,10,0);
    glScaled(1,3,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-25,10,29);
    glScaled(1,3,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-25,10,20);
    glScaled(1,3,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-25,10,10);
    glScaled(1,3,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();
    glPopMatrix();


//right grey block changed into big start here
    glPushMatrix();
    glTranslated(10,-30,30);
    glScaled(15,38,3);
    cube(0.5,0.5,0.5);
    glPopMatrix();
//right grey block changed into big start here
    glPushMatrix();
    glTranslated(-25,-30,30);
    glScaled(15,30,3);
    cube(0.5,0.5,0.5);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-25,13,0);
    glScaled(1,1,30);
    cube(0.5,0.5,0.5);
    glPopMatrix();


    glPushMatrix();
    glTranslated(24,13,0);
    glScaled(1,1,30);
    cube(0.5,0.5,0.5);
    glPopMatrix();



    glPushMatrix();
    glTranslated(8,10,0);
    glScaled(1,3,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-7,10,0);
    glScaled(1,3,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-25,13,0);
    glScaled(50,1,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-25,13,29);
    glScaled(50,1,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-5,9,28);
    glScaled(1,5,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();


    glPushMatrix();
    glTranslated(5,9,28);
    glScaled(1,5,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
//building top shade start here


    glutSwapBuffers();
}

static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'w':
        eyeY=eyeY+0.1;
        break;
    case 's':
        eyeY=eyeY-0.1;
        break;
    case 'd':
        eyeX=eyeX+0.1;
        break;
    case 'a':
        eyeX=eyeX-0.1;
        break;

    case 'i':
        lookY=lookY+0.1;
        break;
    case 'k':
        lookY=lookY-0.1;
        break;
    case 'j':
        lookX=lookX+0.1;
        break;
    case 'l':
        lookX=lookX-0.1;
        break;


    case '+':
        eyeZ=eyeZ+0.1;
        break;
    case '-':
        eyeZ=eyeZ-0.1;
        break;

    }

    glutPostRedisplay();
}


int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(1000,1000);
    glutCreateWindow("Graphics Lab Project Final ");

    glShadeModel( GL_SMOOTH );
    glEnable( GL_DEPTH_TEST );

    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutMainLoop();

    return 0;
}
