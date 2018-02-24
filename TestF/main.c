#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <GL/glx.h> /* this includes the necessary X headers */
#include <GL/gl.h>
#include <X11/X.h> /* X11 constant (e.g. TrueColor) */
#include <X11/keysym.h>
#include <math.h>

const float DEG2RAD = 3.14159/180;

void disp_rect(float x1, float y1, float x2, float y2)
{
glColor3f (1.0, 0.0, 0.0);
/*glRectf(50.0, 50.0, 800.0, 600.0);*/
glRectf(x1,y1,x2,y2);
return;
}

void disp_line(float x1, float y1, float x2, float y2)
{
glColor3f (0.0, 0.0, 1.0);
glBegin(GL_LINES);
glVertex3f(x1,y1,0.0);
glVertex3f(x2,y2,0.0);
glEnd();
return;
}
void disp_point(float x1, float y1)
{
glColor3f (0.0, 1.0, 0.0);
glBegin(GL_POINTS);
glVertex3f(x1,y1,0.0);

glEnd();
return;
}


void G02drawCircle(float radius)
{
glBegin(GL_LINES);
// glBegin(GL_LINE_LOOP);
int i;
for (i=0; i < 360; i++)
{
float degInRad = i*DEG2RAD;
//glVertex2f((cos(degInRad)*radius)+200.00,(sin(degI nRad)*radius)+200);
}

glEnd();
}

void G03_arc (float x1, float y1, float x2, float y2, float I, float J)
{
float x_offset;
float y_offset;
float radius;
x_offset = x1 + I;
y_offset = y1 + J;

return;

}

void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);

glBegin(GL_POINTS);
glVertex2f(820.0,400.0);
glEnd();

disp_rect(300.0,50.0,800.0,600.0);

disp_line(20.0,30.0,70.0,400.0);

int i;
for (i=0;i<300;i=i+1)
{
disp_point(100.0 + i,200.0 +i);
}

G02drawCircle(100);

G03_arc (104.8569, 2.7599, 104.8372, 2.7796, -.0197, 0.0);
/* don't wait! float x1, float y1, float x2, float y2, float I, float
* start processing buffered OpenGL routines
*/

glFlush ();
}



void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);

/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glViewport(0,0,1000, 500);

glOrtho(00.0,1000.0, 00.0, 800.0, -1.0, 1.0);

}

/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
//glutInit(&amp;argc, argv);
//glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
//glutInitWindowSize (1000, 800);
//glutInitWindowPosition (100, 100);
//glutCreateWindow ("hello");
init ();
//glutDisplayFunc(display);
//glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
