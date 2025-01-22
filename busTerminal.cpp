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
#include<mmsystem.h>

using namespace std;

const int width = 1500;
const int height = 1000;

GLfloat eyeX = 15;
GLfloat eyeY = 25;
GLfloat eyeZ = 100;

GLfloat lookX = 15;
GLfloat lookY = 2;
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

//Land
        glPushMatrix();
        glTranslated(-100,-0.3,-100);
       glScaled(250,0.2,200);
       cube(0.5,0.5,0.4);
       glPopMatrix();


       //Road
       glPushMatrix();
               glTranslated(0,.3,-100);
        glScaled(30,0.2,200);
       cube(0.1,0.1,0.1);
       glPopMatrix();


       //footroad

       glPushMatrix();
               glTranslated(-3,.5,20);
        glScaled(-42,0.2,20);
       cube(0.1,0.1,0.1);
       glPopMatrix();


       //d

  glPushMatrix();
               glTranslated(-0,.5,21);
        glScaled(-45,0.3,1);
       cube(1,1,1);
       glPopMatrix();



//d2

 glPushMatrix();
               glTranslated(-0,.5,39);
        glScaled(-45,0.3,1);
       cube(1,1,1);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-0,.5,30);
        glScaled(-45,0.3,1);
       cube(1,1,1);
       glPopMatrix();


       //edge divider of two side

              glPushMatrix();
               glTranslated(-1,.3,-100);
        glScaled(1,0.3,200);
       cube(1,1,1);
       glPopMatrix();

              glPushMatrix();
               glTranslated(30,.3,-100);
        glScaled(1,0.3,200);
       cube(1,1,1);
       glPopMatrix();

       //middle divider
glPushMatrix();
               glTranslated(15,.3,-100);
        glScaled(1,0.3,200);
       cube(1,1,1);
       glPopMatrix();

 // Dubai famous frame right
        glPushMatrix();
        glTranslated(30,3,70);
        glScaled(3,25,3);
       cube(0,1,0);
       glPopMatrix();

       // Dubai famous frame left

       glPushMatrix();
        glTranslated(0,3,70);
        glScaled(-3,25,3);
       cube(0,1,0);
       glPopMatrix();


       //  Dubai famous frame top side code
       glPushMatrix();
        glTranslated(0,25,70);
        glScaled(30,2,3);
       cube(1,1,1);
       glPopMatrix();

//footpath
        glPushMatrix();
               glTranslated(-6.5,.3,-100);
        glScaled(5,1.5,200);
       cube(1.0, 0.5, 0.0);
       glPopMatrix();

       //road light
             glPushMatrix();
               glTranslated(-3,1.6,0);
        glScaled(1,0.3,2);
       cube(1,1,1);
       glPopMatrix();

glPushMatrix();
               glTranslated(-3,1.6,0);
        glScaled(.25,9,.25);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,10,0);
        glScaled(3,.5,1);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,1.6,10);
        glScaled(1,0.3,2);
       cube(1,1,1);
       glPopMatrix();

glPushMatrix();
               glTranslated(-3,1.6,10);
        glScaled(.25,9,.25);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,10,10);
        glScaled(3,.5,1);
       cube(1,1,1);
       glPopMatrix();

  glPushMatrix();
               glTranslated(-3,1.6,20);
        glScaled(1,0.3,2);
       cube(1,1,1);
       glPopMatrix();

glPushMatrix();
               glTranslated(-3,1.6,20);
        glScaled(.25,9,.25);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,10,20);
        glScaled(3,.5,1);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,1.6,30);
        glScaled(1,0.3,2);
       cube(1,1,1);
       glPopMatrix();

glPushMatrix();
               glTranslated(-3,1.6,30);
        glScaled(.25,9,.25);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,10,30);
        glScaled(3,.5,1);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,1.6,40);
        glScaled(1,0.3,2);
       cube(1,1,1);
       glPopMatrix();

glPushMatrix();
               glTranslated(-3,1.6,40);
        glScaled(.25,9,.25);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,10,40);
        glScaled(3,.5,1);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,1.6,50);
        glScaled(1,0.3,2);
       cube(1,1,1);
       glPopMatrix();

glPushMatrix();
               glTranslated(-3,1.6,50);
        glScaled(.25,9,.25);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,10,50);
        glScaled(3,.5,1);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,1.6,60);
        glScaled(1,0.3,2);
       cube(1,1,1);
       glPopMatrix();

