#include<stdlib.h>
#include<stdio.h>
#include<GL/glut.h>
#include<unistd.h>
void *currentfont;
int  flag=0;
void setFont(void *font)
{
	currentfont=font;
}
void drawstring(float x,float y,float z,char *string)
{
	char *c;
	glRasterPos3f(x,y,z);
 
	for(c=string;*c!='\0';c++)
	{	glColor3f(0.0,0.0,0.0);
		glutBitmapCharacter(currentfont,*c);
	}
}
void frontscreen(void)
{
setFont(GLUT_BITMAP_TIMES_ROMAN_24);
glClearColor(0.15,0.1,0.01,0);/*background for cover page*/
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,0,0);
drawstring(450.0,700.0,0.0,"INSTITUTE OF TECHNOLOGY ");
glColor3f(0.7,0,1);
drawstring(330,650,0.0,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
glColor3f(1,0.5,0);
drawstring(530,600,0.0,"A MINI PROJECT ON");
glColor3f(1,0,0);
drawstring(360,500,0.0,"GRAPHICAL REPRESENTATION OF TRAFFIC SIGNALS");
glColor3f(1,0.5,0);
drawstring(200,400,0.0,"BY:");
glColor3f(1,1,1);
drawstring(100,300,0.0,"name");
glColor3f(1,1,1);
drawstring(100,240,0.0,"name");
glColor3f(1,0.5,0);
drawstring(980,400,0.0,"GUIDES:");
glColor3f(1,1,1);
drawstring(930,300,0.0,"name");
glColor3f(1,1,1);
drawstring(930,240,0.0,"  name");
glColor3f(1,0.1,1);
drawstring(543,100,0.0,"PRESS ENTER TO START");
glFlush();
}
void disp()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0,1.0,0.0,0.0);
	if(flag==0)
		frontscreen();
	glutSwapBuffers();
}
int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutCreateWindow("BOATS");
	glutInitWindowSize(1346,728);
	glutInitWindowPosition(0,0);
	glutDisplayFunc(disp);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,1346.0,0.0,728.0);
	glutMainLoop();
	return 0;
}
