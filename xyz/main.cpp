# include <windows.h>
# include <GL/glut.h>
void display(void){
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0); //red glBegin(GL_QUADS);
glVertex3f (0.25, 0.25, 0.0);
glVertex3f (0.75, 0.25, 0.0);
glColor3f (0.0, 0.0, 1.0); //blue
glVertex3f (0.75, 0.75, 0.0);
glVertex3f (0.25, 0.75, 0.0);
glEnd();
glutSolidSphere(0.15,12,2); //draw a sphere
glFlush ();
}
void init (void)
{
glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}


int main(int argc, char** , char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE |
GLUT_RGB);
glutInitWindowSize (250, 250);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Sample Program 02");
init ();
glutDisplayFunc(display);
glutMainLoop();
}
