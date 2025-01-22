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

GLfloat eyeX = 15;
GLfloat eyeY = 20;
GLfloat eyeZ = 70;

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

       // main ground
       glPushMatrix();
       glTranslated(-100,-0.3,-100);
       glScaled(1000,0,200);
       cube(.39,.34,.28);
       glPopMatrix();

        // lamppost
       glPushMatrix();
       glTranslated(4,5,54);
       glScaled(0.3,5,0.3);
        cube(1,1,1);
       glPopMatrix();


       // london bright 1
       glPushMatrix();
       glTranslated(-10,5,45);
       glScaled(2,15,0.3);
        cube(0,1,0);
       glPopMatrix();

        // london bright  side 1
       glPushMatrix();
       glTranslated(-3,5,45);
       glScaled(2,6,0.3);
        cube(0,1,0);
       glPopMatrix();


         // london bright  mid work
       glPushMatrix();
       glTranslated(-15.7,17,45);
       glScaled(6,1,0.3);
        cube(1,0,0);
       glPopMatrix();


        // london bright  mid work left
       glPushMatrix();
       glRotated(40,-24,10,45);
       glTranslated(-24,10,45);
       glScaled(6.5,1,0.3);
        cube(1,0,0);
       glPopMatrix();


        // london bright  mid work right
       glPushMatrix();
      glRotated(-40,-4,12,45);
       glTranslated(-7.8,10,45);
       glScaled(6.5,1,0.3);
        cube(.178,.34,.34);
       glPopMatrix();


         // river
       glPushMatrix();
       glTranslated(-55,0,-15);
       glScaled(45,1,50);
        cube(0,0,1);
       glPopMatrix();


       // london bright 2
       glPushMatrix();
       glTranslated(-18,5,45);
       glScaled(2,15,0.3);
        cube(0,1,0);
       glPopMatrix();


            // london bright  side 2
       glPushMatrix();
       glTranslated(-25,5,45);
       glScaled(2,6,0.3);
        cube(0,1,0);
       glPopMatrix();


       // lamppost up side
       glPushMatrix();
       glTranslated(4,10,54);
       glScaled(2,0.3,2);
        cube(1,1,1);
       glPopMatrix();

      // road mid work 1
       glPushMatrix();
       glTranslated(4,5,10);
       glScaled(0.3,0.2,40);
       cube(1,1,1);
       glPopMatrix();


        // road mid work 2
       glPushMatrix();
       glTranslated(4,5,57);
       glScaled(0.3,0.2,40);
       cube(1,1,1);
       glPopMatrix();

      // Dubai mall

       glPushMatrix();
       glTranslated(10,5,10);
       glScaled(10,20,10);
       cube(1,1,1);
       glPopMatrix();


       // Dubai mall 1 window

       glPushMatrix();
       glTranslated(9,5,13);
       glScaled(1,20,2);
       cube(0,0,0);
       glPopMatrix();




       // Dubai mall 2

       glPushMatrix();
       glTranslated(30,5,20);
       glScaled(10,20,10);
       cube(1,1,1);
       glPopMatrix();


       // Dubai mall 2 window

       glPushMatrix();
       glTranslated(14,5,20);
       glScaled(2,20,2);
       cube(0,0,1);
       glPopMatrix();




       // Dubai mall 3

       glPushMatrix();
       glTranslated(70,5,10);
       glScaled(10,20,10);
       cube(1,1,1);
       glPopMatrix();


       // Dubai mall 3 window

       glPushMatrix();
       glTranslated(28,5,24);
       glScaled(2,20,2);
       cube(0,0,1);
       glPopMatrix();


        // Dubai mall 4

       glPushMatrix();
       glTranslated(30,5,40);
       glScaled(10,10,10);
       cube(1,1,1);
       glPopMatrix();

        // Dubai mall 4 window

       glPushMatrix();
       glTranslated(34,5,30);
       glScaled(2,20,2);
       cube(0,0,1);
       glPopMatrix();



       // Dubai mall 5 window

       glPushMatrix();
       glTranslated(68,5,20);
       glScaled(2,20,2);
       cube(0,0,1);
       glPopMatrix();


       // Dubai mall 6 window

       glPushMatrix();
       glTranslated(68,5,20);
       glScaled(2,20,2);
       cube(0,0,1);
       glPopMatrix();


    // Dubai mall 7 window

       glPushMatrix();
       glTranslated(34,5,40);
       glScaled(2,10,2);
       cube(0,0,1);
       glPopMatrix();



         // Dubai mall 7 window

       glPushMatrix();
       glTranslated(34,5,48.5);
       glScaled(2,10,2);
       cube(0,0,1);
       glPopMatrix();



        // Dubai mall 8 window

       glPushMatrix();
       glTranslated(28,5,45);
       glScaled(2,10,2);
       cube(0,0,1);
       glPopMatrix();









       // main road 1

       glPushMatrix();
       glScaled(5,5,100);
        cube(0,0,0);
       glPopMatrix();




       // left road 2 mid work
       glPushMatrix();
       glTranslated(1.5,5,53.5);
       glScaled(-80,0.1,0.1);
       cube(1,1,1);
       glPopMatrix();


        // left road 2

       glPushMatrix();
       glTranslated(0,0,50);
       glScaled(-100,5,2);
       cube(0,0,0);
       glPopMatrix();


       // road mid work 3
       glPushMatrix();
       glTranslated(8,5,53.5);
       glScaled(200,0.1,0.1);
       cube(1,1,1);
       glPopMatrix();

       // right road 3

       glPushMatrix();
       glTranslated(0,0,50);
       glScaled(200,5,2);
       cube(0,0,0);
       glPopMatrix();




             // part

       glPushMatrix();
       glTranslated(15,0,60);
       glScaled(40,0.1,20);
       cube( .85,.107,.47);
       glPopMatrix();


          // part seat 1

       glPushMatrix();
       glTranslated(15,1,57);
       glScaled(6,0.1,1);
       cube(1,0,0);
       glPopMatrix();


        // part seat 1  > 1

       glPushMatrix();
       glTranslated(16,0,57);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();


        // part seat 1  > 2

       glPushMatrix();
       glTranslated(20,0,57);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



        // part seat 2

       glPushMatrix();
       glTranslated(25,1,57);
       glScaled(6,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // part seat 2 > 1

       glPushMatrix();
       glTranslated(26,0,57);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



        // part seat 2  > 2

       glPushMatrix();
       glTranslated(30,0,57);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();







       // part seat 3

       glPushMatrix();
       glTranslated(33.5,1,57);
       glScaled(6,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // part seat 3 > 1

       glPushMatrix();
       glTranslated(34,0,57);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



        // part seat 3 > 2

       glPushMatrix();
       glTranslated(38,0,57);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();




             // part seat 4

       glPushMatrix();
       glTranslated(40,1,57);
       glScaled(6,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // part seat 4 > 1

       glPushMatrix();
       glTranslated(40,0,57);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



        // part seat 4 > 2

       glPushMatrix();
       glTranslated(46,0,57);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



                // part seat 5

       glPushMatrix();
       glTranslated(50,1,57);
       glScaled(6,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // part seat 4 > 1

       glPushMatrix();
       glTranslated(50,0,57);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



        // part seat 4 > 2

       glPushMatrix();
       glTranslated(56,0,57);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



         // part seat 6

       glPushMatrix();
       glTranslated(13.5,1,81);
       glScaled(8,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // part seat 6 > 1

       glPushMatrix();
       glTranslated(14.5,0,81);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



        // part seat 6 > 2

       glPushMatrix();
       glTranslated(19,0,81);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();


      // part seat 7

       glPushMatrix();
       glTranslated(25,1,81);
       glScaled(8,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // part seat  7 > 1

       glPushMatrix();
       glTranslated(30,0,81);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



        // part seat 7 > 2

       glPushMatrix();
       glTranslated(26,0,81);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();




         // part seat 8

       glPushMatrix();
       glTranslated(35,1,81);
       glScaled(8,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // part seat  8 > 1

       glPushMatrix();
       glTranslated(36,0,81);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



        // part seat 8> 2

       glPushMatrix();
       glTranslated(40,0,81);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



        // part seat 9

       glPushMatrix();
       glTranslated(45,1,81);
       glScaled(8,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // part seat  9> 1

       glPushMatrix();
       glTranslated(47,0,81);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



        // part seat 9> 2

       glPushMatrix();
       glTranslated(49,0,81);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();


      // Food court down
       glPushMatrix();
       glTranslated(-22,0,60);
       glScaled(20,.2,20);
        cube(0,0,1);
       glPopMatrix();



       // Food court post 1
       glPushMatrix();
       glTranslated(-3,2,60);
       glScaled(2,6,0.3);
        cube(0,1,0);
       glPopMatrix();


           // Food court post  2
       glPushMatrix();
       glTranslated(-3,2,80);
       glScaled(2,6,0.3);
        cube(0,1,0);
       glPopMatrix();



            // Food court post  3
       glPushMatrix();
       glTranslated(-15,2,80);
       glScaled(2,6,0.3);
        cube(0,1,0);
       glPopMatrix();


         // Food court post 4
       glPushMatrix();
       glTranslated(-15,2,60);
       glScaled(2,6,0.3);
        cube(0,1,0);
       glPopMatrix();


        // Food court upper sight
       glPushMatrix();
       glTranslated(-22,8,60);
       glScaled(20,.2,20);
       cube(0,1,1);
       glPopMatrix();




       // food court seat 1

       glPushMatrix();
       glTranslated(-15,1,78);
       glScaled(8,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // food court seat 1 > 1

       glPushMatrix();
       glTranslated(-13,0,78);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



       // food court seat 1 > 1

       glPushMatrix();
       glTranslated(-10,0,78);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();


        // food court seat 2

       glPushMatrix();
       glTranslated(-15,1,75);
       glScaled(8,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // food court seat 2 > 1

       glPushMatrix();
       glTranslated(-13,0,75);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



       // food court seat 2 > 1

       glPushMatrix();
       glTranslated(-10,0,75);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();


        // food court seat 3

       glPushMatrix();
       glTranslated(-15,1,72);
       glScaled(8,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // food court seat 3 > 1

       glPushMatrix();
       glTranslated(-13,0,72);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



       // food court seat 3 > 1

       glPushMatrix();
       glTranslated(-10,0,72);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();





        // food court seat 4

       glPushMatrix();
       glTranslated(-15,1,68);
       glScaled(8,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // food court seat 4 > 1

       glPushMatrix();
       glTranslated(-13,0,68);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



       // food court seat 4 > 1

       glPushMatrix();
       glTranslated(-10,0,68);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();






        // food court seat 4

       glPushMatrix();
       glTranslated(-15,1,68);
       glScaled(8,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // food court seat 4 > 1

       glPushMatrix();
       glTranslated(-13,0,68);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



       // food court seat 4 > 1

       glPushMatrix();
       glTranslated(-10,0,68);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();




        // food court seat 4

       glPushMatrix();
       glTranslated(-15,1,68);
       glScaled(8,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // food court seat 4 > 1

       glPushMatrix();
       glTranslated(-13,0,68);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



       // food court seat 4 > 1

       glPushMatrix();
       glTranslated(-10,0,68);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();




        // food court seat 5

       glPushMatrix();
       glTranslated(-15,1,64);
       glScaled(8,0.1,1);
       cube(1,0,0);
       glPopMatrix();


       // food court seat 5 > 1

       glPushMatrix();
       glTranslated(-13,0,64);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();



       // food court seat 5 > 1

       glPushMatrix();
       glTranslated(-10,0,64);
       glScaled(0.2,1,1);
       cube(1,1,0);
       glPopMatrix();


           //leaf
       glPushMatrix();
               glTranslated(33,10,55);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(35,13,60);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(37,16,65);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
       glPopMatrix();


     //tree base among buildings
        glPushMatrix();
        glTranslated(40,.3,60);
        glScaled(1.5,10,1);
       cube(0.8, 0.7, 0.4);
       glPopMatrix();



          //leaf  2
       glPushMatrix();
               glTranslated(33,10,70);
        glScaled(8,3,8);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(35,13,75);
        glScaled(5,3,5);
       cube(0, 0.5, 0);
       glPopMatrix();

       glPushMatrix();
               glTranslated(37,16,80);
        glScaled(2,2,2);
       cube(0, 0.5, 0);
       glPopMatrix();


        //tree base among buildings
        glPushMatrix();
        glTranslated(40,.3,75);
        glScaled(1.5,10,1);
       cube(0.8, 0.7, 0.4);
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
