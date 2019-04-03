#include<GL/glut.h>
void disp()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex2i(0,0);
	glVertex2i(0,500);
	glVertex2i(500,500);
	glVertex2i(500,0);
	glEnd();
	
	glFlush();
}
void main(int argc, char **argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("Lol");
	glutInitWindowSize(1366,728);
	glutInitWindowPosition(0,0);
	glutDisplayFunc(disp);
	glViewport(0,0,1600,1600);
	gluOrtho2D(0,500,0,500);
	glutMainLoop();
}
