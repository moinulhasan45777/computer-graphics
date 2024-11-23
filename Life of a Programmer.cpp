//     Name             ID              Section
// Moinul Hasan      21-45777-3            F

#include <windows.h>
#include <GL/glut.h>
#include <math.h>



float initialY = 0.0f;
float moveC1 = 0.0f;
float moveS = -1.0f;
float moveP = 1.5f;
float moveC2 = 0.0f;
float moveC3 = -1.0f;
float moveSnow1 = 2.0f;
float moveSnow2 = 2.1f;
float moveSnow3 = 2.2f;
float moveSnow4 = 2.3f;
bool day = false;
bool night = true;
void update1(int value) {
    moveC1 += 0.005;
    if(moveC1 > 1.3)
    {
        moveC1 = -2.0;
    }
    glutTimerFunc(20, update1, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}

void update2(int value){
    moveS += 0.001;
    if(moveS > 0.7)
    {

    }
    else{
        glutTimerFunc(20, update2, 0); //Notify GLUT to call update again in 25 milliseconds
    }

    glutPostRedisplay();
}

void update3(int value) {
    moveP -= 0.009f;
    if(moveP < -3.5f)
    {
        moveP = 1.5f;
    }
    glutTimerFunc(20, update3, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}

void update4(int value) {
    moveC2 -= 0.002;
    if(moveC2 < -1.6)
    {
        moveC2 = 2.0;
    }
    glutTimerFunc(20, update4, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}



void update5(int value) {
    moveC3 -= 0.002;
    if(moveC3 < -1.6)
    {
        moveC3 = 0.0;
    }
    glutTimerFunc(20, update5, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}





//Snow Update Function ----------

void update6(int value) {
    moveSnow1 -= 0.001;
    if(moveSnow1 < -2.0)
    {
        moveSnow1 = 2.0;
    }
    glutTimerFunc(20, update6, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}

void update7(int value) {
    moveSnow2 -= 0.003;
    if( moveSnow2 < -2.0)
    {
        moveSnow2 = 2.1;
    }
    glutTimerFunc(20, update7, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}

void update8(int value) {
    moveSnow3 -= 0.005;
    if( moveSnow3 < -2.0)
    {
        moveSnow3 = 2.2;
    }
    glutTimerFunc(20, update8, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}

void update9(int value) {
   moveSnow4 -= 0.0004;
    if( moveSnow4 < -2.0)
    {
        moveSnow4 = 2.3;
    }
    glutTimerFunc(20, update9, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}









void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {

            glColor3f(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y =r * sin(A);;
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}


void display()
{

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glLineWidth(5);

    //Sky ----------------------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
	glColor3ub(25,25,112);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(-1.0f,1.0f);
	glVertex2f(1.0f,1.0f);
	glVertex2f(1.0f,-1.0f);
    glEnd();

    //Stars -------------------------

    circle(0.002,-0.8f,0.7f,1.0f,1.0f,0.8f);
    circle(0.0013,-0.7f,0.6f,1.0f,1.0f,0.8f);
    circle(0.0015,-0.65f,0.85f,1.0f,1.0f,0.8f);
    circle(0.0019,0.76f,0.67f,1.0f,1.0f,0.8f);
    circle(0.002,-0.3f,0.9f,1.0f,1.0f,0.8f);
    circle(0.0014,-0.12,0.55,1.0f,1.0f,0.8f);
    circle(0.0013,0.2,0.7,1.0f,1.0f,0.8f);
    circle(0.002,0.12,0.1,1.0f,1.0f,0.8f);
    circle(0.0013,-0.0,0.45,1.0f,1.0f,0.8f);
    circle(0.002,0.27,0.9,1.0f,1.0f,0.8f);
    circle(0.0013,0.45,0.56,1.0f,1.0f,0.8f);
    circle(0.0017,0.55,0.97,1.0f,1.0f,0.8f);
    circle(0.0015,0.8,0.7,1.0f,1.0f,0.8f);
    circle(0.0014,0.95,0.7,1.0f,1.0f,0.8f);
    circle(0.002,-0.2,0.4,1.0f,1.0f,0.8f);
    circle(0.0013,-0.27,0.56,1.0f,1.0f,0.8f);
    circle(0.002,-0.93,0.4,1.0f,1.0f,0.8f);
    circle(0.002,-0.55,0.47,1.0f,1.0f,0.8f);
    circle(0.002,-0.6,0.54,1.0f,1.0f,0.8f);
    circle(0.002,-0.45,0.66,1.0f,1.0f,0.8f);
    circle(0.002,-0.21,0.9,1.0f,1.0f,0.8f);
    circle(0.002,-0.1,0.94,1.0f,1.0f,0.8f);
    circle(0.002,-0.35,0.34,1.0f,1.0f,0.8f);
    circle(0.1,-0.8f,0.7f,1.0f,1.0f,0.8f);
    circle(0.1,-0.85f,0.7f,0.1f,0.1f,0.43f);





    //--------------------------------------------------------------------------------------------------------------------------







    //Background buildings
    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.8,-0.4);
    glVertex2f(-0.75,-0.43);
    glVertex2f(-0.75,-1.0);
    glVertex2f(-0.8,-1.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.65,-0.7);
    glVertex2f(-0.65,-0.35);
    glVertex2f(-0.5,-0.35);
    glVertex2f(-0.5,-0.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.58,-0.35);
    glVertex2f(-0.58,-0.22);
    glVertex2f(-0.56,-0.22);
    glVertex2f(-0.56,-0.35);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.25,-0.25);
    glVertex2f(-0.20,-0.25);
    glVertex2f(-0.20,-1.0);
    glVertex2f(-0.25,-1.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.20,-0.75);
    glVertex2f(-0.1,-0.75);
    glVertex2f(-0.1,-1.0);
    glVertex2f(-0.20,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.3,-0.65);
    glVertex2f(0.33,-0.75);
    glVertex2f(0.33,-1.0);
    glVertex2f(0.3,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.33,-0.75);
    glVertex2f(0.55,-0.75);
    glVertex2f(0.55,-1.0);
    glVertex2f(0.33,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.75,-0.20);
    glVertex2f(0.77,-0.20);
    glVertex2f(0.77,-1.0);
    glVertex2f(0.75,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.95,-0.35);
    glVertex2f(1.0,-0.35);
    glVertex2f(1.0,-1.0);
    glVertex2f(0.95,-1.0);
    glEnd();










	//left building 1st ----------------------------------------------------------------------------------------------------------
	glBegin(GL_POLYGON);
	glColor3f(0.5f,0.2f,0.0f);
	glVertex2f(-1.0f,-0.2f);
	glVertex2f(-0.8f,-0.2f);
	glVertex2f(-0.8f,-1.0f);
	glVertex2f(-1.0f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.0f,-0.26f);
    glVertex2f(-0.84f,-0.26f);
    glVertex2f(-0.84f,-0.3f);
    glVertex2f(-1.0f,-0.3f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.0f,-0.35f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.84f,-0.39f);
    glVertex2f(-1.0f,-0.39f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.0f,-0.44f);
    glVertex2f(-0.84f,-0.44f);
    glVertex2f(-0.84f,-0.48f);
    glVertex2f(-1.0f,-0.48f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.0f,-0.53f);
    glVertex2f(-0.84f,-0.53f);
    glVertex2f(-0.84f,-0.57f);
    glVertex2f(-1.0f,-0.57f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.0f,-0.62f);
    glVertex2f(-0.84f,-0.62f);
    glVertex2f(-0.84f,-0.66f);
    glVertex2f(-1.0f,-0.66f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.0f,-0.71f);
    glVertex2f(-0.84f,-0.71f);
    glVertex2f(-0.84f,-0.75f);
    glVertex2f(-1.0f,-0.75f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.0f,-0.8f);
    glVertex2f(-0.84f,-0.8f);
    glVertex2f(-0.84f,-0.84f);
    glVertex2f(-1.0f,-0.84f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-1.0f,-0.89f);
    glVertex2f(-0.84f,-0.89f);
    glVertex2f(-0.84f,-0.93f);
    glVertex2f(-1.0f,-0.93f);
    glEnd();

    //building 1 ends------------------------------------





    //building 2 starts ----------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.78f,-0.5f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.5f,-1.0f);
    glVertex2f(-0.78f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.78f,-0.5f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.5f,-0.4f);
    glVertex2f(-0.6f,-0.4f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.52f,-0.53f);
    glVertex2f(-0.75f,-0.53f);
    glVertex2f(-0.75f,-1.0f);
    glVertex2f(-0.52f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.71f,-0.53f);
    glVertex2f(-0.71f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.66f,-0.53f);
    glVertex2f(-0.66f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.61f,-0.53f);
    glVertex2f(-0.61f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.56f,-0.53f);
    glVertex2f(-0.56f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.63f);
    glVertex2f(-0.52f,-0.63f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.73f);
    glVertex2f(-0.52f,-0.73f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.83f);
    glVertex2f(-0.52f,-0.83f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.93f);
    glVertex2f(-0.52f,-0.93f);
    glEnd();


    //--------------------------------------------------------------------------------------





    //3rd building starts -----------------------------------------------------------------------------------------------------------------------------


    glBegin(GL_POLYGON);
    glColor3ub(75,0,130);
    glVertex2f(-0.5f,0.0f);
    glVertex2f(-0.25f,0.0f);
    glVertex2f(-0.25f,-1.0f);
    glVertex2f(-0.5f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.47f,-0.1f);
    glVertex2f(-0.44f,-0.1f);
    glVertex2f(-0.44f,-1.0f);
    glVertex2f(-0.47f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.39f,-0.1f);
    glVertex2f(-0.36f,-0.1f);
    glVertex2f(-0.36f,-0.1f);
    glVertex2f(-0.36f,-1.0f);
    glVertex2f(-0.36f,-1.0f);
    glVertex2f(-0.39f,-1.0f);
    glVertex2f(-0.39f,-1.0f);
    glVertex2f(-0.39f,-0.1f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.31f,-0.1f);
    glVertex2f(-0.28f,-0.1f);
    glVertex2f(-0.28f,-1.0f);
    glVertex2f(-0.31f,-1.0f);
    glEnd();

    // building 3 done----------------------------------------








    //building 4 starts
    glBegin(GL_POLYGON);
    glColor3ub(139,0,0);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(0.2f,0.2f);
    glVertex2f(0.2f,-1.0f);
    glVertex2f(-0.1f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.08f,0.15f);
    glVertex2f(0.04f,0.15f);
    glVertex2f(0.04f,-0.1f);
    glVertex2f(-0.08f,-0.1f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.06f,0.15f);
    glVertex2f(0.18f,0.15f);
    glVertex2f(0.18f,-0.1f);
    glVertex2f(0.06f,-0.1f);
    glEnd();



    //Main Window -------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3ub(255,204,153);
    glVertex2f(-0.08f,-0.15f);
    glVertex2f(0.04f,-0.15f);
    glVertex2f(0.04f,-0.35f);
    glVertex2f(-0.08f,-0.35f);
    glEnd();


    //Table Start -------------
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.03f,-0.35f);
    glVertex2f(-0.03f,-0.285f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.05f,-0.285f);
    glVertex2f(-0.01f,-0.285f);
    glEnd();

    //--------------------------

    //Hand Last Part --------------------------------
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.015f,-0.275f);
    glVertex2f(-0.025f,-0.278f);
    glEnd();
    //--------------------------------------------



    //Laptop Start ----------------

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(128,128,128);
    glVertex2f(-0.045f,-0.2775f);
    glVertex2f(-0.015f,-0.2775f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(128,128,128);
    glVertex2f(-0.045f,-0.2775f);
    glVertex2f(-0.055f,-0.25f);
    glEnd();

    //-----------------------------



    //Chair Start -----------------

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.005f,-0.35f);
    glVertex2f(0.005f,-0.32f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.003f,-0.32f);
    glVertex2f(0.025f,-0.32f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.025f,-0.323f);
    glVertex2f(0.025f,-0.27f);
    glEnd();
    //------------------------




    //figure Start -----------------

    //body
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.001f,-0.35f);
    glVertex2f(-0.001f,-0.31f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.003f,-0.31f);
    glVertex2f(0.02f,-0.31f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.02f,-0.313f);
    glVertex2f(0.02f,-0.255f);
    glEnd();

    //Head
    circle(0.01f,0.018f,-0.250f,0.0f,0.0f,0.0f);

    //Hand
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.02f,-0.28f);
    glVertex2f(0.0f,-0.29f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.00f,-0.29f);
    glVertex2f(-0.015f,-0.275f);
    glEnd();
    //-------------------------------------


    //-------------------------------------------------------------------------------------------------------------------


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.06f,-0.15f);
    glVertex2f(0.18f,-0.15f);
    glVertex2f(0.18f,-0.35f);
    glVertex2f(0.06f,-0.35f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.08f,-0.4f);
    glVertex2f(0.04f,-0.4f);
    glVertex2f(0.04f,-0.6f);
    glVertex2f(-0.08f,-0.6f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.06f,-0.4f);
    glVertex2f(0.18f,-0.4f);
    glVertex2f(0.18f,-0.6f);
    glVertex2f(0.06f,-0.6f);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-0.08f,-0.65f);
    glVertex2f(0.04f,-0.65f);
    glVertex2f(0.04f,-0.85f);
    glVertex2f(-0.08f,-0.85f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.06f,-0.65f);
    glVertex2f(0.18f,-0.65f);
    glVertex2f(0.18f,-0.85f);
    glVertex2f(0.06f,-0.85f);
    glEnd();

    //4th building done ------------------------------------------------------






    //5th building --------------------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(0.2f,-0.1f);
    glVertex2f(0.3f,-0.15f);
    glVertex2f(0.3f,-1.0f);
    glVertex2f(0.2f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.22f,-0.15f);
    glVertex2f(0.28f,-0.16f);
    glVertex2f(0.28f,-0.255f);
    glVertex2f(0.22f,-0.25f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.22f,-0.28f);
    glVertex2f(0.28f,-0.29f);
    glVertex2f(0.28f,-0.385f);
    glVertex2f(0.22f,-0.38f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.22f,-0.41f);
    glVertex2f(0.28f,-0.42f);
    glVertex2f(0.28f,-0.515f);
    glVertex2f(0.22f,-0.51f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.22f,-0.54f);
    glVertex2f(0.28f,-0.55f);
    glVertex2f(0.28f,-0.645f);
    glVertex2f(0.22f,-0.64f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.22f,-0.67f);
    glVertex2f(0.28f,-0.68f);
    glVertex2f(0.28f,-0.775f);
    glVertex2f(0.22f,-0.77f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.22f,-0.8f);
    glVertex2f(0.28f,-0.81f);
    glVertex2f(0.28f,-0.905f);
    glVertex2f(0.22f,-0.9f);
    glEnd();


    //building 5 ends----------------------------------------------------------



    //building 6 starts--------------------------------------------------------------------------------------------------------------------


    glBegin(GL_POLYGON);
    glColor3ub(139,0,139);
    glVertex2f(0.55f,-0.1f);
    glVertex2f(0.75f,-0.1f);
    glVertex2f(0.75f,-1.0f);
    glVertex2f(0.55f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(139,0,139);
    glVertex2f(0.6f,-0.1f);
    glVertex2f(0.7f,-0.1f);
    glVertex2f(0.7f,0.1f);
    glVertex2f(0.6f,0.1f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(139,0,139);
    glVertex2f(0.64f,0.1f);
    glVertex2f(0.66f,0.1f);
    glVertex2f(0.65f,0.4f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);
    glVertex2f(0.68f,-0.15f);
    glVertex2f(0.71,-0.15f);
    glVertex2f(0.71,-0.35f);
    glVertex2f(0.68f,-0.35f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);
    glVertex2f(0.68f,-0.4f);
    glVertex2f(0.71,-0.4f);
    glVertex2f(0.71,-0.6f);
    glVertex2f(0.68f,-0.6f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);
    glVertex2f(0.68f,-0.65f);
    glVertex2f(0.71,-0.65f);
    glVertex2f(0.71,-0.85f);
    glVertex2f(0.68f,-0.85f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);
    glVertex2f(0.68f,-0.9f);
    glVertex2f(0.71,-0.9f);
    glVertex2f(0.71,-1.0f);
    glVertex2f(0.68f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);
    glVertex2f(0.58f,-0.15f);
    glVertex2f(0.61,-0.15f);
    glVertex2f(0.61,-0.35f);
    glVertex2f(0.58f,-0.35f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);
    glVertex2f(0.58f,-0.4f);
    glVertex2f(0.61,-0.4f);
    glVertex2f(0.61,-0.6f);
    glVertex2f(0.58f,-0.6f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);
    glVertex2f(0.58f,-0.65f);
    glVertex2f(0.61,-0.65f);
    glVertex2f(0.61,-0.85f);
    glVertex2f(0.58f,-0.85f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,240);
    glVertex2f(0.58f,-0.9f);
    glVertex2f(0.61,-0.9f);
    glVertex2f(0.61,-1.0f);
    glVertex2f(0.58f,-1.0f);
    glVertex2f(0.58f,-0.9f);
    glEnd();


    //building 6 done ---------------------------------------------------------------------------



    //building 7 starts ----------------------------------------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3ub(0,0,139);
    glVertex2f(0.4f,-0.3f);
    glVertex2f(0.6f,-0.3f);
    glVertex2f(0.6f,-1.0f);
    glVertex2f(0.4f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(0.42f,-0.33f);
    glVertex2f(0.58f,-0.33f);
    glVertex2f(0.58f,-0.38f);
    glVertex2f(0.42f,-0.38f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(0.42f,-0.43f);
    glVertex2f(0.58f,-0.43f);
    glVertex2f(0.58f,-0.48f);
    glVertex2f(0.42f,-0.48f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(0.42f,-0.53f);
    glVertex2f(0.58f,-0.53f);
    glVertex2f(0.58f,-0.58f);
    glVertex2f(0.42f,-0.58f);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(0.42f,-0.63f);
    glVertex2f(0.58f,-0.63f);
    glVertex2f(0.58f,-0.68f);
    glVertex2f(0.42f,-0.68f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(0.42f,-0.73f);
    glVertex2f(0.58f,-0.73f);
    glVertex2f(0.58f,-0.78f);
    glVertex2f(0.42f,-0.78f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(0.42f,-0.83f);
    glVertex2f(0.58f,-0.83f);
    glVertex2f(0.58f,-0.88f);
    glVertex2f(0.42f,-0.88f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(0.42f,-0.93f);
    glVertex2f(0.58f,-0.93f);
    glVertex2f(0.58f,-0.98f);
    glVertex2f(0.42f,-0.98f);
    glEnd();

    //building 7 done------------------------------------------------






    // building 8 starts------------------------------------------------------------------------------------------------------------



    glBegin(GL_POLYGON);
    glColor3ub(0,139,0);
    glVertex2f(0.8f,0.2f);
    glVertex2f(0.95f,0.2f);
    glVertex2f(0.95f,-1.0f);
    glVertex2f(0.8f,-1.0f);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2f(0.82f,0.15f);
    glVertex2f(0.93f,0.15f);
    glVertex2f(0.93f,-1.0f);
    glVertex2f(0.82f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.845f,0.15f);
    glVertex2f(0.845f,-1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.87f,0.15f);
    glVertex2f(0.87f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.90f,0.15f);
    glVertex2f(0.90f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,0.1f);
    glVertex2f(0.93f,0.1f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,0.0f);
    glVertex2f(0.93f,0.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.1f);
    glVertex2f(0.93f,-0.1f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.2f);
    glVertex2f(0.93f,-0.2f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.3f);
    glVertex2f(0.93f,-0.3f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.4f);
    glVertex2f(0.93f,-0.4f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.5f);
    glVertex2f(0.93f,-0.5f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.6f);
    glVertex2f(0.93f,-0.6f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.7f);
    glVertex2f(0.93f,-0.7f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.8f);
    glVertex2f(0.93f,-0.8f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.9f);
    glVertex2f(0.93f,-0.9f);
    glEnd();

    //building 8 done..................................













    //Plane-----------------------------------------------------
    glPushMatrix();
        glTranslatef(moveP,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(150,120,150);
    glVertex2f(0.0f,0.7f);
    glVertex2f(0.08f,0.73f);
    glVertex2f(0.35f,0.73f);
    glVertex2f(0.35f,0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(150,120,150);
    glVertex2f(0.25f,0.73f);
    glVertex2f(0.29f,0.77f);
    glVertex2f(0.35f,0.77f);
    glVertex2f(0.35f,0.73f);
    glEnd();
    glPopMatrix();


    glutSwapBuffers();

}








































///-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------///

void display2(){

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glLineWidth(5);

    //Sky ----------------------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
	glColor3ub(0,255,255);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(-1.0f,1.0f);
	glVertex2f(1.0f,1.0f);
	glVertex2f(1.0f,-1.0f);
    glEnd();

    //--------------------------------------------------------------------------------------------------------------------------








    //Sun ----------------------------------------------------------------------------------------------------------------------
    glPushMatrix();
    glTranslatef(-0.8f,moveS,0.0f);
    glPushMatrix();
        glColor3d(255,255,0);
        glutSolidSphere(0.1, 250, 250);
    glPopMatrix();
    glPopMatrix();
    //---------------------------------------------------------------------------------------------------------------------------



    //Background buildings
    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.8,-0.4);
    glVertex2f(-0.75,-0.43);
    glVertex2f(-0.75,-1.0);
    glVertex2f(-0.8,-1.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.65,-0.7);
    glVertex2f(-0.65,-0.35);
    glVertex2f(-0.5,-0.35);
    glVertex2f(-0.5,-0.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.58,-0.35);
    glVertex2f(-0.58,-0.22);
    glVertex2f(-0.56,-0.22);
    glVertex2f(-0.56,-0.35);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.25,-0.25);
    glVertex2f(-0.20,-0.25);
    glVertex2f(-0.20,-1.0);
    glVertex2f(-0.25,-1.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.20,-0.75);
    glVertex2f(-0.1,-0.75);
    glVertex2f(-0.1,-1.0);
    glVertex2f(-0.20,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.3,-0.65);
    glVertex2f(0.33,-0.75);
    glVertex2f(0.33,-1.0);
    glVertex2f(0.3,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.33,-0.75);
    glVertex2f(0.55,-0.75);
    glVertex2f(0.55,-1.0);
    glVertex2f(0.33,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.75,-0.20);
    glVertex2f(0.77,-0.20);
    glVertex2f(0.77,-1.0);
    glVertex2f(0.75,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.95,-0.35);
    glVertex2f(1.0,-0.35);
    glVertex2f(1.0,-1.0);
    glVertex2f(0.95,-1.0);
    glEnd();







    //Clouds--------------------------------------------------------------------------------------------------------------------


    glPushMatrix();

        glTranslatef(moveC1,0.0f,0.0f);

        //Cloud 1-----------
        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.0, 0.8, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.02, 0.82, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.04, 0.83, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.06, 0.83, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.02, 0.8, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.04, 0.8, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.06, 0.8, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.07, 0.8, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();
        //--------------

        //Cloud 2-------------
        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.3, 0.7, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.28, 0.72, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.26, 0.73, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.24, 0.73, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.28, 0.7, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.26, 0.7, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.24, 0.7, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.23, 0.7, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();
        //-----------------------


        //Cloud 3 ---------------
        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.3, 0.63, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.32, 0.65, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.34, 0.66, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.36, 0.66, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.32, 0.63, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.34, 0.63, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.36, 0.63, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.37, 0.63, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();
        //----------------------



        //Cloud 4
        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.6, 0.4, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.62, 0.42, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.64, 0.43, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.66, 0.43, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.62, 0.4, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.64, 0.4, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.66, 0.4, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.67, 0.4, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();
        //----------------------
    glPopMatrix();



    //Cloud set 2 ----------------------------------------------------

    glPushMatrix();

        glTranslatef(moveC2,0.0f,0.0f);

        //Cloud 1-----------
        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.5, 0.47, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.48, 0.49, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.46, 0.50, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.44, 0.49, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.48, 0.47, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.46, 0.47, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.44, 0.47, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.43, 0.47, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();
        //--------------

        //Cloud 2-------------
        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.21, 0.3, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.19, 0.32, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.17, 0.33, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.15, 0.33, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.19, 0.3, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.17, 0.3, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.15, 0.3, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(-0.14, 0.3, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();
        //-----------------------


        //Cloud 3 ---------------
        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.3, 0.63, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.32, 0.65, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.34, 0.66, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.36, 0.66, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.32, 0.63, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.34, 0.63, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.36, 0.63, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.37, 0.63, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();
        //----------------------



        //Cloud 4
        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.6, 0.4, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.62, 0.42, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.64, 0.43, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.66, 0.43, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.62, 0.4, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.64, 0.4, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.66, 0.4, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3d(255,255,255);
        glTranslatef(0.67, 0.4, 0);
        glutSolidSphere(0.02, 250, 250);
        glPopMatrix();
        //----------------------
    glPopMatrix();





    //left building 1st ----------------------------------------------------------------------------------------------------------
	glBegin(GL_POLYGON);
	glColor3f(0.5f,0.2f,0.0f);
	glVertex2f(-1.0f,-0.2f);
	glVertex2f(-0.8f,-0.2f);
	glVertex2f(-0.8f,-1.0f);
	glVertex2f(-1.0f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.26f);
    glVertex2f(-0.84f,-0.26f);
    glVertex2f(-0.84f,-0.3f);
    glVertex2f(-1.0f,-0.3f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.35f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.84f,-0.39f);
    glVertex2f(-1.0f,-0.39f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.44f);
    glVertex2f(-0.84f,-0.44f);
    glVertex2f(-0.84f,-0.48f);
    glVertex2f(-1.0f,-0.48f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.53f);
    glVertex2f(-0.84f,-0.53f);
    glVertex2f(-0.84f,-0.57f);
    glVertex2f(-1.0f,-0.57f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.62f);
    glVertex2f(-0.84f,-0.62f);
    glVertex2f(-0.84f,-0.66f);
    glVertex2f(-1.0f,-0.66f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.71f);
    glVertex2f(-0.84f,-0.71f);
    glVertex2f(-0.84f,-0.75f);
    glVertex2f(-1.0f,-0.75f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.8f);
    glVertex2f(-0.84f,-0.8f);
    glVertex2f(-0.84f,-0.84f);
    glVertex2f(-1.0f,-0.84f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.89f);
    glVertex2f(-0.84f,-0.89f);
    glVertex2f(-0.84f,-0.93f);
    glVertex2f(-1.0f,-0.93f);
    glEnd();

    //building 1 ends------------------------------------





    //building 2 starts ----------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.7f,0.3f);
    glVertex2f(-0.78f,-0.5f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.5f,-1.0f);
    glVertex2f(-0.78f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.7f,0.3f);
    glVertex2f(-0.78f,-0.5f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.5f,-0.4f);
    glVertex2f(-0.6f,-0.4f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.52f,-0.53f);
    glVertex2f(-0.75f,-0.53f);
    glVertex2f(-0.75f,-1.0f);
    glVertex2f(-0.52f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.71f,-0.53f);
    glVertex2f(-0.71f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.66f,-0.53f);
    glVertex2f(-0.66f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.61f,-0.53f);
    glVertex2f(-0.61f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.56f,-0.53f);
    glVertex2f(-0.56f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.63f);
    glVertex2f(-0.52f,-0.63f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.73f);
    glVertex2f(-0.52f,-0.73f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.83f);
    glVertex2f(-0.52f,-0.83f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.93f);
    glVertex2f(-0.52f,-0.93f);
    glEnd();


    //--------------------------------------------------------------------------------------





    //3rd building starts -----------------------------------------------------------------------------------------------------------------------------


    glBegin(GL_POLYGON);
    glColor3ub(75,0,130);
    glVertex2f(-0.5f,0.0f);
    glVertex2f(-0.25f,0.0f);
    glVertex2f(-0.25f,-1.0f);
    glVertex2f(-0.5f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.47f,-0.1f);
    glVertex2f(-0.44f,-0.1f);
    glVertex2f(-0.44f,-1.0f);
    glVertex2f(-0.47f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.39f,-0.1f);
    glVertex2f(-0.36f,-0.1f);
    glVertex2f(-0.36f,-0.1f);
    glVertex2f(-0.36f,-1.0f);
    glVertex2f(-0.36f,-1.0f);
    glVertex2f(-0.39f,-1.0f);
    glVertex2f(-0.39f,-1.0f);
    glVertex2f(-0.39f,-0.1f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.31f,-0.1f);
    glVertex2f(-0.28f,-0.1f);
    glVertex2f(-0.28f,-1.0f);
    glVertex2f(-0.31f,-1.0f);
    glEnd();

    // building 3 done----------------------------------------








    //building 4 starts
    glBegin(GL_POLYGON);
    glColor3ub(139,0,0);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(0.2f,0.2f);
    glVertex2f(0.2f,-1.0f);
    glVertex2f(-0.1f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.08f,0.15f);
    glVertex2f(0.04f,0.15f);
    glVertex2f(0.04f,-0.1f);
    glVertex2f(-0.08f,-0.1f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.06f,0.15f);
    glVertex2f(0.18f,0.15f);
    glVertex2f(0.18f,-0.1f);
    glVertex2f(0.06f,-0.1f);
    glEnd();



    //Main Window -------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-0.08f,-0.15f);
    glVertex2f(0.04f,-0.15f);
    glVertex2f(0.04f,-0.35f);
    glVertex2f(-0.08f,-0.35f);
    glEnd();


    //Table Start -------------
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.03f,-0.35f);
    glVertex2f(-0.03f,-0.285f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.05f,-0.285f);
    glVertex2f(-0.01f,-0.285f);
    glEnd();

    //--------------------------

    //Hand Last Part --------------------------------
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.015f,-0.275f);
    glVertex2f(-0.025f,-0.278f);
    glEnd();
    //--------------------------------------------



    //Laptop Start ----------------

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.045f,-0.2775f);
    glVertex2f(-0.015f,-0.2775f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.045f,-0.2775f);
    glVertex2f(-0.055f,-0.25f);
    glEnd();

    //-----------------------------



    //Chair Start -----------------

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.005f,-0.35f);
    glVertex2f(0.005f,-0.32f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.003f,-0.32f);
    glVertex2f(0.025f,-0.32f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.025f,-0.323f);
    glVertex2f(0.025f,-0.27f);
    glEnd();
    //------------------------




    //figure Start -----------------

    //body
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.001f,-0.35f);
    glVertex2f(-0.001f,-0.31f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.003f,-0.31f);
    glVertex2f(0.02f,-0.31f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.02f,-0.313f);
    glVertex2f(0.02f,-0.255f);
    glEnd();

    //Head
    circle(0.01f,0.018f,-0.250f,0.0f,0.0f,0.0f);

    //Hand
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.02f,-0.28f);
    glVertex2f(0.0f,-0.29f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.00f,-0.29f);
    glVertex2f(-0.015f,-0.275f);
    glEnd();
    //-------------------------------------


    //-------------------------------------------------------------------------------------------------------------------


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.06f,-0.15f);
    glVertex2f(0.18f,-0.15f);
    glVertex2f(0.18f,-0.35f);
    glVertex2f(0.06f,-0.35f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.08f,-0.4f);
    glVertex2f(0.04f,-0.4f);
    glVertex2f(0.04f,-0.6f);
    glVertex2f(-0.08f,-0.6f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.06f,-0.4f);
    glVertex2f(0.18f,-0.4f);
    glVertex2f(0.18f,-0.6f);
    glVertex2f(0.06f,-0.6f);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.08f,-0.65f);
    glVertex2f(0.04f,-0.65f);
    glVertex2f(0.04f,-0.85f);
    glVertex2f(-0.08f,-0.85f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.06f,-0.65f);
    glVertex2f(0.18f,-0.65f);
    glVertex2f(0.18f,-0.85f);
    glVertex2f(0.06f,-0.85f);
    glEnd();

    //4th building done ------------------------------------------------------






    //5th building --------------------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(0.2f,-0.1f);
    glVertex2f(0.3f,-0.15f);
    glVertex2f(0.3f,-1.0f);
    glVertex2f(0.2f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.15f);
    glVertex2f(0.28f,-0.16f);
    glVertex2f(0.28f,-0.255f);
    glVertex2f(0.22f,-0.25f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.28f);
    glVertex2f(0.28f,-0.29f);
    glVertex2f(0.28f,-0.385f);
    glVertex2f(0.22f,-0.38f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.41f);
    glVertex2f(0.28f,-0.42f);
    glVertex2f(0.28f,-0.515f);
    glVertex2f(0.22f,-0.51f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.54f);
    glVertex2f(0.28f,-0.55f);
    glVertex2f(0.28f,-0.645f);
    glVertex2f(0.22f,-0.64f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.67f);
    glVertex2f(0.28f,-0.68f);
    glVertex2f(0.28f,-0.775f);
    glVertex2f(0.22f,-0.77f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.8f);
    glVertex2f(0.28f,-0.81f);
    glVertex2f(0.28f,-0.905f);
    glVertex2f(0.22f,-0.9f);
    glEnd();


    //building 5 ends----------------------------------------------------------



    //building 6 starts--------------------------------------------------------------------------------------------------------------------


    glBegin(GL_POLYGON);
    glColor3ub(139,0,139);
    glVertex2f(0.55f,-0.1f);
    glVertex2f(0.75f,-0.1f);
    glVertex2f(0.75f,-1.0f);
    glVertex2f(0.55f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(139,0,139);
    glVertex2f(0.6f,-0.1f);
    glVertex2f(0.7f,-0.1f);
    glVertex2f(0.7f,0.1f);
    glVertex2f(0.6f,0.1f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(139,0,139);
    glVertex2f(0.64f,0.1f);
    glVertex2f(0.66f,0.1f);
    glVertex2f(0.65f,0.4f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.68f,-0.15f);
    glVertex2f(0.71,-0.15f);
    glVertex2f(0.71,-0.35f);
    glVertex2f(0.68f,-0.35f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.68f,-0.4f);
    glVertex2f(0.71,-0.4f);
    glVertex2f(0.71,-0.6f);
    glVertex2f(0.68f,-0.6f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.68f,-0.65f);
    glVertex2f(0.71,-0.65f);
    glVertex2f(0.71,-0.85f);
    glVertex2f(0.68f,-0.85f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.68f,-0.9f);
    glVertex2f(0.71,-0.9f);
    glVertex2f(0.71,-1.0f);
    glVertex2f(0.68f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.58f,-0.15f);
    glVertex2f(0.61,-0.15f);
    glVertex2f(0.61,-0.35f);
    glVertex2f(0.58f,-0.35f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.58f,-0.4f);
    glVertex2f(0.61,-0.4f);
    glVertex2f(0.61,-0.6f);
    glVertex2f(0.58f,-0.6f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.58f,-0.65f);
    glVertex2f(0.61,-0.65f);
    glVertex2f(0.61,-0.85f);
    glVertex2f(0.58f,-0.85f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.58f,-0.9f);
    glVertex2f(0.61,-0.9f);
    glVertex2f(0.61,-1.0f);
    glVertex2f(0.58f,-1.0f);
    glVertex2f(0.58f,-0.9f);
    glEnd();


    //building 6 done ---------------------------------------------------------------------------



    //building 7 starts ----------------------------------------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3ub(0,0,139);
    glVertex2f(0.4f,-0.3f);
    glVertex2f(0.6f,-0.3f);
    glVertex2f(0.6f,-1.0f);
    glVertex2f(0.4f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.33f);
    glVertex2f(0.58f,-0.33f);
    glVertex2f(0.58f,-0.38f);
    glVertex2f(0.42f,-0.38f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.43f);
    glVertex2f(0.58f,-0.43f);
    glVertex2f(0.58f,-0.48f);
    glVertex2f(0.42f,-0.48f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.53f);
    glVertex2f(0.58f,-0.53f);
    glVertex2f(0.58f,-0.58f);
    glVertex2f(0.42f,-0.58f);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.63f);
    glVertex2f(0.58f,-0.63f);
    glVertex2f(0.58f,-0.68f);
    glVertex2f(0.42f,-0.68f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.73f);
    glVertex2f(0.58f,-0.73f);
    glVertex2f(0.58f,-0.78f);
    glVertex2f(0.42f,-0.78f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.83f);
    glVertex2f(0.58f,-0.83f);
    glVertex2f(0.58f,-0.88f);
    glVertex2f(0.42f,-0.88f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.93f);
    glVertex2f(0.58f,-0.93f);
    glVertex2f(0.58f,-0.98f);
    glVertex2f(0.42f,-0.98f);
    glEnd();

    //building 7 done------------------------------------------------






    // building 8 starts------------------------------------------------------------------------------------------------------------



    glBegin(GL_POLYGON);
    glColor3ub(0,139,0);
    glVertex2f(0.8f,0.2f);
    glVertex2f(0.95f,0.2f);
    glVertex2f(0.95f,-1.0f);
    glVertex2f(0.8f,-1.0f);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.82f,0.15f);
    glVertex2f(0.93f,0.15f);
    glVertex2f(0.93f,-1.0f);
    glVertex2f(0.82f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.845f,0.15f);
    glVertex2f(0.845f,-1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.87f,0.15f);
    glVertex2f(0.87f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.90f,0.15f);
    glVertex2f(0.90f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,0.1f);
    glVertex2f(0.93f,0.1f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,0.0f);
    glVertex2f(0.93f,0.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.1f);
    glVertex2f(0.93f,-0.1f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.2f);
    glVertex2f(0.93f,-0.2f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.3f);
    glVertex2f(0.93f,-0.3f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.4f);
    glVertex2f(0.93f,-0.4f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.5f);
    glVertex2f(0.93f,-0.5f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.6f);
    glVertex2f(0.93f,-0.6f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.7f);
    glVertex2f(0.93f,-0.7f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.8f);
    glVertex2f(0.93f,-0.8f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.9f);
    glVertex2f(0.93f,-0.9f);
    glEnd();

    //building 8 done..................................




    //Plane-----------------------------------------------------
    glPushMatrix();
        glTranslatef(moveP,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(150,120,150);
    glVertex2f(0.0f,0.7f);
    glVertex2f(0.08f,0.73f);
    glVertex2f(0.35f,0.73f);
    glVertex2f(0.35f,0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(150,120,150);
    glVertex2f(0.25f,0.73f);
    glVertex2f(0.29f,0.77f);
    glVertex2f(0.35f,0.77f);
    glVertex2f(0.35f,0.73f);
    glEnd();

    glPopMatrix();



    glutSwapBuffers();
}











































///-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------///



void display3(){


    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(5);




	//Sky ----------------------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
	glColor3ub(176,196,222);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(-1.0f,1.0f);
	glVertex2f(1.0f,1.0f);
	glVertex2f(1.0f,-1.0f);
    glEnd();

    //--------------------------------------------------------------------------------------------------------------------------

    //Background buildings
    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.8,-0.4);
    glVertex2f(-0.75,-0.43);
    glVertex2f(-0.75,-1.0);
    glVertex2f(-0.8,-1.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.65,-0.7);
    glVertex2f(-0.65,-0.35);
    glVertex2f(-0.5,-0.35);
    glVertex2f(-0.5,-0.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.58,-0.35);
    glVertex2f(-0.58,-0.22);
    glVertex2f(-0.56,-0.22);
    glVertex2f(-0.56,-0.35);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.25,-0.25);
    glVertex2f(-0.20,-0.25);
    glVertex2f(-0.20,-1.0);
    glVertex2f(-0.25,-1.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.20,-0.75);
    glVertex2f(-0.1,-0.75);
    glVertex2f(-0.1,-1.0);
    glVertex2f(-0.20,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.3,-0.65);
    glVertex2f(0.33,-0.75);
    glVertex2f(0.33,-1.0);
    glVertex2f(0.3,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.33,-0.75);
    glVertex2f(0.55,-0.75);
    glVertex2f(0.55,-1.0);
    glVertex2f(0.33,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.75,-0.20);
    glVertex2f(0.77,-0.20);
    glVertex2f(0.77,-1.0);
    glVertex2f(0.75,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.95,-0.35);
    glVertex2f(1.0,-0.35);
    glVertex2f(1.0,-1.0);
    glVertex2f(0.95,-1.0);
    glEnd();


    //Clouds--------------------------------------------------------------------------------------------------------------------


   glPushMatrix();

        glTranslatef(moveC3,0.0f,0.0f);

        //Cloud 1-----------
        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(-0.8, 1.15, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(-0.6, 1.13, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();


        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(-0.4, 1.11, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(-0.2, 1.2, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(0.0, 1.1, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(0.2, 1.17, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(0.4, 1.13, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(0.6, 1.15, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(0.8, 1.08, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(1.0, 1.2, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(1.2, 1.14, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(1.4, 1.17, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(1.6, 1.15, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(1.8, 1.15, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(2., 1.13, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();


        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(2.2, 1.11, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(2.4, 1.2, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(2.6, 1.1, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(2.8, 1.17, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(3.0, 1.13, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(3.2, 1.15, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(3.4, 1.08, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(3.6, 1.2, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(3.8, 1.14, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(4.0, 1.17, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(4.2, 1.15, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(4.4, 1.13, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();


        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(4.6, 1.11, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(4.8, 1.2, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(5.0, 1.1, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(5.2, 1.17, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(5.4, 1.13, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(5.6, 1.15, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(5.8, 1.08, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(6.0, 1.2, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(6.2, 1.14, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

        glPushMatrix();
        glColor3ub(169,169,169);
        glTranslatef(6.4, 1.17, 0);
        glutSolidSphere(0.3, 250, 250);
        glPopMatrix();

    glPopMatrix();



    //left building 1st ----------------------------------------------------------------------------------------------------------
	glBegin(GL_POLYGON);
	glColor3f(0.5f,0.2f,0.0f);
	glVertex2f(-1.0f,-0.2f);
	glVertex2f(-0.8f,-0.2f);
	glVertex2f(-0.8f,-1.0f);
	glVertex2f(-1.0f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.26f);
    glVertex2f(-0.84f,-0.26f);
    glVertex2f(-0.84f,-0.3f);
    glVertex2f(-1.0f,-0.3f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.35f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.84f,-0.39f);
    glVertex2f(-1.0f,-0.39f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.44f);
    glVertex2f(-0.84f,-0.44f);
    glVertex2f(-0.84f,-0.48f);
    glVertex2f(-1.0f,-0.48f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.53f);
    glVertex2f(-0.84f,-0.53f);
    glVertex2f(-0.84f,-0.57f);
    glVertex2f(-1.0f,-0.57f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.62f);
    glVertex2f(-0.84f,-0.62f);
    glVertex2f(-0.84f,-0.66f);
    glVertex2f(-1.0f,-0.66f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.71f);
    glVertex2f(-0.84f,-0.71f);
    glVertex2f(-0.84f,-0.75f);
    glVertex2f(-1.0f,-0.75f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.8f);
    glVertex2f(-0.84f,-0.8f);
    glVertex2f(-0.84f,-0.84f);
    glVertex2f(-1.0f,-0.84f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.89f);
    glVertex2f(-0.84f,-0.89f);
    glVertex2f(-0.84f,-0.93f);
    glVertex2f(-1.0f,-0.93f);
    glEnd();

    //building 1 ends------------------------------------





    //building 2 starts ----------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.7f,0.3f);
    glVertex2f(-0.78f,-0.5f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.5f,-1.0f);
    glVertex2f(-0.78f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.7f,0.3f);
    glVertex2f(-0.78f,-0.5f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.5f,-0.4f);
    glVertex2f(-0.6f,-0.4f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.52f,-0.53f);
    glVertex2f(-0.75f,-0.53f);
    glVertex2f(-0.75f,-1.0f);
    glVertex2f(-0.52f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.71f,-0.53f);
    glVertex2f(-0.71f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.66f,-0.53f);
    glVertex2f(-0.66f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.61f,-0.53f);
    glVertex2f(-0.61f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.56f,-0.53f);
    glVertex2f(-0.56f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.63f);
    glVertex2f(-0.52f,-0.63f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.73f);
    glVertex2f(-0.52f,-0.73f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.83f);
    glVertex2f(-0.52f,-0.83f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.93f);
    glVertex2f(-0.52f,-0.93f);
    glEnd();


    //--------------------------------------------------------------------------------------





    //3rd building starts -----------------------------------------------------------------------------------------------------------------------------


    glBegin(GL_POLYGON);
    glColor3ub(75,0,130);
    glVertex2f(-0.5f,0.0f);
    glVertex2f(-0.25f,0.0f);
    glVertex2f(-0.25f,-1.0f);
    glVertex2f(-0.5f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.47f,-0.1f);
    glVertex2f(-0.44f,-0.1f);
    glVertex2f(-0.44f,-1.0f);
    glVertex2f(-0.47f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.39f,-0.1f);
    glVertex2f(-0.36f,-0.1f);
    glVertex2f(-0.36f,-0.1f);
    glVertex2f(-0.36f,-1.0f);
    glVertex2f(-0.36f,-1.0f);
    glVertex2f(-0.39f,-1.0f);
    glVertex2f(-0.39f,-1.0f);
    glVertex2f(-0.39f,-0.1f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.31f,-0.1f);
    glVertex2f(-0.28f,-0.1f);
    glVertex2f(-0.28f,-1.0f);
    glVertex2f(-0.31f,-1.0f);
    glEnd();

    // building 3 done----------------------------------------








    //building 4 starts
    glBegin(GL_POLYGON);
    glColor3ub(139,0,0);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(0.2f,0.2f);
    glVertex2f(0.2f,-1.0f);
    glVertex2f(-0.1f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.08f,0.15f);
    glVertex2f(0.04f,0.15f);
    glVertex2f(0.04f,-0.1f);
    glVertex2f(-0.08f,-0.1f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.06f,0.15f);
    glVertex2f(0.18f,0.15f);
    glVertex2f(0.18f,-0.1f);
    glVertex2f(0.06f,-0.1f);
    glEnd();



    //Main Window -------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-0.08f,-0.15f);
    glVertex2f(0.04f,-0.15f);
    glVertex2f(0.04f,-0.35f);
    glVertex2f(-0.08f,-0.35f);
    glEnd();


    //Table Start -------------
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.03f,-0.35f);
    glVertex2f(-0.03f,-0.285f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.05f,-0.285f);
    glVertex2f(-0.01f,-0.285f);
    glEnd();

    //--------------------------

    //Hand Last Part --------------------------------
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.015f,-0.275f);
    glVertex2f(-0.025f,-0.278f);
    glEnd();
    //--------------------------------------------



    //Laptop Start ----------------

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.045f,-0.2775f);
    glVertex2f(-0.015f,-0.2775f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.045f,-0.2775f);
    glVertex2f(-0.055f,-0.25f);
    glEnd();

    //-----------------------------



    //Chair Start -----------------

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.005f,-0.35f);
    glVertex2f(0.005f,-0.32f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.003f,-0.32f);
    glVertex2f(0.025f,-0.32f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.025f,-0.323f);
    glVertex2f(0.025f,-0.27f);
    glEnd();
    //------------------------




    //figure Start -----------------

    //body
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.001f,-0.35f);
    glVertex2f(-0.001f,-0.31f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.003f,-0.31f);
    glVertex2f(0.02f,-0.31f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.02f,-0.313f);
    glVertex2f(0.02f,-0.255f);
    glEnd();

    //Head
    circle(0.01f,0.018f,-0.250f,0.0f,0.0f,0.0f);

    //Hand
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.02f,-0.28f);
    glVertex2f(0.0f,-0.29f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.00f,-0.29f);
    glVertex2f(-0.015f,-0.275f);
    glEnd();
    //-------------------------------------


    //-------------------------------------------------------------------------------------------------------------------


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.06f,-0.15f);
    glVertex2f(0.18f,-0.15f);
    glVertex2f(0.18f,-0.35f);
    glVertex2f(0.06f,-0.35f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.08f,-0.4f);
    glVertex2f(0.04f,-0.4f);
    glVertex2f(0.04f,-0.6f);
    glVertex2f(-0.08f,-0.6f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.06f,-0.4f);
    glVertex2f(0.18f,-0.4f);
    glVertex2f(0.18f,-0.6f);
    glVertex2f(0.06f,-0.6f);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.08f,-0.65f);
    glVertex2f(0.04f,-0.65f);
    glVertex2f(0.04f,-0.85f);
    glVertex2f(-0.08f,-0.85f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.06f,-0.65f);
    glVertex2f(0.18f,-0.65f);
    glVertex2f(0.18f,-0.85f);
    glVertex2f(0.06f,-0.85f);
    glEnd();

    //4th building done ------------------------------------------------------






    //5th building --------------------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(0.2f,-0.1f);
    glVertex2f(0.3f,-0.15f);
    glVertex2f(0.3f,-1.0f);
    glVertex2f(0.2f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.15f);
    glVertex2f(0.28f,-0.16f);
    glVertex2f(0.28f,-0.255f);
    glVertex2f(0.22f,-0.25f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.28f);
    glVertex2f(0.28f,-0.29f);
    glVertex2f(0.28f,-0.385f);
    glVertex2f(0.22f,-0.38f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.41f);
    glVertex2f(0.28f,-0.42f);
    glVertex2f(0.28f,-0.515f);
    glVertex2f(0.22f,-0.51f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.54f);
    glVertex2f(0.28f,-0.55f);
    glVertex2f(0.28f,-0.645f);
    glVertex2f(0.22f,-0.64f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.67f);
    glVertex2f(0.28f,-0.68f);
    glVertex2f(0.28f,-0.775f);
    glVertex2f(0.22f,-0.77f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.8f);
    glVertex2f(0.28f,-0.81f);
    glVertex2f(0.28f,-0.905f);
    glVertex2f(0.22f,-0.9f);
    glEnd();


    //building 5 ends----------------------------------------------------------



    //building 6 starts--------------------------------------------------------------------------------------------------------------------


    glBegin(GL_POLYGON);
    glColor3ub(139,0,139);
    glVertex2f(0.55f,-0.1f);
    glVertex2f(0.75f,-0.1f);
    glVertex2f(0.75f,-1.0f);
    glVertex2f(0.55f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(139,0,139);
    glVertex2f(0.6f,-0.1f);
    glVertex2f(0.7f,-0.1f);
    glVertex2f(0.7f,0.1f);
    glVertex2f(0.6f,0.1f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(139,0,139);
    glVertex2f(0.64f,0.1f);
    glVertex2f(0.66f,0.1f);
    glVertex2f(0.65f,0.4f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.68f,-0.15f);
    glVertex2f(0.71,-0.15f);
    glVertex2f(0.71,-0.35f);
    glVertex2f(0.68f,-0.35f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.68f,-0.4f);
    glVertex2f(0.71,-0.4f);
    glVertex2f(0.71,-0.6f);
    glVertex2f(0.68f,-0.6f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.68f,-0.65f);
    glVertex2f(0.71,-0.65f);
    glVertex2f(0.71,-0.85f);
    glVertex2f(0.68f,-0.85f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.68f,-0.9f);
    glVertex2f(0.71,-0.9f);
    glVertex2f(0.71,-1.0f);
    glVertex2f(0.68f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.58f,-0.15f);
    glVertex2f(0.61,-0.15f);
    glVertex2f(0.61,-0.35f);
    glVertex2f(0.58f,-0.35f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.58f,-0.4f);
    glVertex2f(0.61,-0.4f);
    glVertex2f(0.61,-0.6f);
    glVertex2f(0.58f,-0.6f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.58f,-0.65f);
    glVertex2f(0.61,-0.65f);
    glVertex2f(0.61,-0.85f);
    glVertex2f(0.58f,-0.85f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.58f,-0.9f);
    glVertex2f(0.61,-0.9f);
    glVertex2f(0.61,-1.0f);
    glVertex2f(0.58f,-1.0f);
    glVertex2f(0.58f,-0.9f);
    glEnd();


    //building 6 done ---------------------------------------------------------------------------



    //building 7 starts ----------------------------------------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3ub(0,0,139);
    glVertex2f(0.4f,-0.3f);
    glVertex2f(0.6f,-0.3f);
    glVertex2f(0.6f,-1.0f);
    glVertex2f(0.4f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.33f);
    glVertex2f(0.58f,-0.33f);
    glVertex2f(0.58f,-0.38f);
    glVertex2f(0.42f,-0.38f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.43f);
    glVertex2f(0.58f,-0.43f);
    glVertex2f(0.58f,-0.48f);
    glVertex2f(0.42f,-0.48f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.53f);
    glVertex2f(0.58f,-0.53f);
    glVertex2f(0.58f,-0.58f);
    glVertex2f(0.42f,-0.58f);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.63f);
    glVertex2f(0.58f,-0.63f);
    glVertex2f(0.58f,-0.68f);
    glVertex2f(0.42f,-0.68f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.73f);
    glVertex2f(0.58f,-0.73f);
    glVertex2f(0.58f,-0.78f);
    glVertex2f(0.42f,-0.78f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.83f);
    glVertex2f(0.58f,-0.83f);
    glVertex2f(0.58f,-0.88f);
    glVertex2f(0.42f,-0.88f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.93f);
    glVertex2f(0.58f,-0.93f);
    glVertex2f(0.58f,-0.98f);
    glVertex2f(0.42f,-0.98f);
    glEnd();

    //building 7 done------------------------------------------------






    // building 8 starts------------------------------------------------------------------------------------------------------------



    glBegin(GL_POLYGON);
    glColor3ub(0,139,0);
    glVertex2f(0.8f,0.2f);
    glVertex2f(0.95f,0.2f);
    glVertex2f(0.95f,-1.0f);
    glVertex2f(0.8f,-1.0f);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.82f,0.15f);
    glVertex2f(0.93f,0.15f);
    glVertex2f(0.93f,-1.0f);
    glVertex2f(0.82f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.845f,0.15f);
    glVertex2f(0.845f,-1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.87f,0.15f);
    glVertex2f(0.87f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.90f,0.15f);
    glVertex2f(0.90f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,0.1f);
    glVertex2f(0.93f,0.1f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,0.0f);
    glVertex2f(0.93f,0.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.1f);
    glVertex2f(0.93f,-0.1f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.2f);
    glVertex2f(0.93f,-0.2f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.3f);
    glVertex2f(0.93f,-0.3f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.4f);
    glVertex2f(0.93f,-0.4f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.5f);
    glVertex2f(0.93f,-0.5f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.6f);
    glVertex2f(0.93f,-0.6f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.7f);
    glVertex2f(0.93f,-0.7f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.8f);
    glVertex2f(0.93f,-0.8f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.9f);
    glVertex2f(0.93f,-0.9f);
    glEnd();

    //building 8 done..................................


    //Plane-----------------------------------------------------
    glPushMatrix();
        glTranslatef(moveP,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(150,120,150);
    glVertex2f(0.0f,0.7f);
    glVertex2f(0.08f,0.73f);
    glVertex2f(0.35f,0.73f);
    glVertex2f(0.35f,0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(150,120,150);
    glVertex2f(0.25f,0.73f);
    glVertex2f(0.29f,0.77f);
    glVertex2f(0.35f,0.77f);
    glVertex2f(0.35f,0.73f);
    glEnd();
    glPopMatrix();

    glutSwapBuffers();
}












































///-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------///
void display4(){


    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(5);




	//Sky ----------------------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
	glColor3ub(176,196,222);
	glVertex2f(-1.0f,-1.0f);
	glVertex2f(-1.0f,1.0f);
	glVertex2f(1.0f,1.0f);
	glVertex2f(1.0f,-1.0f);
    glEnd();

    //--------------------------------------------------------------------------------------------------------------------------


    //Background buildings
    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.8,-0.4);
    glVertex2f(-0.75,-0.43);
    glVertex2f(-0.75,-1.0);
    glVertex2f(-0.8,-1.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.65,-0.7);
    glVertex2f(-0.65,-0.35);
    glVertex2f(-0.5,-0.35);
    glVertex2f(-0.5,-0.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.58,-0.35);
    glVertex2f(-0.58,-0.22);
    glVertex2f(-0.56,-0.22);
    glVertex2f(-0.56,-0.35);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.25,-0.25);
    glVertex2f(-0.20,-0.25);
    glVertex2f(-0.20,-1.0);
    glVertex2f(-0.25,-1.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(-0.20,-0.75);
    glVertex2f(-0.1,-0.75);
    glVertex2f(-0.1,-1.0);
    glVertex2f(-0.20,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.3,-0.65);
    glVertex2f(0.33,-0.75);
    glVertex2f(0.33,-1.0);
    glVertex2f(0.3,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.33,-0.75);
    glVertex2f(0.55,-0.75);
    glVertex2f(0.55,-1.0);
    glVertex2f(0.33,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.75,-0.20);
    glVertex2f(0.77,-0.20);
    glVertex2f(0.77,-1.0);
    glVertex2f(0.75,-1.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64,64,64);
    glVertex2f(0.95,-0.35);
    glVertex2f(1.0,-0.35);
    glVertex2f(1.0,-1.0);
    glVertex2f(0.95,-1.0);
    glEnd();










    //left building 1st ----------------------------------------------------------------------------------------------------------
	glBegin(GL_POLYGON);
	glColor3f(0.5f,0.2f,0.0f);
	glVertex2f(-1.0f,-0.2f);
	glVertex2f(-0.8f,-0.2f);
	glVertex2f(-0.8f,-1.0f);
	glVertex2f(-1.0f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.26f);
    glVertex2f(-0.84f,-0.26f);
    glVertex2f(-0.84f,-0.3f);
    glVertex2f(-1.0f,-0.3f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.35f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.84f,-0.39f);
    glVertex2f(-1.0f,-0.39f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.44f);
    glVertex2f(-0.84f,-0.44f);
    glVertex2f(-0.84f,-0.48f);
    glVertex2f(-1.0f,-0.48f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.53f);
    glVertex2f(-0.84f,-0.53f);
    glVertex2f(-0.84f,-0.57f);
    glVertex2f(-1.0f,-0.57f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.62f);
    glVertex2f(-0.84f,-0.62f);
    glVertex2f(-0.84f,-0.66f);
    glVertex2f(-1.0f,-0.66f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.71f);
    glVertex2f(-0.84f,-0.71f);
    glVertex2f(-0.84f,-0.75f);
    glVertex2f(-1.0f,-0.75f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.8f);
    glVertex2f(-0.84f,-0.8f);
    glVertex2f(-0.84f,-0.84f);
    glVertex2f(-1.0f,-0.84f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-1.0f,-0.89f);
    glVertex2f(-0.84f,-0.89f);
    glVertex2f(-0.84f,-0.93f);
    glVertex2f(-1.0f,-0.93f);
    glEnd();

    //building 1 ends------------------------------------





    //building 2 starts ----------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.7f,0.3f);
    glVertex2f(-0.78f,-0.5f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.5f,-1.0f);
    glVertex2f(-0.78f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.7f,0.3f);
    glVertex2f(-0.78f,-0.5f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.5f,-0.4f);
    glVertex2f(-0.6f,-0.4f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.52f,-0.53f);
    glVertex2f(-0.75f,-0.53f);
    glVertex2f(-0.75f,-1.0f);
    glVertex2f(-0.52f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.71f,-0.53f);
    glVertex2f(-0.71f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.66f,-0.53f);
    glVertex2f(-0.66f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.61f,-0.53f);
    glVertex2f(-0.61f,-1.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.56f,-0.53f);
    glVertex2f(-0.56f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.63f);
    glVertex2f(-0.52f,-0.63f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.73f);
    glVertex2f(-0.52f,-0.73f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.83f);
    glVertex2f(-0.52f,-0.83f);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0.0f,0.7f,0.0f);
    glVertex2f(-0.75f,-0.93f);
    glVertex2f(-0.52f,-0.93f);
    glEnd();


    //--------------------------------------------------------------------------------------





    //3rd building starts -----------------------------------------------------------------------------------------------------------------------------


    glBegin(GL_POLYGON);
    glColor3ub(75,0,130);
    glVertex2f(-0.5f,0.0f);
    glVertex2f(-0.25f,0.0f);
    glVertex2f(-0.25f,-1.0f);
    glVertex2f(-0.5f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.47f,-0.1f);
    glVertex2f(-0.44f,-0.1f);
    glVertex2f(-0.44f,-1.0f);
    glVertex2f(-0.47f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.39f,-0.1f);
    glVertex2f(-0.36f,-0.1f);
    glVertex2f(-0.36f,-0.1f);
    glVertex2f(-0.36f,-1.0f);
    glVertex2f(-0.36f,-1.0f);
    glVertex2f(-0.39f,-1.0f);
    glVertex2f(-0.39f,-1.0f);
    glVertex2f(-0.39f,-0.1f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.31f,-0.1f);
    glVertex2f(-0.28f,-0.1f);
    glVertex2f(-0.28f,-1.0f);
    glVertex2f(-0.31f,-1.0f);
    glEnd();

    // building 3 done----------------------------------------








    //building 4 starts
    glBegin(GL_POLYGON);
    glColor3ub(139,0,0);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(0.2f,0.2f);
    glVertex2f(0.2f,-1.0f);
    glVertex2f(-0.1f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.08f,0.15f);
    glVertex2f(0.04f,0.15f);
    glVertex2f(0.04f,-0.1f);
    glVertex2f(-0.08f,-0.1f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.06f,0.15f);
    glVertex2f(0.18f,0.15f);
    glVertex2f(0.18f,-0.1f);
    glVertex2f(0.06f,-0.1f);
    glEnd();



    //Main Window -------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-0.08f,-0.15f);
    glVertex2f(0.04f,-0.15f);
    glVertex2f(0.04f,-0.35f);
    glVertex2f(-0.08f,-0.35f);
    glEnd();


    //Table Start -------------
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.03f,-0.35f);
    glVertex2f(-0.03f,-0.285f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.05f,-0.285f);
    glVertex2f(-0.01f,-0.285f);
    glEnd();

    //--------------------------

    //Hand Last Part --------------------------------
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.015f,-0.275f);
    glVertex2f(-0.025f,-0.278f);
    glEnd();
    //--------------------------------------------



    //Laptop Start ----------------

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.045f,-0.2775f);
    glVertex2f(-0.015f,-0.2775f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.045f,-0.2775f);
    glVertex2f(-0.055f,-0.25f);
    glEnd();

    //-----------------------------



    //Chair Start -----------------

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.005f,-0.35f);
    glVertex2f(0.005f,-0.32f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.003f,-0.32f);
    glVertex2f(0.025f,-0.32f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.025f,-0.323f);
    glVertex2f(0.025f,-0.27f);
    glEnd();
    //------------------------




    //figure Start -----------------

    //body
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.001f,-0.35f);
    glVertex2f(-0.001f,-0.31f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.003f,-0.31f);
    glVertex2f(0.02f,-0.31f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.02f,-0.313f);
    glVertex2f(0.02f,-0.255f);
    glEnd();

    //Head
    circle(0.01f,0.018f,-0.250f,0.0f,0.0f,0.0f);

    //Hand
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.02f,-0.28f);
    glVertex2f(0.0f,-0.29f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.00f,-0.29f);
    glVertex2f(-0.015f,-0.275f);
    glEnd();
    //-------------------------------------


    //-------------------------------------------------------------------------------------------------------------------


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.06f,-0.15f);
    glVertex2f(0.18f,-0.15f);
    glVertex2f(0.18f,-0.35f);
    glVertex2f(0.06f,-0.35f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.08f,-0.4f);
    glVertex2f(0.04f,-0.4f);
    glVertex2f(0.04f,-0.6f);
    glVertex2f(-0.08f,-0.6f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.06f,-0.4f);
    glVertex2f(0.18f,-0.4f);
    glVertex2f(0.18f,-0.6f);
    glVertex2f(0.06f,-0.6f);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(-0.08f,-0.65f);
    glVertex2f(0.04f,-0.65f);
    glVertex2f(0.04f,-0.85f);
    glVertex2f(-0.08f,-0.85f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.06f,-0.65f);
    glVertex2f(0.18f,-0.65f);
    glVertex2f(0.18f,-0.85f);
    glVertex2f(0.06f,-0.85f);
    glEnd();

    //4th building done ------------------------------------------------------






    //5th building --------------------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(0.2f,-0.1f);
    glVertex2f(0.3f,-0.15f);
    glVertex2f(0.3f,-1.0f);
    glVertex2f(0.2f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.15f);
    glVertex2f(0.28f,-0.16f);
    glVertex2f(0.28f,-0.255f);
    glVertex2f(0.22f,-0.25f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.28f);
    glVertex2f(0.28f,-0.29f);
    glVertex2f(0.28f,-0.385f);
    glVertex2f(0.22f,-0.38f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.41f);
    glVertex2f(0.28f,-0.42f);
    glVertex2f(0.28f,-0.515f);
    glVertex2f(0.22f,-0.51f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.54f);
    glVertex2f(0.28f,-0.55f);
    glVertex2f(0.28f,-0.645f);
    glVertex2f(0.22f,-0.64f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.67f);
    glVertex2f(0.28f,-0.68f);
    glVertex2f(0.28f,-0.775f);
    glVertex2f(0.22f,-0.77f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.22f,-0.8f);
    glVertex2f(0.28f,-0.81f);
    glVertex2f(0.28f,-0.905f);
    glVertex2f(0.22f,-0.9f);
    glEnd();


    //building 5 ends----------------------------------------------------------



    //building 6 starts--------------------------------------------------------------------------------------------------------------------


    glBegin(GL_POLYGON);
    glColor3ub(139,0,139);
    glVertex2f(0.55f,-0.1f);
    glVertex2f(0.75f,-0.1f);
    glVertex2f(0.75f,-1.0f);
    glVertex2f(0.55f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(139,0,139);
    glVertex2f(0.6f,-0.1f);
    glVertex2f(0.7f,-0.1f);
    glVertex2f(0.7f,0.1f);
    glVertex2f(0.6f,0.1f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(139,0,139);
    glVertex2f(0.64f,0.1f);
    glVertex2f(0.66f,0.1f);
    glVertex2f(0.65f,0.4f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.68f,-0.15f);
    glVertex2f(0.71,-0.15f);
    glVertex2f(0.71,-0.35f);
    glVertex2f(0.68f,-0.35f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.68f,-0.4f);
    glVertex2f(0.71,-0.4f);
    glVertex2f(0.71,-0.6f);
    glVertex2f(0.68f,-0.6f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.68f,-0.65f);
    glVertex2f(0.71,-0.65f);
    glVertex2f(0.71,-0.85f);
    glVertex2f(0.68f,-0.85f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.68f,-0.9f);
    glVertex2f(0.71,-0.9f);
    glVertex2f(0.71,-1.0f);
    glVertex2f(0.68f,-1.0f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.58f,-0.15f);
    glVertex2f(0.61,-0.15f);
    glVertex2f(0.61,-0.35f);
    glVertex2f(0.58f,-0.35f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.58f,-0.4f);
    glVertex2f(0.61,-0.4f);
    glVertex2f(0.61,-0.6f);
    glVertex2f(0.58f,-0.6f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.58f,-0.65f);
    glVertex2f(0.61,-0.65f);
    glVertex2f(0.61,-0.85f);
    glVertex2f(0.58f,-0.85f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.58f,-0.9f);
    glVertex2f(0.61,-0.9f);
    glVertex2f(0.61,-1.0f);
    glVertex2f(0.58f,-1.0f);
    glVertex2f(0.58f,-0.9f);
    glEnd();


    //building 6 done ---------------------------------------------------------------------------



    //building 7 starts ----------------------------------------------------------------------------------------------------------------------------------------

    glBegin(GL_POLYGON);
    glColor3ub(0,0,139);
    glVertex2f(0.4f,-0.3f);
    glVertex2f(0.6f,-0.3f);
    glVertex2f(0.6f,-1.0f);
    glVertex2f(0.4f,-1.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.33f);
    glVertex2f(0.58f,-0.33f);
    glVertex2f(0.58f,-0.38f);
    glVertex2f(0.42f,-0.38f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.43f);
    glVertex2f(0.58f,-0.43f);
    glVertex2f(0.58f,-0.48f);
    glVertex2f(0.42f,-0.48f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.53f);
    glVertex2f(0.58f,-0.53f);
    glVertex2f(0.58f,-0.58f);
    glVertex2f(0.42f,-0.58f);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.63f);
    glVertex2f(0.58f,-0.63f);
    glVertex2f(0.58f,-0.68f);
    glVertex2f(0.42f,-0.68f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.73f);
    glVertex2f(0.58f,-0.73f);
    glVertex2f(0.58f,-0.78f);
    glVertex2f(0.42f,-0.78f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.83f);
    glVertex2f(0.58f,-0.83f);
    glVertex2f(0.58f,-0.88f);
    glVertex2f(0.42f,-0.88f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.42f,-0.93f);
    glVertex2f(0.58f,-0.93f);
    glVertex2f(0.58f,-0.98f);
    glVertex2f(0.42f,-0.98f);
    glEnd();

    //building 7 done------------------------------------------------






    // building 8 starts------------------------------------------------------------------------------------------------------------



    glBegin(GL_POLYGON);
    glColor3ub(0,139,0);
    glVertex2f(0.8f,0.2f);
    glVertex2f(0.95f,0.2f);
    glVertex2f(0.95f,-1.0f);
    glVertex2f(0.8f,-1.0f);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(240,230,140);
    glVertex2f(0.82f,0.15f);
    glVertex2f(0.93f,0.15f);
    glVertex2f(0.93f,-1.0f);
    glVertex2f(0.82f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.845f,0.15f);
    glVertex2f(0.845f,-1.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.87f,0.15f);
    glVertex2f(0.87f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.90f,0.15f);
    glVertex2f(0.90f,-1.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,0.1f);
    glVertex2f(0.93f,0.1f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,0.0f);
    glVertex2f(0.93f,0.0f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.1f);
    glVertex2f(0.93f,-0.1f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.2f);
    glVertex2f(0.93f,-0.2f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.3f);
    glVertex2f(0.93f,-0.3f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.4f);
    glVertex2f(0.93f,-0.4f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.5f);
    glVertex2f(0.93f,-0.5f);
    glEnd();




    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.6f);
    glVertex2f(0.93f,-0.6f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.7f);
    glVertex2f(0.93f,-0.7f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.8f);
    glVertex2f(0.93f,-0.8f);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,139,0);
    glVertex2f(0.82f,-0.9f);
    glVertex2f(0.93f,-0.9f);
    glEnd();

    //building 8 done..................................


    //Plane-----------------------------------------------------
    glPushMatrix();
        glTranslatef(moveP,0.0f,0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(150,120,150);
    glVertex2f(0.0f,0.7f);
    glVertex2f(0.08f,0.73f);
    glVertex2f(0.35f,0.73f);
    glVertex2f(0.35f,0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(150,120,150);
    glVertex2f(0.25f,0.73f);
    glVertex2f(0.29f,0.77f);
    glVertex2f(0.35f,0.77f);
    glVertex2f(0.35f,0.73f);
    glEnd();
    glPopMatrix();












    //Snow--------------------------------------------------------------------------------------------------------------------


   glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);

        //Line 1 -----------
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-1.0, -1.15, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
    glPopMatrix();


    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.8, -1.15, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
    glPopMatrix();


    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.6, -1.15, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
    glPopMatrix();


    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.4, -1.15, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
    glPopMatrix();



    glPushMatrix();
  glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.2, -1.15, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
      glPopMatrix();



    glPushMatrix();
  glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.0, -1.15, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
glPopMatrix();



    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.2, -1.15, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
glPopMatrix();

    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.4, -1.15, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
      glPopMatrix();



    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.6, -1.15, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
      glPopMatrix();



    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.7, -1.15, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
       glPopMatrix();



    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.10, -1.15, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
     glPopMatrix();


        //Line 2---------------

    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-1.0, -1.05, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
glPopMatrix();


    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.8, -1.05, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
     glPopMatrix();


    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.6, -1.05, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
      glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.4, -1.05, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
      glPopMatrix();


    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.2, -1.05, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
     glPopMatrix();


    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.0, -1.05, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
glPopMatrix();


    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.2, -1.05, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
glPopMatrix();

    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.4, -1.05, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.6, -1.05, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
    glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.8, -1.05, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
     glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.10, -1.05, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
      glPopMatrix();



        //Line 3---------------


    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-1.0, -0.98, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
glPopMatrix();



    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.8, -0.98, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
     glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.6, -0.98, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
    glPopMatrix();





    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.4, -0.98, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
     glPopMatrix();





    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.2, -0.98, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
    glPopMatrix();





    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.0, -0.98, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
glPopMatrix();





    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.2, -0.98, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.4, -0.98, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
    glPopMatrix();





    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.6, -0.98, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
     glPopMatrix();





    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.8, -0.98, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
     glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.10, -0.98, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
     glPopMatrix();




        //Line 4---------------
    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-1.0, -0.9, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.8, -0.9, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.6, -0.9, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.4, -0.9, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
     glPopMatrix();



    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.2, -0.9, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
    glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.0, -0.9, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.2, -0.9, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.4, -0.98, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
      glPopMatrix();





    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.6, -0.9, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
     glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.8, -0.9, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
     glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.10, -0.9, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
     glPopMatrix();




        //Line 5--------------



    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.9, -0.8, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
glPopMatrix();


    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.7, -0.8, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
    glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.5, -0.8, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
    glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.3, -0.8, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
   glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.1, -0.8, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();

   glPopMatrix();



    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.1, -0.8, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();

glPopMatrix();



    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.3, -0.8, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.5, -0.8, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
    glPopMatrix();





    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.7, -0.8, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
    glPopMatrix();





    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.9, -0.8, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
    glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.95, -0.8, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
    glPopMatrix();


    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.6, -0.9, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
     glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.8, -0.9, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
     glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.354, -0.9, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
     glPopMatrix();




        //Line 5--------------



    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.54, -0.34, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
glPopMatrix();


    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.23, -0.8, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
    glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.57, -0.8, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
    glPopMatrix();

       glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.31, -0.98, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
     glPopMatrix();





    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.29, -0.98, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
    glPopMatrix();





    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.234, -0.98, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
glPopMatrix();





    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.456, -0.98, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.789, -0.98, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
    glPopMatrix();





    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.69, -0.98, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
     glPopMatrix();





    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.89, -0.98, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
     glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.92, -0.98, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
     glPopMatrix();




        //Line 4---------------
    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.94, -0.9, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.81, -0.9, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.675, -0.9, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   glTranslatef(0.0f,moveSnow2,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.82, -0.9, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
     glPopMatrix();



    glPushMatrix();
   glTranslatef(0.0f,moveSnow3,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.2, -0.7, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
    glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow1,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(-0.0, -0.2, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.1, -0.9, 0);
        glutSolidSphere(0.002, 250, 250);
        glPopMatrix();
glPopMatrix();




    glPushMatrix();
   glTranslatef(0.0f,moveSnow4,0.0f);
        glPushMatrix();
        glColor3ub(255,255,255);
        glTranslatef(0.5, -0.98, 0);
        glutSolidSphere(0.005, 250, 250);
        glPopMatrix();
      glPopMatrix();






    glutSwapBuffers();
}



void SpecialInput(int key, int x, int y)
    {
    switch(key)
    {
        case GLUT_KEY_UP:
            day = false;
            night = true;
            glutDisplayFunc(display);
            break;
        case GLUT_KEY_DOWN:
                    if(day == false){
                        glutDisplayFunc(display2);
                        day=true;
                        night=false;
                    }


                    day=true;
                    night=false;
            break;
        case GLUT_KEY_LEFT:
                glutDisplayFunc(display3);
                break;
        case GLUT_KEY_RIGHT:
                glutDisplayFunc(display4);
                break;

    }

    glutPostRedisplay();
}


int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowSize(1400,1000);
    glutCreateWindow("Life of a Programmer");
    glutSpecialFunc(SpecialInput);
    glutDisplayFunc(display);
    glutTimerFunc(20, update1, 0);
    glutTimerFunc(20, update2, 0);
    glutTimerFunc(20, update3, 0);
    glutTimerFunc(20, update4, 0);
    glutTimerFunc(20, update5, 0);
    glutTimerFunc(20, update6, 0);
    glutTimerFunc(20, update7, 0);
    glutTimerFunc(20, update8, 0);
    glutTimerFunc(20, update9, 0);
    glutMainLoop();

    return 0;
}
