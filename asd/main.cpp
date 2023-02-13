# include <windows.h>
#include <GL/glut.h>
void mydisplay()
{
glBegin(GL_LINES);
glVertex3f(0.25, 0.25, 0.0);
glVertex3f(0.75, 0.75, 0.0);
glEnd();
glFlush();
}
int main(int argc, char** argv)
{
glutInit(&argc,argv);
glutCreateWindow("simple");
glutDisplayFunc(mydisplay);
glutMainLoop();
}


