#include<conio.h>       
#include<freeglut.h>      

void init()
{
    // Set display window color to as glClearColor(R,G,B,Alpha)
    glClearColor(0.0, 0.0, 0.0, 0.0);
    // Set projection parameters.
    glMatrixMode(GL_PROJECTION);
    // Set 2D Transformation as gluOrtho2D(Min Width, Max Width, Min Height, Max Height)
    gluOrtho2D(0.0, 1200, 0.0, 600);
}
void home()
{


    //tembok
    glClear(GL_COLOR_BUFFER_BIT);     // Clear display window


    //    kursi
    glColor3f(0.5, 0.2, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(800, 100);
    glVertex2i(810, 100);
    glVertex2i(810, 220);
    glVertex2i(800, 220);
    glEnd();

    //    kursi
    glColor3f(0.5, 0.2, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(750, 100);
    glVertex2i(760, 100);
    glVertex2i(760, 150);
    glVertex2i(750, 150);
    glEnd();

    
    //    pager
    glColor3f(0.5, 0.2, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(750, 150);
    glVertex2i(810, 150);
    glVertex2i(810, 140);
    glVertex2i(750, 140);
    glEnd();


    // suket
    glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(860, 100);
    glVertex2i(880, 100);
    glVertex2i(870, 200);
    glEnd();
    // suket
    glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(880, 100);
    glVertex2i(900, 100);
    glVertex2i(890, 150);
    glEnd();
    // suket
    glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(900, 100);
    glVertex2i(920, 100);
    glVertex2i(910, 250);
    glEnd();
    // suket
    glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(920, 100);
    glVertex2i(940, 100);
    glVertex2i(930, 200);
    glEnd();


    // pohon


    glColor3f(0.1, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(940, 200);
    glVertex2i(1040, 200);
    glVertex2i(990, 400);
    glEnd();

    glColor3f(0.2, 0.6, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(950, 300);
    glVertex2i(1030, 300);
    glVertex2i(990, 500);
    glEnd();

    glColor3f(0.7, 0.1, 0.1);
    glBegin(GL_POLYGON);
    glVertex2i(980, 200);
    glVertex2i(1000, 200);
    glVertex2i(1000, 100);
    glVertex2i(980, 100);
    glEnd();


    // Set line segment color as glColor3f(R,G,B)
    
    glColor3f(1.3, 0.5, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(600, 500);
    glVertex2i(300, 500);
    glVertex2i(200, 350);
    glVertex2i(700, 350);
    glEnd();
    // Top of Front Wall
    glColor3f(1.2, 0.6, 0.4);
    glBegin(GL_TRIANGLES);
    glVertex2i(600, 500);
    glVertex2i(500, 350);
    glVertex2i(700, 350);
    glEnd();
    // Front Wall
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(200, 350);
    glVertex2i(600, 350);
    glVertex2i(600, 100);
    glVertex2i(200, 100);
    glEnd();
    // Front Door
    glColor3f(0.7, 0.2, 0.9);
    glBegin(GL_POLYGON);
    glVertex2i(250, 250);
    glVertex2i(350, 250);
    glVertex2i(350, 100);
    glVertex2i(250, 100);
    glEnd();

    // Front Door Lock
    glColor3f(0.3, 0.7, 0.9);
    glPointSize(15);
    glBegin(GL_POINTS);
    glVertex2i(330, 170);
    glEnd();

    //side Wall
    glColor3f(0.0, 1.3, 0.8);
    glBegin(GL_POLYGON);
    glVertex2i(500, 350);
    glVertex2i(700, 350);
    glVertex2i(700, 100);
    glVertex2i(500, 100);
    glEnd();
    // window one
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(370, 270);
    glVertex2i(470, 270);
    glVertex2i(470, 200);
    glVertex2i(370, 200);
    glEnd();
    // line of window one
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(470, 235);
    glVertex2i(370, 235);
    glVertex2i(420, 200);
    glVertex2i(420, 270);
    glEnd();
    // window two
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(530, 320);
    glVertex2i(630, 320);
    glVertex2i(630, 250);
    glVertex2i(530, 250);
    glEnd();
    // lines of window two
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(580, 320);
    glVertex2i(580, 250);
    glVertex2i(530, 285);
    glVertex2i(630, 285);
    glEnd();

    // Entrance Path
    glColor3f(0.3, 0.5, 0.7);
    glLineWidth(3);
    glBegin(GL_POLYGON);
    glVertex2i(250, 100);
    glVertex2i(350, 100);
    glVertex2i(285, 0);
    glVertex2i(175, 0);
    glEnd();

    // pot bunga
    glColor3f(0.3, 0.5, 0.7);
    glBegin(GL_POLYGON);
    glVertex2i(400, 90);
    glVertex2i(440, 90);
    glVertex2i(450, 120);
    glVertex2i(390, 120);
    glEnd();

    glColor3f(0.0, 0.9, 0.3);
    glBegin(GL_TRIANGLES);
    glVertex2i(410, 120);
    glVertex2i(430, 120);
    glVertex2i(420, 160);
    glEnd();

    //    table
    glColor3f(0.5, 0.15, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(620, 150);
    glVertex2i(725, 150);
    glVertex2i(725, 165);
    glVertex2i(620, 165);
    glEnd();

    glColor3f(0.5, 0.2, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(715, 150);
    glVertex2i(725, 150);
    glVertex2i(725, 100);
    glVertex2i(715, 100);
    glEnd();

    glColor3f(0.5, 0.2, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(620, 150);
    glVertex2i(630, 150);
    glVertex2i(630, 100);
    glVertex2i(620, 100);
    glEnd();


    // Process all OpenGL routine s as quickly as possible


    glFlush();
}
int main(int argc, char** argv)
{
    // Initialize GLUT
    glutInit(&argc, argv);
    // Set display mode
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    // Set top - left display window position.
    glutInitWindowPosition(50, 50);
    // Set display window width and height
    glutInitWindowSize(1000, 500);
    // Create display window with the given title
    glutCreateWindow("2D House in OpenGL ");
    // Execute initialization procedure
    init();
    // Send graphics to display window
    glutDisplayFunc(home);
    // Display everything and wait.
    glutMainLoop();
}