glPushMatrix();
               glTranslated(-3,1.6,60);
        glScaled(.25,9,.25);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,10,60);
        glScaled(3,.5,1);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,1.6,80);
        glScaled(1,0.3,2);
       cube(1,1,1);
       glPopMatrix();

glPushMatrix();
               glTranslated(-3,1.6,80);
        glScaled(.25,9,.25);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,10,80);
        glScaled(3,.5,1);
       cube(1,1,1);
       glPopMatrix();

          glPushMatrix();
               glTranslated(-3,1.6,90);
        glScaled(1,.3,2);
       cube(1,1,1);
       glPopMatrix();


glPushMatrix();
               glTranslated(-3,1.6,90);
        glScaled(.25,9,.25);
       cube(1,1,1);
       glPopMatrix();

             glPushMatrix();
               glTranslated(-3,10,90);
        glScaled(3,.5,1);
       cube(1,1,1);
       glPopMatrix();


//building
//6th building
  glPushMatrix();
       glTranslated(35,0,0);
       glScaled(4,15,4);
       cube(0,1,0.5);
       glPopMatrix();

        // window
        glPushMatrix();
       glTranslated(36,12,4);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,9,4);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,6,4);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,3,4);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

        //left window

       glPushMatrix();
       glTranslated(37.9,12,1);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,12,2.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,9,1);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,9,2.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,6,1);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,6,2.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

         //door
       glPushMatrix();
       glTranslated(37.9,0,1);
       glScaled(-3,5,2);
       cube(0,0,0);
       glPopMatrix();


//5th building
glPushMatrix();
       glTranslated(35,0,20);
       glScaled(4,15,4);
       cube(1,1,1);
       glPopMatrix();

        // window
        glPushMatrix();
       glTranslated(36,12,24);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,9,24);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,6,24);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,3,24);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

        //left window

       glPushMatrix();
       glTranslated(37.9,12,21);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,12,22.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,9,21);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,9,22.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,6,21);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,6,22.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

         //door
       glPushMatrix();
       glTranslated(37.9,0,21);
       glScaled(-3,5,2);
       cube(0,0,0);
       glPopMatrix();


       //4th building
