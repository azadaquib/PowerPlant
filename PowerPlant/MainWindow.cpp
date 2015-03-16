#include<iostream>
#include<GL/glew.h>
#include<GL/freeglut.h>


int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Power Plant");

	glutMainLoop();

	return 0;
}

