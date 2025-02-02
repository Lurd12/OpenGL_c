#include <GL/glu.h>
#include <GL/glut.h>

//Callback function
void Draw();

int main(int argC, char *argV[]){
    glutInit(&argC, argV);

    glutInitWindowSize(100,100);
    glutCreateWindow("My first window");

    glClearColor(0.0f,0.0f,0.0f,0.0f);

    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}

void Draw(){
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();

}