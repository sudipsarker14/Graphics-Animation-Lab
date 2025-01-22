#include <iostream>
#include<GL/gl.h>
#ifdef __APPLE__
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

GLfloat eyeX =0;
GLfloat eyeY = 0;
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

void color(double x, double y, double z){
    cube(x, y, z);
}
void circle(){

//circle

glPushMatrix();
glTranslated(-3,10,0);
glScaled(.5,.5,.3);
  color(1,0,0);
  glPushMatrix();
  glRotated(45,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(35,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(25,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(15,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(5,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(55,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(65,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(75,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(85,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(95,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(105,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(115,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(125,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(135,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(145,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(155,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(165,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(175,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(185,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(195,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(205,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(215,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(225,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(235,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(245,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(255,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(265,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(285,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(295,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(305,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(315,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(325,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(335,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(345,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(355,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(360,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(0,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(5,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(10,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(20,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(30,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(50,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(60,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
     glPopMatrix();

glPopMatrix();
}
    //choto ghor
void mini(){
    glPushMatrix();

    glScaled(.2,.3,.2);
    glPushMatrix();
    glTranslated(-30,0,0);
    glScaled(15,10,15);
    cube(0.0,0.0,1.0);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-28,4,0);
    glScaled(4,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-21,4,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();


    //mediam ghor

    glPushMatrix();
    glTranslated(-10,0,0);
    glScaled(15,20,15);
    cube(0.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-9,4,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-3,4,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-3,13,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-9,13,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();






    //boro ghor

    glPushMatrix();
    glTranslated(10,0,0);
    glScaled(15,36,15);
    cube(0.0,0.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(11,11,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();

    glPushMatrix();
    glTranslated(18,11,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();


    glPushMatrix();
    glTranslated(18,4,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();


    glPushMatrix();
    glTranslated(11,4,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();

    glPushMatrix();
    glTranslated(11,18,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();



    glPushMatrix();
    glTranslated(18,18,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();


        glPushMatrix();
    glTranslated(18,24,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();

        glPushMatrix();
    glTranslated(18,30,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();


        glPushMatrix();
    glTranslated(11,24,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();

            glPushMatrix();
    glTranslated(11,30,0);
    glScaled(5,4,16);
    cube(0.0,0.98,0.80);
    glPopMatrix();


    //1 window building big

        glPushMatrix();
    glTranslated(40,0,0);
    glScaled(20,40,10);
    cube(0.0,0.0,1.0);
    glPopMatrix();


        glPushMatrix();
    glTranslated(41,7,0);
    glScaled(15,3,13);
    cube(0.0,0.98,0.80);
    glPopMatrix();


           glPushMatrix();
    glTranslated(41,14,0);
    glScaled(15,3,13);
    cube(0.0,0.98,0.80);
    glPopMatrix();


           glPushMatrix();
    glTranslated(41,21,0);
    glScaled(15,3,13);
    cube(0.0,0.98,0.80);
    glPopMatrix();



           glPushMatrix();
    glTranslated(41,28,0);
    glScaled(15,3,13);
    cube(0.0,0.98,0.80);
    glPopMatrix();



           glPushMatrix();
    glTranslated(41,35,0);
    glScaled(15,3,13);
    cube(0.0,0.98,0.80);
    glPopMatrix();


    // red building

        glPushMatrix();
    glTranslated(15,0,13);
    glScaled(30,25,10);
    cube(1.0,0.0,0.0);
    glPopMatrix();


    glPushMatrix();
    glTranslated(17,5, 13);
    glScaled(22,2,13);
    cube(0.0,0.98,0.80);
    glPopMatrix();

    glPushMatrix();
    glTranslated(17,9, 13);
    glScaled(22,2,13);
    cube(0.0,0.98,0.80);
    glPopMatrix();


    glPushMatrix();
    glTranslated(17,13, 13);
    glScaled(22,2,13);
    cube(0.0,0.98,0.80);
    glPopMatrix();


    glPushMatrix();
    glTranslated(17,17, 13);
    glScaled(22,2,13);
    cube(0.0,0.98,0.80);
    glPopMatrix();


    glPushMatrix();
    glTranslated(17,21, 13);
    glScaled(22,2,13);
    cube(0.0,0.98,0.80);
    glPopMatrix();
    glPopMatrix();
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
glPushMatrix();
glTranslated(25,35,-40);
glScaled(2.5,2.5,1);
circle();

glPushMatrix();
glTranslated(40,-10,0);
mini();
glPopMatrix();
glPopMatrix();
    glPushMatrix();
    glTranslated(-12,-12,-10);
    mini();
    glPopMatrix();
   glPushMatrix();
glTranslated(-8,7,-25);
glPushMatrix();
        glTranslated(-22,-22,20);
       glScaled(15,28,10);
       cube(.5,.5,.4);
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

       //2nd house


       glPushMatrix();
       glTranslated(-16,8.5,-5.1);

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





       //2 lean
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


       //cross lean


       //first lean
        glPushMatrix();
       glTranslated(-30,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();


               glPushMatrix();
       glTranslated(-28,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

               glPushMatrix();
       glTranslated(-26,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

               glPushMatrix();
       glTranslated(-24,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
               glPushMatrix();
       glTranslated(-22,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

               glPushMatrix();
       glTranslated(-20,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

               glPushMatrix();
       glTranslated(-18,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

               glPushMatrix();
       glTranslated(-16,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

               glPushMatrix();
       glTranslated(-14,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

               glPushMatrix();
       glTranslated(-12,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

               glPushMatrix();
       glTranslated(-10,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

               glPushMatrix();
       glTranslated(-10,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();


               glPushMatrix();
       glTranslated(-8,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

               glPushMatrix();
       glTranslated(-6,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

               glPushMatrix();
       glTranslated(-4,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();


                      glPushMatrix();
       glTranslated(3.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                           glPushMatrix();
       glTranslated(5.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
                           glPushMatrix();
       glTranslated(7.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
                           glPushMatrix();
       glTranslated(7.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
                           glPushMatrix();
       glTranslated(9.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
                           glPushMatrix();
       glTranslated(11.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
                           glPushMatrix();
       glTranslated(13.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                           glPushMatrix();
       glTranslated(15.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                           glPushMatrix();
       glTranslated(17.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                           glPushMatrix();
       glTranslated(19.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
                           glPushMatrix();
       glTranslated(21.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                           glPushMatrix();
       glTranslated(23.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
                           glPushMatrix();
       glTranslated(25.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
                           glPushMatrix();
       glTranslated(27.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();


                           glPushMatrix();
       glTranslated(29.5,-13.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();


       //2nd lean

       glPushMatrix();
       glTranslated(-30,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(-28,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(-26,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(-24,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(-22,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(-20,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(-18,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(-16,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(-14,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(-12,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
                      glPushMatrix();
       glTranslated(-10,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
                      glPushMatrix();
       glTranslated(-8,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
                      glPushMatrix();
       glTranslated(-6,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(-4,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();


                      glPushMatrix();
       glTranslated(3.5,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(-30,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(5.5,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(7.5,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
                      glPushMatrix();
       glTranslated(9.5,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(11.5,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(13.5,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(15.5,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
                      glPushMatrix();
       glTranslated(17.5,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(19.5,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(21.5,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();
                      glPushMatrix();
       glTranslated(23.5,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(25.5,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(27.5,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();

                      glPushMatrix();
       glTranslated(29.5,-18.5,30);
       glScaled(1,0.2,0);
       cube(1.0,1.0,1.0);
       glPopMatrix();




       //2nd road
           glPushMatrix();
    glTranslated(-2,-22,-50);
    glScaled(30,1,60);
    cube(0.54,0.53,0.53);
    glPopMatrix();

glPushMatrix();
        glTranslated(-2,-22,-49.9);
    glScaled(0.5,1.1,60);
    cube(1.0,1.0,1.0);
    glPopMatrix();

glPushMatrix();
            glTranslated(27.5,-22,-49.9);
    glScaled(0.5,1.1,60);
    cube(1.0,1.0,1.0);
    glPopMatrix();


    //zebra cross

    glPushMatrix();
            glTranslated(13,-22,-49.9);
    glScaled(0.5,1.1,5);
    cube(1.0,1.0,1.0);
    glPopMatrix();

        glPushMatrix();
            glTranslated(13,-22,-40);
    glScaled(0.5,1.1,5);
    cube(1.0,1.0,1.0);
    glPopMatrix();

        glPushMatrix();
            glTranslated(13,-22,-30);
    glScaled(0.5,1.1,5);
    cube(1.0,1.0,1.0);
    glPopMatrix();

        glPushMatrix();
            glTranslated(13,-22,-20);
    glScaled(0.5,1.1,5);
    cube(1.0,1.0,1.0);
    glPopMatrix();

        glPushMatrix();
            glTranslated(13,-22,-10);
    glScaled(0.5,1.1,5);
    cube(1.0,1.0,1.0);
    glPopMatrix();

        glPushMatrix();
            glTranslated(13,-22,0);
    glScaled(0.5,1.1,5);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
            glTranslated(13,-22,2);
    glScaled(0.5,1.1,5);
    cube(1.0,1.0,1.0);
    glPopMatrix();


    //Lamp post

    glPushMatrix();
    glTranslated(13.1,-10.2,31.1);
    glScaled(0.2,3,0.2);
    cube(1.0,1.0,1.0);
    glPopMatrix();

        glPushMatrix();
    glTranslated(11.8,-8,31.1);
    glScaled(3,2,0.2);
    cube(0.0,0.0,0.80);
    glPopMatrix();


            glPushMatrix();
    glTranslated(12.2,-7.4,31.1);
    glScaled(0.5,0.5,0.5);
    cube(1.0,0,0);
    glPopMatrix();


                glPushMatrix();
    glTranslated(13.1,-7.4,31.1);
    glScaled(0.5,0.5,0.5);
    cube(1.0,1.0,0.0);
    glPopMatrix();

                    glPushMatrix();
    glTranslated(14,-7.4,31.1);
    glScaled(0.5,0.5,0.5);
    cube(0,1.0,0);
    glPopMatrix();

    //car 1

    //circle

    glPushMatrix();
    glTranslated(0,-13,30);
    glScaled(.1,.1,.1);
glPushMatrix();
glTranslated(8,0,0);
glScaled(.5,.5,.3);
  cube(0,0,0);
  glPushMatrix();
  glRotated(45,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(35,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(25,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(15,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(5,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(55,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(65,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(75,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(85,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(95,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(105,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(115,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(125,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(135,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(145,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(155,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(165,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(175,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(185,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(195,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(205,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(215,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(225,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(235,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(245,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(255,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(265,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(285,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(295,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(305,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(315,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(325,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(335,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(345,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(355,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(360,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(0,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(5,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(10,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(20,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(30,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(50,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(60,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
     glPopMatrix();
     //circle
glPushMatrix();
glTranslated(23,0,0);
glScaled(.5,.5,.3);
  cube(0,0,0);
  glPushMatrix();
  glRotated(45,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(35,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(25,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(15,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(5,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(55,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(65,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(75,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(85,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(95,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(105,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(115,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(125,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(135,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(145,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(155,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(165,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(175,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(185,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(195,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(205,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(215,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(225,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(235,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(245,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(255,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(265,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(285,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(295,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(305,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(315,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(325,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(335,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(345,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(355,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(360,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(0,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(5,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(10,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(20,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(30,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(50,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(60,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
     glPopMatrix();
     //car
      glPushMatrix();
        glTranslated(0,0,0);
       glScaled(25,10,10);
       cube(1,0,0);
       glPopMatrix();

  glPushMatrix();
        glTranslated(5,10,0);
       glScaled(15,5,10);
       cube(.8,.7,.5);
       glPopMatrix();
glPushMatrix();
        glTranslated(12,0,10.1);
       glScaled(1,10,1);
       cube(0,0,.0);
       glPopMatrix();
       glPushMatrix();
        glTranslated(8,10,10.1);
       glScaled(3,2,1);
       cube(0,0,.0);
       glPopMatrix();

  glTranslated(15,10,10.1);
       glScaled(3,2,1);
       cube(0,0,.0);
       glPopMatrix();

       glPopMatrix();


       //car 2



        //circle

    glPushMatrix();
    glTranslated(-10,-18,30);
    glScaled(.1,.1,.1);
glPushMatrix();
glTranslated(8,0,0);
glScaled(.5,.5,.3);
  cube(0,0,0);
  glPushMatrix();
  glRotated(45,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(35,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(25,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(15,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(5,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(55,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(65,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(75,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(85,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(95,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(105,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(115,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(125,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(135,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(145,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(155,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(165,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(175,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(185,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(195,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(205,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(215,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(225,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(235,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(245,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(255,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(265,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(285,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(295,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(305,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(315,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(325,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(335,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(345,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(355,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(360,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(0,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(5,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(10,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(20,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(30,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(50,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(60,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
     glPopMatrix();
     //circle
glPushMatrix();
glTranslated(23,0,0);
glScaled(.5,.5,.3);
  cube(0,0,0);
  glPushMatrix();
  glRotated(45,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(35,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(25,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(15,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(5,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(55,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(65,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(75,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(85,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(95,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(105,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(115,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(125,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(135,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(145,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(155,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(165,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(175,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(185,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(195,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(205,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(215,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(225,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(235,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(245,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(255,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(265,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(285,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(295,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(305,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(315,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(325,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(335,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(345,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(355,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(360,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(0,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(5,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(10,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(20,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(30,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(50,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(60,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
     glPopMatrix();
     //car
      glPushMatrix();
        glTranslated(0,0,0);
       glScaled(25,10,10);
       cube(1,0,0);
       glPopMatrix();

  glPushMatrix();
        glTranslated(5,10,0);
       glScaled(15,5,10);
       cube(.8,.7,.5);
       glPopMatrix();
glPushMatrix();
        glTranslated(12,0,10.1);
       glScaled(1,10,1);
       cube(0,0,.0);
       glPopMatrix();
       glPushMatrix();
        glTranslated(8,10,10.1);
       glScaled(3,2,1);
       cube(0,0,.0);
       glPopMatrix();

  glTranslated(15,10,10.1);
       glScaled(3,2,1);
       cube(0,0,.0);
       glPopMatrix();

       glPopMatrix();

       //car 3

        //circle

    glPushMatrix();
    glTranslated(10,-18,30);
    glScaled(.1,.1,.1);
glPushMatrix();
glTranslated(8,0,0);
glScaled(.5,.5,.3);
  cube(0,0,0);
  glPushMatrix();
  glRotated(45,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(35,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(25,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(15,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(5,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(55,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(65,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(75,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(85,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(95,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(105,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(115,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(125,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(135,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(145,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(155,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(165,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(175,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(185,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(195,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(205,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(215,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(225,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(235,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(245,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(255,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(265,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(285,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(295,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(305,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(315,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(325,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(335,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(345,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(355,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(360,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(0,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(5,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(10,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(20,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(30,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(50,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(60,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
     glPopMatrix();
     //circle
glPushMatrix();
glTranslated(23,0,0);
glScaled(.5,.5,.3);
  cube(0,0,0);
  glPushMatrix();
  glRotated(45,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(35,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(25,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(15,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(5,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(55,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(65,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(75,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(85,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(95,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(105,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(115,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(125,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(135,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(145,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(155,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(165,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(175,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(185,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(195,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(205,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(215,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(225,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(235,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(245,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(255,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(265,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(285,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(295,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(305,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(315,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(325,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(335,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(345,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(355,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(360,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(0,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(5,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(10,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(20,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(30,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(50,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
       glPushMatrix();
  glRotated(60,0,0,1);
       glPushMatrix();
        glTranslated(0,0,0);
       glScaled(2,10,1);
       cube(1,0,0);
       glPopMatrix();

     glPopMatrix();
     glPopMatrix();
     //car
      glPushMatrix();
        glTranslated(0,0,0);
       glScaled(25,10,10);
       cube(1,0,0);
       glPopMatrix();

  glPushMatrix();
        glTranslated(5,10,0);
       glScaled(15,5,10);
       cube(.8,.7,.5);
       glPopMatrix();
glPushMatrix();
        glTranslated(12,0,10.1);
       glScaled(1,10,1);
       cube(0,0,.0);
       glPopMatrix();
       glPushMatrix();
        glTranslated(8,10,10.1);
       glScaled(3,2,1);
       cube(0,0,.0);
       glPopMatrix();

  glTranslated(15,10,10.1);
       glScaled(3,2,1);
       cube(0,0,.0);
       glPopMatrix();

       glPopMatrix();



       //shohid minar
glPushMatrix();
glTranslated(-8,-12,20);
glScaled(.3,.4,.5);
       glPushMatrix();
    glTranslated(-30,0,0);
    glScaled(1,10,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-30,10,0);
    glScaled(6,1,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-24,0,0);
    glScaled(1,11,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-20,0,0);
    glScaled(1,13,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-20,13,0);
    glScaled(6,1,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-14,0,0);
    glScaled(1,14,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-9,0,0);
    glScaled(1,19,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-9,19,0);
    glScaled(12,1,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-3,0,0);
    glScaled(1,19,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(2,0,0);
    glScaled(1,19,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(6,0,0);
    glScaled(1,13,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(12,0,0);
    glScaled(1,14,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(6,13,0);
    glScaled(6,1,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(15,0,0);
    glScaled(1,10,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(21,0,0);
    glScaled(1,11,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(15,10,0);
    glScaled(6,1,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-30,0,0);
    glScaled(51,1,1);
    cube(0.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-30,0,0);
    glScaled(52.5,1,15);
    cube(0.3,.4,.1);
    glPopMatrix();











circle();
//back side view/sky
     glPushMatrix();
       glTranslated(-150,-19,-40);
       glScaled(400,200,0);
       cube(0,0.74,1);
       glPopMatrix();
   glPushMatrix();
       glTranslated(18,-13.5,-15);
       glScaled(100,.1,40);
       cube(0,1,0);
       glPopMatrix();

 glPushMatrix();
       glTranslated(-50,-13.5,-15);
       glScaled(50,.1,40);
       cube(0,1,0);
       glPopMatrix();





       //final building

       glPushMatrix();
glTranslated(28,5,2);
glScaled(.5,.5,.5);

glPushMatrix();
glTranslated(17,-2,-3);
    glPushMatrix();
    glTranslated(-16,-5,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-10,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-15,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-20,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-25,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();



     glPushMatrix();
    glTranslated(-23,-5,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPushMatrix();
    glTranslated(-23,-10,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPushMatrix();
    glTranslated(-23,-15,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPushMatrix();
    glTranslated(-23,-20,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPushMatrix();
    glTranslated(-23,-25,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPopMatrix();

glPushMatrix();
glTranslated(33,0,0);
    glPushMatrix();
    glTranslated(-16,-5,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-10,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-15,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-20,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-25,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();



     glPushMatrix();
    glTranslated(-23,-5,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPushMatrix();
    glTranslated(-23,-10,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPushMatrix();
    glTranslated(-23,-15,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPushMatrix();
    glTranslated(-23,-20,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPushMatrix();
    glTranslated(-23,-25,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPopMatrix();



glPushMatrix();
    glPushMatrix();
    glTranslated(-16,-5,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-10,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-15,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-20,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(-16,-25,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();



     glPushMatrix();
    glTranslated(-23,-5,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPushMatrix();
    glTranslated(-23,-10,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPushMatrix();
    glTranslated(-23,-15,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPushMatrix();
    glTranslated(-23,-20,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPushMatrix();
    glTranslated(-23,-25,33);
    glScaled(5,3,.1);
    cube(1,1,0.5);
    glPopMatrix();
     glPopMatrix();


//seu
 glPushMatrix();
 glTranslated(-10,2,0);
 glScaled(.7,.7,1);
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








    glPushMatrix();
    glTranslated(-25,-30,0);
    glScaled(50,40,30);
    cube(0.6,0.1,0.1);
    glPopMatrix();

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



    glPushMatrix();
    glTranslated(10,-30,30);
    glScaled(15,30,3);
    cube(0.5,0.5,0.5);
    glPopMatrix();

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
    glScaled(1,3,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();


    glPushMatrix();
    glTranslated(5,9,28);
    glScaled(1,3,1);
    cube(0.5,0.5,0.5);
    glPopMatrix();
    glPopMatrix();
 glPopMatrix();



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
    glutCreateWindow("Triangle-Demo");

    glShadeModel( GL_SMOOTH );
    glEnable( GL_DEPTH_TEST );

    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutMainLoop();

    return 0;
}
