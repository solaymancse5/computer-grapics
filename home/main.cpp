# include <windows.h>
#include <GL/glut.h>
void mydisplay()
{
glBegin(GL_LINES);
glVertex3f(0.2, 0.2, 0.0);
glVertex3f(0.2, 0.4, 0.0);

glBegin(GL_LINES);
glVertex3f(0.4, 0.2, 0.0);
glVertex3f(0.4, 0.4, 0.0);

glBegin(GL_LINES);
glVertex3f(0.2, 0.2, 0.0);
glVertex3f(0.4, 0.2, 0.0);

glBegin(GL_LINES);
glVertex3f(0.1, 0.4, 0.0);
glVertex3f(0.5, 0.4, 0.0);

glBegin(GL_LINES);
glVertex3f(0.2, 0.6, 0.0);
glVertex3f(0.4, 0.6, 0.0);

glBegin(GL_LINES);
glVertex3f(0.1, 0.4, 0.0);
glVertex3f(0.2, 0.6, 0.0);

glBegin(GL_LINES);
glVertex3f(0.4, 0.6, 0.0);
glVertex3f(0.5, 0.4, 0.0);

glBegin(GL_LINES);
glVertex3f(0.5, 0.5, 0.0);
glVertex3f(0.5, 0.4, 0.0);
  
  glBegin(GL_LINES);
glVertex3f(0.5, 0.5, 0.0);
glVertex3f(0.4, 0.4, 0.0);


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