glPushMatrix();
       glTranslated(35,0,40);
       glScaled(4,15,4);
       cube(0.7,0.9,0.6);
       glPopMatrix();

        // window
        glPushMatrix();
       glTranslated(36,12,44);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,9,44);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,6,44);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,3,44);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

        //left window

       glPushMatrix();
       glTranslated(37.9,12,41);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,12,42.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,9,41);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,9,42.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,6,41);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,6,42.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

         //door
       glPushMatrix();
       glTranslated(37.9,0,41);
       glScaled(-3,5,2);
       cube(0,0,0);
       glPopMatrix();


       //3rd  building
       glPushMatrix();
       glTranslated(35,0,60);
       glScaled(4,15,4);
       cube(0.5,0.8,0.9);
       glPopMatrix();

       // window
        glPushMatrix();
       glTranslated(36,12,64);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,9,64);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,6,64);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,3,64);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       //left window

       glPushMatrix();
       glTranslated(37.9,12,61);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,12,62.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,9,61);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,9,62.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,6,61);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,6,62.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

       //door
       glPushMatrix();
       glTranslated(37.9,0,61);
       glScaled(-3,5,2);
       cube(0,0,0);
       glPopMatrix();

    //2nd  building
       glPushMatrix();
       glTranslated(35,0,78);
       glScaled(4,15,4);
       cube(255, 218, 185 );
       glPopMatrix();

       // window
        glPushMatrix();
       glTranslated(36,12,82);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,9,82);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,6,82);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(36,3,82);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       //left window

       glPushMatrix();
       glTranslated(37.9,12,79);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,12,80.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,9,79);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,9,80.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,6,79);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(37.9,6,80.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

       //door
       glPushMatrix();
       glTranslated(37.9,0,79);
       glScaled(-3,5,2);
       cube(0,0,0);
       glPopMatrix();

 //1st  building
       glPushMatrix();
       glTranslated(35,0,90);
       glScaled(4,15,4);
       cube(0,0.8,0.8);
       glPopMatrix();

       //window
       glPushMatrix();
       glTranslated(37,12,94);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();


        glPushMatrix();
       glTranslated(37,9,94);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();


       glPushMatrix();
       glTranslated(37,6,94);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();


       glPushMatrix();
       glTranslated(37,3,94);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       //left windows
       glPushMatrix();
       glTranslated(37.9,9,91);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();


       glPushMatrix();
       glTranslated(37.9,9,92.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();


       glPushMatrix();
       glTranslated(37.9,12,91);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();


       glPushMatrix();
       glTranslated(37.9,12,92.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();


              glPushMatrix();
       glTranslated(37.9,6,91);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();


       glPushMatrix();
       glTranslated(37.9,6,92.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

 //door
       glPushMatrix();
       glTranslated(37.9,0,91);
       glScaled(-3,5,2);
       cube(0,0,0);
       glPopMatrix();


// back1st  building
glPushMatrix();
       glTranslated(50,0,92);
       glScaled(4,15,4);
       cube(1,1,1);
       glPopMatrix();

       //window
       glPushMatrix();
       glTranslated(52,12,96);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(52,8,96);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();


       glPushMatrix();
       glTranslated(52,4,96);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       //left windows
       glPushMatrix();
       glTranslated(52.9,12,93.5);
       glScaled(-3,2.5,1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(52.9,8,93.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

 //door
       glPushMatrix();
       glTranslated(52.9,0,93);
       glScaled(-3,5,2);
       cube(0,0,0);
       glPopMatrix();

//back 2nd  building
       glPushMatrix();
       glTranslated(80,0,95);
       glScaled(4,15,4);
       cube(0.5,0.9,1);
       glPopMatrix();

       //window
       glPushMatrix();
       glTranslated(82,12,99);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(82,8,99);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();


       glPushMatrix();
       glTranslated(82,4,99);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

//left windows
       glPushMatrix();
       glTranslated(82.9,12,96.5);
       glScaled(-3,2.5,1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(82.9,8,96.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        //door
       glPushMatrix();
       glTranslated(82.9,0,96);
       glScaled(-3,5,2);
       cube(0,0,0);
       glPopMatrix();

       //back 3rd  building
       glPushMatrix();
       glTranslated(110,0,85);
       glScaled(4,15,4);
       cube(0.5,0.4,0.8);
       glPopMatrix();

       //window
       glPushMatrix();
       glTranslated(112,12,89);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(112,8,89);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();


       glPushMatrix();
       glTranslated(112,4,89);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       //left windows
       glPushMatrix();
       glTranslated(112.9,12,86.5);
       glScaled(-3,2.5,1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(112.9,8,86.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        //door
       glPushMatrix();
       glTranslated(112.9,0,86);
       glScaled(-3,5,2);
       cube(0,0,0);
       glPopMatrix();

//back 4th  building
       glPushMatrix();
       glTranslated(110,0,75);
       glScaled(4,15,4);
       cube(05,0.5,0.5);
       glPopMatrix();

       //window
       glPushMatrix();
       glTranslated(112,12,79);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(112,8,79);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();


       glPushMatrix();
       glTranslated(112,4,79);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       //left windows
       glPushMatrix();
       glTranslated(112.9,12,76.5);
       glScaled(-3,2.5,1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(112.9,8,76.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        //door
       glPushMatrix();
       glTranslated(112.9,0,76);
       glScaled(-3,5,2);
       cube(0,0,0);
       glPopMatrix();

          //back 5th  building
       glPushMatrix();
       glTranslated(152,0,60);
       glScaled(4,15,4);
       cube(0.5,1,0.2);
       glPopMatrix();

       //window
       glPushMatrix();
       glTranslated(154,12,64);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(154,8,64);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();


       glPushMatrix();
       glTranslated(154,4,64);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       //left windows
       glPushMatrix();
       glTranslated(154.9,12,61.5);
       glScaled(-3,2.5,1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(154.9,8,61.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        //door
       glPushMatrix();
       glTranslated(154.9,0,61);
       glScaled(-3,5,2);
       cube(0,0,0);
       glPopMatrix();

         //back 6th  building
              glPushMatrix();
       glTranslated(80,0,75);
       glScaled(4,15,4);
       cube(0.4,0.6,0.6);
       glPopMatrix();

       //window
       glPushMatrix();
       glTranslated(82,12,79);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(82,8,79);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();


       glPushMatrix();
       glTranslated(82,4,79);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

       //left windows
       glPushMatrix();
       glTranslated(82.9,12,76.5);
       glScaled(-3,2.5,1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(82.9,8,76.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        //door
       glPushMatrix();
       glTranslated(82.9,0,76);
       glScaled(-3,5,2);
       cube(0,0,0);
       glPopMatrix();

         //back 7th building
              glPushMatrix();
       glTranslated(60,0,68);
       glScaled(4,15,4);
       cube(1,1,0);
       glPopMatrix();

       //window
       glPushMatrix();
       glTranslated(62,12,72);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(62,8,72);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();


       glPushMatrix();
       glTranslated(62,4,72);
       glScaled(1,2,.1);
       cube(0,0,0);
       glPopMatrix();

//left windows
       glPushMatrix();
       glTranslated(62.9,12,69.5);
       glScaled(-3,2.5,1);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(62.9,8,69.5);
       glScaled(-3,2,1);
       cube(0,0,0);
       glPopMatrix();

        //door
       glPushMatrix();
       glTranslated(62.9,0,69);
       glScaled(-3,5,2);
       cube(0,0,0);
       glPopMatrix();

       //School Building
  glPushMatrix();
       glTranslated(55,0,5);
       glScaled(45,15,4);
       cube(1,0.8,0.6);
       glPopMatrix();


       glPushMatrix();
       glTranslated(55,15,5);
       glScaled(25,5,4);
       cube(1,0.8,0.6);
       glPopMatrix();


       glPushMatrix();
       glTranslated(55,20,5);
       glScaled(10,5,4);
       cube(1,0.8,0.6);
       glPopMatrix();

glPushMatrix();
       glTranslated(55,15,5);
       glScaled(25,0.2,4.5);
       cube(0,0,0);
       glPopMatrix();


// bottom door
       glPushMatrix();
       glTranslated(75,0,5);
       glScaled(2.5,5,5);
       cube(0,0,0);
       glPopMatrix();
//top door.
       glPushMatrix();
       glTranslated(75,8,5);
       glScaled(2.5,5,5);
       cube(0,0,0);
       glPopMatrix();

//divider1
glPushMatrix();
       glTranslated(54,7,6);
       glScaled(46,.5,4);
       cube(0,0,0);
       glPopMatrix();

//windows top left
glPushMatrix();
       glTranslated(68,10,5.5);
       glScaled(2,3,5);
       cube(0,0,0);
       glPopMatrix();

      glPushMatrix();
      glTranslated(62,10,5.5);
      glScaled(2,3,5);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(56,10,5.5);
       glScaled(2,3,5);
       cube(0,0,0);
       glPopMatrix();


       //windows top right
glPushMatrix();
       glTranslated(82,10,5.5);
       glScaled(2,3,5);
       cube(0,0,0);
       glPopMatrix();

       glPushMatrix();
       glTranslated(88,10,5.5);
       glScaled(2,3,5);
       cube(0,0,0);
       glPopMatrix();

glPushMatrix();
       glTranslated(94,10,5.5);
       glScaled(2,3,5);
       cube(0,0,0);
       glPopMatrix();

//windows bottom left
        glPushMatrix();
       glTranslated(68,1,5.5);
       glScaled(2,3,5);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(62,1,5.5);
       glScaled(2,3,5);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(56,1,5.5);
       glScaled(2,3,5);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(82,1,5.5);
       glScaled(2,3,5);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(88,1,5.5);
       glScaled(2,3,5);
       cube(0,0,0);
       glPopMatrix();

        glPushMatrix();
       glTranslated(94,1,5.5);
       glScaled(2,3,5);
       cube(0,0,0);
       glPopMatrix();


       //Field
 glPushMatrix();
       glTranslated(45,.2,8);
       glScaled(100,.2,50);
       cube(0.2,0.8,0);
       glPopMatrix();

       //Flag
       //stand
        glPushMatrix();
       glTranslated(75,0,15);
       glScaled(.75,12,.1);
       cube(1,1,1);
       glPopMatrix();

       //Square
        glPushMatrix();
       glTranslated(75,11,15);
       glScaled(5,4,.1);
       cube(0,0.5,0);
       glPopMatrix();

       //Circle
        glPushMatrix();
       glTranslated(77,12.5,15);
       glScaled(1,1,.2);
       cube(1,0,0);
       glPopMatrix();

         //River
       glPushMatrix();
               glTranslated(-93,.1,-100);
        glScaled(38,0.2,200);
       cube(0,1,1);
       glPopMatrix();


       //River Boarder

glPushMatrix();
               glTranslated(-93,.1,-100);
        glScaled(.5,1,200);
       cube(.5,.1,.1);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-55,.1,-100);
        glScaled(.5,1,200);
       cube(.5,.1,.1);
       glPopMatrix();


     //River seat tiles
        glPushMatrix();
               glTranslated(-50,.3,85);
        glScaled(5.5,1,10);
       cube(0.8, 0.7, 0.5);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-50,.3,65);
        glScaled(5.5,1,10);
       cube(0.8, 0.7, 0.5);

       glPopMatrix();

       glPushMatrix();
               glTranslated(-50,.3,45);
        glScaled(5.5,1,10);
       cube(0.8, 0.7, 0.5);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-50,.3,25);
        glScaled(5.5,1,10);
       cube(0.8, 0.7, 0.5);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-50,.3,5);
        glScaled(5.5,1,10);
       cube(0.8, 0.7, 0.5);
       glPopMatrix();

        glPushMatrix();
               glTranslated(-50,.3,-15);
        glScaled(5.5,1,10);
       cube(0.8, 0.7, 0.5);
       glPopMatrix();

        glPushMatrix();
               glTranslated(-50,.3,-35);
        glScaled(5.5,1,10);
       cube(0.8, 0.7, 0.5);
       glPopMatrix();

        glPushMatrix();
               glTranslated(-50,.3,-55);
        glScaled(5.5,1,10);
      cube(0.8, 0.7, 0.5);
       glPopMatrix();

        glPushMatrix();
               glTranslated(-50,.3,-75);
        glScaled(5.5,1,10);
       cube(0.8, 0.7, 0.5);
       glPopMatrix();

        glPushMatrix();
               glTranslated(-50,.3,-95);
        glScaled(5.5,1,10);
       cube(0.8, 0.7, 0.5);
       glPopMatrix();

         //Seat stand
         //1
       glPushMatrix();
               glTranslated(-48,.3,86.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-48,.3,93.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

       //seat
        glPushMatrix();
               glTranslated(-49,3.6,86.5);
        glScaled(4.5,1,8);
       cube(0.5, 0.2, 0.0);
       glPopMatrix();

       //2
glPushMatrix();
               glTranslated(-48,.3,66.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-48,.3,73.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

         //seat
        glPushMatrix();
               glTranslated(-49,3.6,66.5);
        glScaled(4.5,1,8);
       cube(0.5, 0.2, 0.0);
       glPopMatrix();

   //3
glPushMatrix();
               glTranslated(-48,.3,46.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-48,.3,53.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

         //seat
        glPushMatrix();
               glTranslated(-49,3.6,46.5);
        glScaled(4.5,1,8);
       cube(0.5, 0.2, 0.0);
       glPopMatrix();

           //4
glPushMatrix();
               glTranslated(-48,.3,26.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-48,.3,33.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

         //seat
        glPushMatrix();
               glTranslated(-49,3.6,26.5);
        glScaled(4.5,1,8);
       cube(0.5, 0.2, 0.0);
       glPopMatrix();

           //5
glPushMatrix();
               glTranslated(-48,.3,6.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-48,.3,13.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

         //seat
        glPushMatrix();
               glTranslated(-49,3.6,6.5);
        glScaled(4.5,1,8);
       cube(0.5, 0.2, 0.0);
       glPopMatrix();

        //6
glPushMatrix();
               glTranslated(-48,.3,-13.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-48,.3,-6.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

        //seat
        glPushMatrix();
               glTranslated(-49,3.6,-13.5);
        glScaled(4.5,1,8);
       cube(0.5, 0.2, 0.0);
       glPopMatrix();

        //7
glPushMatrix();
               glTranslated(-48,.3,-33.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-48,.3,-26.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

        //seat
        glPushMatrix();
               glTranslated(-49,3.6,-33.5);
        glScaled(4.5,1,8);
       cube(0.5, 0.2, 0.0);
       glPopMatrix();

        //8
glPushMatrix();
               glTranslated(-48,.3,-53.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-48,.3,-46.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

        //seat
        glPushMatrix();
               glTranslated(-49,3.6,-53.5);
        glScaled(4.5,1,8);
       cube(0.5, 0.2, 0.0);
       glPopMatrix();

        //9
glPushMatrix();
               glTranslated(-48,.3,-73.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-48,.3,-66.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

        //seat
        glPushMatrix();
               glTranslated(-49,3.6,-73.5);
        glScaled(4.5,1,8);
       cube(0.5, 0.2, 0.0);
       glPopMatrix();

        //10
glPushMatrix();
               glTranslated(-48,.3,-93.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-48,.3,-86.5);
        glScaled(1.5,3.5,1);
       cube(0, 0, 0);
       glPopMatrix();

        //seat
        glPushMatrix();
               glTranslated(-49,3.6,-93.5);
        glScaled(4.5,1,8);
       cube(0.5, 0.2, 0.0);
       glPopMatrix();


//Tree
       //tree base
glPushMatrix();
               glTranslated(-98,.3,70);
        glScaled(1.5,10,1);
       cube(0.8, 0.7, 0.4);
       glPopMatrix();

//leaf
glPushMatrix();
               glTranslated(-102,10,66);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-100,13,68);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-98,16,70);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
       glPopMatrix();

       //tree base
glPushMatrix();
               glTranslated(-98,.3,30);
        glScaled(1.5,10,1);
       cube(0.8, 0.7, 0.4);
       glPopMatrix();

//leaf
glPushMatrix();
               glTranslated(-102,10,26);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-100,13,28);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-98,16,30);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
       glPopMatrix();

       //tree base
glPushMatrix();
               glTranslated(-98,.3,-10);
        glScaled(1.5,10,1);
       cube(0.8, 0.7, 0.4);
       glPopMatrix();

//leaf
glPushMatrix();
               glTranslated(-102,10,-14);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-100,13,-12);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-98,16,-10);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
       glPopMatrix();

       //tree base
glPushMatrix();
               glTranslated(-98,.3,-50);
        glScaled(1.5,10,1);
       cube(0.8, 0.7, 0.4);
       glPopMatrix();

//leaf
glPushMatrix();
               glTranslated(-102,10,-54);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-100,13,-52);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(-98,16,-50);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
       glPopMatrix();

        //tree base behind school
glPushMatrix();
               glTranslated(68,15,1);
        glScaled(1.5,12,1);
       cube(0.8, 0.7, 0.4);
       glPopMatrix();

//leaf
glPushMatrix();
               glTranslated(64,27,-3);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(66,30,-1);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(68,33,1);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
       glPopMatrix();

         //tree base behind school
glPushMatrix();
               glTranslated(88,.3,1);
        glScaled(1.5,12,1);
       cube(0.8, 0.7, 0.4);
       glPopMatrix();

       //leaf
       glPushMatrix();
               glTranslated(84,12,-3);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(86,15,-1);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(88,18,1);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
       glPopMatrix();

         //tree base behind school
glPushMatrix();
               glTranslated(110,.3,6);
        glScaled(1.5,12,1);
       cube(0.8, 0.7, 0.4);
       glPopMatrix();

       //leaf
       glPushMatrix();
               glTranslated(106,12,2);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(108,15,4);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(110,18,6);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
       glPopMatrix();

        //tree base behind school
glPushMatrix();
               glTranslated(144,.3,-2);
        glScaled(1.5,14,1);
       cube(0.8, 0.7, 0.4);
       glPopMatrix();

       //leaf
       glPushMatrix();
               glTranslated(140,14,-6);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(142,17,-4);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(144,20,-2);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
       glPopMatrix();

 //tree base among buildings
glPushMatrix();
               glTranslated(37,.3,50);
        glScaled(1.5,10,1);
       cube(0.8, 0.7, 0.4);
       glPopMatrix();

       //leaf
       glPushMatrix();
               glTranslated(33,10,46);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(35,13,48);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(37,16,50);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
       glPopMatrix();


 //tree base among buildings
glPushMatrix();
               glTranslated(40,.3,70);
        glScaled(1.5,10,1);
       cube(0.8, 0.7, 0.4);
       glPopMatrix();

       //leaf
       glPushMatrix();
               glTranslated(36,10,66);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(38,13,68);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(40,16,70);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
       glPopMatrix();

        //tree base among buildings
glPushMatrix();
               glTranslated(110,.3,60);
        glScaled(1.5,10,1);
       cube(0.8, 0.7, 0.4);
       glPopMatrix();

       //leaf
       glPushMatrix();
               glTranslated(106,10,56);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(108,13,58);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(110,16,60);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
       glPopMatrix();

       //tree base among buildings
glPushMatrix();
               glTranslated(135,.3,75);
        glScaled(1.5,10,1);
       cube(0.8, 0.7, 0.4);
       glPopMatrix();

       //leaf
       glPushMatrix();
               glTranslated(131,10,71);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(133,13,73);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(135,16,75);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
       glPopMatrix();

        //tree base among buildings
glPushMatrix();
               glTranslated(65,.3,86);
        glScaled(1.5,10,1);
       cube(0.8, 0.7, 0.4);
       glPopMatrix();

       //leaf
       glPushMatrix();
               glTranslated(61,10,82);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(63,13,84);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(65,16,86);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
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
    PlaySound("ocean-wave-1",NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

    glutMainLoop();

    return 0;
}
