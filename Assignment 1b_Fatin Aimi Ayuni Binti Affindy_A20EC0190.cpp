//****************************************
// Assignment 1b                         *
// Name: Fatin Aimi Ayuni Binti Affindy  *
// Matric No: A20EC0190                  *
// Section: 01                           *
//****************************************

#include <GL/glut.h> // Include the GLUT header file
#include <math.h>

float angle = 0.0;

void circle(float x, float y, float z, double r) 
{
	// this function will draw circle using connecting points
	float x1, y1, pi = 3.1416;
	glBegin(GL_POLYGON);
		for (int i = 0; i < 200; i++) 
		{
			float A = (i * pi * 2) / 25;
			float x1 = x + ((r - 0.07) * cos(A));
			float y1 = y + ((r)*sin(A));
			glVertex3f(x1, y1, z);
		}
	glEnd();
}

void changeSize(int w, int h) 
{

	// Prevent a divide by zero, when window is too short
	// (you cant make a window of zero width)
	if (h == 0)
		h = 1;

	float ratio = w * 1.0 / h;

	// Set the viewport to be the entire window
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);

	// Use the Projection Matrix
	glMatrixMode(GL_PROJECTION);

	// Reset matrix
	glLoadIdentity();

	// Set the correct perspective to view 3d objects
	gluPerspective(45, ratio, 1, 200);

	// Get back to the modelview
	glMatrixMode(GL_MODELVIEW);
}

void firework()
{
	// this function will create firework using GL_LINES 
	// which will connect 2 consecutive vertices into a line.

	glBegin(GL_LINES);

		// firework 1
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(-40.0, 21.0, 0.0);
		glVertex3f(-42.0, 21.0, 0.0);
		glVertex3f(-41.5, 20.0, 0.0);
		glVertex3f(-42.5, 20.5, 0.0);
		glVertex3f(-43.0, 20.5, 0.0);
		glVertex3f(-43.0, 18.5, 0.0);
		glVertex3f(-43.5, 20.5, 0.0);
		glVertex3f(-44.5, 20.0, 0.0);
		glVertex3f(-43.0, 21.0, 1.0);
		glVertex3f(-43.0, 21.0, 3.0);

		glVertex3f(-44.0, 21.0, 0.0);
		glVertex3f(-46.0, 21.0, 0.0);
		glVertex3f(-41.5, 22.0, 0.0);
		glVertex3f(-42.5, 21.5, 0.0);
		glVertex3f(-43.0, 22.0, 0.0);
		glVertex3f(-43.0, 24.0, 0.0);
		glVertex3f(-43.5, 21.5, 0.0);
		glVertex3f(-44.5, 22.5, 0.0);
		glVertex3f(-43.0, 21.0, -3.0);
		glVertex3f(-43.0, 21.0, -1.0);

		// firework 2
		glVertex3f(-17.0, 17.0, 0.0);
		glVertex3f(-19.0, 17.0, 0.0);
		glVertex3f(-18.5, 16.0, 0.0);
		glVertex3f(-19.5, 16.5, 0.0);
		glVertex3f(-20.0, 16.5, 0.0);
		glVertex3f(-20.0, 14.5, 0.0);
		glVertex3f(-20.5, 16.5, 0.0);
		glVertex3f(-21.5, 16.0, 0.0);
		glVertex3f(-20.0, 17.0, 1.0);
		glVertex3f(-20.0, 17.0, 3.0);

		glVertex3f(-21.0, 17.0, 0.0);
		glVertex3f(-23.0, 17.0, 0.0);
		glVertex3f(-18.5, 18.0, 0.0);
		glVertex3f(-19.5, 17.5, 0.0);
		glVertex3f(-20.0, 18.0, 0.0);
		glVertex3f(-20.0, 20.0, 0.0);
		glVertex3f(-20.5, 17.5, 0.0);
		glVertex3f(-21.5, 18.5, 0.0);
		glVertex3f(-20.0, 17.0, -3.0);
		glVertex3f(-20.0, 17.0, -1.0);

		// firework 3
		glVertex3f(17.0, 15.0, 0.0);
		glVertex3f(19.0, 15.0, 0.0);
		glVertex3f(18.5, 14.0, 0.0);
		glVertex3f(19.5, 14.5, 0.0);
		glVertex3f(20.0, 14.5, 0.0);
		glVertex3f(20.0, 12.5, 0.0);
		glVertex3f(20.5, 14.5, 0.0);
		glVertex3f(21.5, 14.0, 0.0);
		glVertex3f(20.0, 15.0, 1.0);
		glVertex3f(20.0, 15.0, 3.0);

		glVertex3f(21.0, 15.0, 0.0);
		glVertex3f(23.0, 15.0, 0.0);
		glVertex3f(18.5, 16.0, 0.0);
		glVertex3f(19.5, 15.5, 0.0);
		glVertex3f(20.0, 16.0, 0.0);
		glVertex3f(20.0, 18.0, 0.0);
		glVertex3f(20.5, 15.5, 0.0);
		glVertex3f(21.5, 16.5, 0.0);
		glVertex3f(20.0, 15.0, -3.0);
		glVertex3f(20.0, 15.0, -1.0);
		
		// firework 4
		glVertex3f(32.0, 13.0, 0.0);
		glVertex3f(34.0, 13.0, 0.0);
		glVertex3f(33.5, 12.0, 0.0);
		glVertex3f(34.5, 12.5, 0.0);
		glVertex3f(35.0, 12.5, 0.0);
		glVertex3f(35.0, 10.5, 0.0);
		glVertex3f(35.5, 12.5, 0.0);
		glVertex3f(36.5, 12.0, 0.0);
		glVertex3f(35.0, 13.0, 1.0);
		glVertex3f(35.0, 13.0, 3.0);

		glVertex3f(36.0, 13.0, 0.0);
		glVertex3f(38.0, 13.0, 0.0);
		glVertex3f(33.5, 14.0, 0.0);
		glVertex3f(34.5, 13.5, 0.0);
		glVertex3f(35.0, 14.0, 0.0);
		glVertex3f(35.0, 16.0, 0.0);
		glVertex3f(35.5, 13.5, 0.0);
		glVertex3f(36.5, 14.5, 0.0);
		glVertex3f(35.0, 13.0, -3.0);
		glVertex3f(35.0, 13.0, -1.0);

		// firework 5
		glVertex3f(47.0, 21.0, 0.0);
		glVertex3f(49.0, 21.0, 0.0);
		glVertex3f(48.5, 20.0, 0.0);
		glVertex3f(49.5, 20.5, 0.0);
		glVertex3f(50.0, 20.5, 0.0);
		glVertex3f(50.0, 18.5, 0.0);
		glVertex3f(50.5, 20.5, 0.0);
		glVertex3f(51.5, 20.0, 0.0);
		glVertex3f(50.0, 21.0, 1.0);
		glVertex3f(50.0, 21.0, 3.0);

		glVertex3f(51.0, 21.0, 0.0);
		glVertex3f(53.0, 21.0, 0.0);
		glVertex3f(48.5, 22.0, 0.0);
		glVertex3f(49.5, 21.5, 0.0);
		glVertex3f(50.0, 22.0, 0.0);
		glVertex3f(50.0, 24.0, 0.0);
		glVertex3f(50.5, 21.5, 0.0);
		glVertex3f(51.5, 22.5, 0.0);
		glVertex3f(50.0, 21.0, -3.0);
		glVertex3f(50.0, 21.0, -1.0);

	glEnd();

}

void car1()
{
	// this function will draw the car using the circle function to draw the tyres
	// and GL_QUADS to draw the car body which will take 4 consecutive vertices 
	// and make them a quadrilateral.
	
	// tyres
	glColor3f(0.22, 0.21, 0.2);
	circle(22.0, -11.5, -3.0, 1.0);
	circle(30.0, -11.5, -3.0, 1.0);
	circle(22.0, -11.5, -8.0, 1.0);
	circle(30.0, -11.5, -8.0, 1.0);

	glBegin(GL_QUADS);

		// front window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(23.0, -7.05, -7.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(22.0, -8.75, -7.5);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(22.0, -8.75, -3.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(23.0, -7.05, -3.5);

		// back window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(29.0, -7.05, -3.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(30.0, -8.75, -3.5);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(30.0, -8.75, -7.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(29.0, -7.05, -7.5);

		// left window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(24.0, -7.25, -3.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(23.0, -8.75, -3.0);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(29.0, -8.75, -3.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(28.0, -7.25, -3.0);

		// right window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(24.0, -7.25, -8.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(23.0, -8.75, -8.0);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(29.0, -8.75, -8.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(28.0, -7.25, -8.0);

		// front side of car
		glColor3f(0.06, 0.09, 0.24);
		glVertex3f(23.0, -7.0, -3.0);
		glVertex3f(22.0, -9.0, -3.0);
		glVertex3f(30.0, -9.0, -3.0);
		glVertex3f(29.0, -7.0, -3.0);

		glVertex3f(20.0, -9.0, -3.0);
		glVertex3f(20.0, -11.5, -3.0);
		glVertex3f(32.0, -11.5, -3.0);
		glVertex3f(32.0, -9.0, -3.0);

		glVertex3f(20.0, -9.0, -8.0);
		glVertex3f(20.0, -11.5, -8.0);
		glVertex3f(20.0, -11.5, -3.0);
		glVertex3f(20.0, -9.0, -3.0);

		glColor3f(0.06, 0.09, 0.24);
		glVertex3f(23.0, -9.0, -8.0);
		glVertex3f(20.0, -9.0, -8.0);
		glVertex3f(20.0, -9.0, -3.0);
		glVertex3f(23.0, -9.0, -3.0);

		// back side of car
		glVertex3f(23.0, -7.0, -8.0);
		glVertex3f(22.0, -9.0, -8.0);
		glVertex3f(30.0, -9.0, -8.0);
		glVertex3f(29.0, -7.0, -8.0);

		glVertex3f(20.0, -9.0, -8.0);
		glVertex3f(20.0, -11.5, -8.0);
		glVertex3f(32.0, -11.5, -8.0);
		glVertex3f(32.0, -9.0, -8.0);

		glVertex3f(32.0, -9.0, -3.0);
		glVertex3f(32.0, -11.5, -3.0);
		glVertex3f(32.0, -11.5, -8.0);
		glVertex3f(32.0, -9.0, -8.0);

		glVertex3f(32.0, -9.0, -8.0);
		glVertex3f(29.0, -9.0, -8.0);
		glVertex3f(29.0, -9.0, -3.0);
		glVertex3f(32.0, -9.0, -3.0);

		// rearview 
		glVertex3f(23.0, -7.0, -8.0);
		glVertex3f(22.0, -9.0, -8.0);
		glVertex3f(22.0, -9.0, -3.0);
		glVertex3f(23.0, -7.0, -3.0);

		// backview
		glVertex3f(29.0, -7.0, -3.0);
		glVertex3f(30.0, -9.0, -3.0);
		glVertex3f(30.0, -9.0, -8.0);
		glVertex3f(29.0, -7.0, -8.0);

		// car roof
		glVertex3f(29.0, -7.0, -8.0);
		glVertex3f(23.0, -7.0, -8.0);
		glVertex3f(23.0, -7.0, -3.0);
		glVertex3f(29.0, -7.0, -3.0);

	glEnd();
}

void car2()
{
	// this function will draw the car using the circle function to draw the tyres
	// and GL_QUADS to draw the car body which will take 4 consecutive vertices 
	// and make them a quadrilateral.

	// tyres
	glColor3f(0.22, 0.21, 0.2);
	circle(-22.0, -11.5, -3.0, 1.0);
	circle(-30.0, -11.5, -3.0, 1.0);
	circle(-22.0, -11.5, -8.0, 1.0);
	circle(-30.0, -11.5, -8.0, 1.0);

	glBegin(GL_QUADS);

		// front window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-23.0, -7.05, -7.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-22.0, -8.75, -7.5);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-22.0, -8.75, -3.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-23.0, -7.05, -3.5);

		// back window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-29.0, -7.05, -3.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-30.0, -8.75, -3.5);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-30.0, -8.75, -7.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-29.0, -7.05, -7.5);

		// left window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-24.0, -7.25, -3.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-23.0, -8.75, -3.0);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-29.0, -8.75, -3.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-28.0, -7.25, -3.0);

		// right window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-24.0, -7.25, -8.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-23.0, -8.75, -8.0);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-29.0, -8.75, -8.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-28.0, -7.25, -8.0);

		// front side of car
		glColor3f(0.41, 0.05, 0.3);
		glVertex3f(-23.0, -7.0, -3.0);
		glVertex3f(-22.0, -9.0, -3.0);
		glVertex3f(-30.0, -9.0, -3.0);
		glVertex3f(-29.0, -7.0, -3.0);

		glVertex3f(-20.0, -9.0, -3.0);
		glVertex3f(-20.0, -11.5, -3.0);
		glVertex3f(-32.0, -11.5, -3.0);
		glVertex3f(-32.0, -9.0, -3.0);

		glVertex3f(-20.0, -9.0, -8.0);
		glVertex3f(-20.0, -11.5, -8.0);
		glVertex3f(-20.0, -11.5, -3.0);
		glVertex3f(-20.0, -9.0, -3.0);

		glVertex3f(-23.0, -9.0, -8.0);
		glVertex3f(-20.0, -9.0, -8.0);
		glVertex3f(-20.0, -9.0, -3.0);
		glVertex3f(-23.0, -9.0, -3.0);

		// back side of car
		glVertex3f(-23.0, -7.0, -8.0);
		glVertex3f(-22.0, -9.0, -8.0);
		glVertex3f(-30.0, -9.0, -8.0);
		glVertex3f(-29.0, -7.0, -8.0);

		glVertex3f(-20.0, -9.0, -8.0);
		glVertex3f(-20.0, -11.5, -8.0);
		glVertex3f(-32.0, -11.5, -8.0);
		glVertex3f(-32.0, -9.0, -8.0);

		glVertex3f(-32.0, -9.0, -3.0);
		glVertex3f(-32.0, -11.5, -3.0);
		glVertex3f(-32.0, -11.5, -8.0);
		glVertex3f(-32.0, -9.0, -8.0);

		glVertex3f(-32.0, -9.0, -8.0);
		glVertex3f(-29.0, -9.0, -8.0);
		glVertex3f(-29.0, -9.0, -3.0);
		glVertex3f(-32.0, -9.0, -3.0);

		// rearview 
		glVertex3f(-23.0, -7.0, -8.0);
		glVertex3f(-22.0, -9.0, -8.0);
		glVertex3f(-22.0, -9.0, -3.0);
		glVertex3f(-23.0, -7.0, -3.0);

		// backview
		glVertex3f(-29.0, -7.0, -3.0);
		glVertex3f(-30.0, -9.0, -3.0);
		glVertex3f(-30.0, -9.0, -8.0);
		glVertex3f(-29.0, -7.0, -8.0);

		// car roof
		glVertex3f(-29.0, -7.0, -8.0);
		glVertex3f(-23.0, -7.0, -8.0);
		glVertex3f(-23.0, -7.0, -3.0);
		glVertex3f(-29.0, -7.0, -3.0);

	glEnd();
}

void car3()
{
	// this function will draw the car using the circle function to draw the tyres
	// and GL_QUADS to draw the car body which will take 4 consecutive vertices 
	// and make them a quadrilateral.

	// tyres
	glColor3f(0.22, 0.21, 0.2);
	circle(42.0, -11.5, -3.0, 1.0);
	circle(50.0, -11.5, -3.0, 1.0);
	circle(42.0, -11.5, -8.0, 1.0);
	circle(50.0, -11.5, -8.0, 1.0);

	glBegin(GL_QUADS);

		// front window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(43.0, -7.05, -7.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(42.0, -8.75, -7.5);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(42.0, -8.75, -3.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(43.0, -7.05, -3.5);

		// back window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(49.0, -7.05, -3.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(50.0, -8.75, -3.5);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(50.0, -8.75, -7.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(49.0, -7.05, -7.5);

		// left window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(44.0, -7.25, -3.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(43.0, -8.75, -3.0);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(49.0, -8.75, -3.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(48.0, -7.25, -3.0);

		// right window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(44.0, -7.25, -8.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(43.0, -8.75, -8.0);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(49.0, -8.75, -8.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(48.0, -7.25, -8.0);

		// front side of car
		glColor3f(0.21, 0.13, 0.26);
		glVertex3f(43.0, -7.0, -3.0);
		glVertex3f(42.0, -9.0, -3.0);
		glVertex3f(50.0, -9.0, -3.0);
		glVertex3f(49.0, -7.0, -3.0);

		glVertex3f(40.0, -9.0, -3.0);
		glVertex3f(40.0, -11.5, -3.0);
		glVertex3f(52.0, -11.5, -3.0);
		glVertex3f(52.0, -9.0, -3.0);

		glVertex3f(40.0, -9.0, -8.0);
		glVertex3f(40.0, -11.5, -8.0);
		glVertex3f(40.0, -11.5, -3.0);
		glVertex3f(40.0, -9.0, -3.0);

		glVertex3f(43.0, -9.0, -8.0);
		glVertex3f(40.0, -9.0, -8.0);
		glVertex3f(40.0, -9.0, -3.0);
		glVertex3f(43.0, -9.0, -3.0);

		// back side of car
		glVertex3f(43.0, -7.0, -8.0);
		glVertex3f(42.0, -9.0, -8.0);
		glVertex3f(50.0, -9.0, -8.0);
		glVertex3f(49.0, -7.0, -8.0);

		glVertex3f(40.0, -9.0, -8.0);
		glVertex3f(40.0, -11.5, -8.0);
		glVertex3f(52.0, -11.5, -8.0);
		glVertex3f(52.0, -9.0, -8.0);

		glVertex3f(52.0, -9.0, -3.0);
		glVertex3f(52.0, -11.5, -3.0);
		glVertex3f(52.0, -11.5, -8.0);
		glVertex3f(52.0, -9.0, -8.0);

		glVertex3f(52.0, -9.0, -8.0);
		glVertex3f(51.0, -9.0, -8.0);
		glVertex3f(51.0, -9.0, -3.0);
		glVertex3f(52.0, -9.0, -3.0);

		// rearview 
		glVertex3f(43.0, -7.0, -8.0);
		glVertex3f(42.0, -9.0, -8.0);
		glVertex3f(42.0, -9.0, -3.0);
		glVertex3f(43.0, -7.0, -3.0);

		// backview
		glVertex3f(49.0, -7.0, -3.0);
		glVertex3f(50.0, -9.0, -3.0);
		glVertex3f(50.0, -9.0, -8.0);
		glVertex3f(49.0, -7.0, -8.0);

		// car roof
		glVertex3f(49.0, -7.0, -8.0);
		glVertex3f(43.0, -7.0, -8.0);
		glVertex3f(43.0, -7.0, -3.0);
		glVertex3f(49.0, -7.0, -3.0);

	glEnd();
}

void car4()
{
	// this function will draw the car using the circle function to draw the tyres
	// and GL_QUADS to draw the car body which will take 4 consecutive vertices 
	// and make them a quadrilateral.

	// tyres
	glColor3f(0.22, 0.21, 0.2);
	circle(-42.0, -11.5, -3.0, 1.0);
	circle(-50.0, -11.5, -3.0, 1.0);
	circle(-42.0, -11.5, -8.0, 1.0);
	circle(-50.0, -11.5, -8.0, 1.0);

	glBegin(GL_QUADS);

		// front window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-43.0, -7.05, -7.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-42.0, -8.75, -7.5);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-42.0, -8.75, -3.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-43.0, -7.05, -3.5);

		// back window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-49.0, -7.05, -3.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-50.0, -8.75, -3.5);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-50.0, -8.75, -7.5);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-49.0, -7.05, -7.5);

		// left window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-44.0, -7.25, -3.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-43.0, -8.75, -3.0);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-49.0, -8.75, -3.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-48.0, -7.25, -3.0);

		// right window
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-44.0, -7.25, -8.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-43.0, -8.75, -8.0);
		glColor3f(0.25, 0.28, 0.39);
		glVertex3f(-49.0, -8.75, -8.0);
		glColor3f(0.53, 0.57, 0.77);
		glVertex3f(-48.0, -7.25, -8.0);

		// front side of car
		glColor3f(0.07, 0.5, 0.49);
		glVertex3f(-43.0, -7.0, -3.0);
		glVertex3f(-42.0, -9.0, -3.0);
		glVertex3f(-50.0, -9.0, -3.0);
		glVertex3f(-49.0, -7.0, -3.0);

		glVertex3f(-40.0, -9.0, -3.0);
		glVertex3f(-40.0, -11.5, -3.0);
		glVertex3f(-52.0, -11.5, -3.0);
		glVertex3f(-52.0, -9.0, -3.0);

		glVertex3f(-40.0, -9.0, -8.0);
		glVertex3f(-40.0, -11.5, -8.0);
		glVertex3f(-40.0, -11.5, -3.0);
		glVertex3f(-40.0, -9.0, -3.0);

		glVertex3f(-43.0, -9.0, -8.0);
		glVertex3f(-40.0, -9.0, -8.0);
		glVertex3f(-40.0, -9.0, -3.0);
		glVertex3f(-43.0, -9.0, -3.0);

		// back side of car
		glVertex3f(-43.0, -7.0, -8.0);
		glVertex3f(-42.0, -9.0, -8.0);
		glVertex3f(-50.0, -9.0, -8.0);
		glVertex3f(-49.0, -7.0, -8.0);

		glVertex3f(-40.0, -9.0, -8.0);
		glVertex3f(-40.0, -11.5, -8.0);
		glVertex3f(-52.0, -11.5, -8.0);
		glVertex3f(-52.0, -9.0, -8.0);

		glVertex3f(-52.0, -9.0, -3.0);
		glVertex3f(-52.0, -11.5, -3.0);
		glVertex3f(-52.0, -11.5, -8.0);
		glVertex3f(-52.0, -9.0, -8.0);

		glVertex3f(-52.0, -9.0, -8.0);
		glVertex3f(-51.0, -9.0, -8.0);
		glVertex3f(-51.0, -9.0, -3.0);
		glVertex3f(-52.0, -9.0, -3.0);

		// rearview 
		glVertex3f(-43.0, -7.0, -8.0);
		glVertex3f(-42.0, -9.0, -8.0);
		glVertex3f(-42.0, -9.0, -3.0);
		glVertex3f(-43.0, -7.0, -3.0);

		// backview
		glVertex3f(-49.0, -7.0, -3.0);
		glVertex3f(-50.0, -9.0, -3.0);
		glVertex3f(-50.0, -9.0, -8.0);
		glVertex3f(-49.0, -7.0, -8.0);

		// car roof
		glVertex3f(-49.0, -7.0, -8.0);
		glVertex3f(-43.0, -7.0, -8.0);
		glVertex3f(-43.0, -7.0, -3.0);
		glVertex3f(-49.0, -7.0, -3.0);

	glEnd();
}

void house()
{
	// this function will draw the house using GL_LINES which will
	// connect 2 consecutive vertices into a line to make the outline 
	// of the windows and front door and the gates at the back of the house, 
	// GL_TRIANGLES which will connect 3 consecutive vertices into a triangle
	// to make the roof,
	// and GL_QUADS which will connect 4 consecutive vertices into a quadrilateral
	// to make the house.

	float y = -1.0, x = -4.0;
	glBegin(GL_LINES);
		glColor3f(0.31, 0.27, 0.24);
		while (y <= 3.5)
		{
			// window
			glVertex2f(-14.0, y);
			glVertex2f(-11.0, y);
			glVertex2f(-10.0, y);
			glVertex2f(-7.0, y);
			glVertex2f(11.0, y);
			glVertex2f(14.0, y);
			glVertex2f(7.0, y);
			glVertex2f(10.0, y);
			y += 0.5;
		}
		// window outline
		glVertex2f(-14.0, -1.0);
		glVertex2f(-14.0, 3.5);
		glVertex2f(-11.0, -1.0);
		glVertex2f(-11.0, 3.5);
		glVertex2f(-10.0, -1.0);
		glVertex2f(-10.0, 3.5);
		glVertex2f(-7.0, -1.0);
		glVertex2f(-7.0, 3.5);

		glVertex2f(14.0, -1.0);
		glVertex2f(14.0, 3.5);
		glVertex2f(11.0, -1.0);
		glVertex2f(11.0, 3.5);
		glVertex2f(10.0, -1.0);
		glVertex2f(10.0, 3.5);
		glVertex2f(7.0, -1.0);
		glVertex2f(7.0, 3.5);

		// front door
		glVertex2f(-4.0, -4.0);
		glVertex2f(-4.0, 1.5);
		glVertex2f(4.0, -4.0);
		glVertex2f(4.0, 1.5);
		glVertex2f(-4.0, -4.0);
		glVertex2f(4.0, -4.0);
		glVertex2f(-4.0, 1.5);
		glVertex2f(4.0, 1.5);

		glVertex2f(-2.0, -4.0);
		glVertex2f(-2.0, 1.5);
		glVertex2f(2.0, -4.0);
		glVertex2f(2.0, 1.5);
		glVertex2f(-4.0, -2.0);
		glVertex2f(4.0, -2.0);

		// lower part of the front door
		while (x < 4.0)
		{
			glVertex2f(x, -2.0);
			glVertex2f(x, -4.0);
			x += 0.5;
		}

		// gates
		x = -78.0;
		while (x < 78.0)
		{
			glVertex3f(x, -13.0, -17.0);
			glVertex3f(x, -9.0, -17.0);
			x += 2.0;
		}

		glVertex3f(-78.0, -9.0, -17.0);
		glVertex3f(78.0, -9.0, -17.0);
		glVertex3f(-78.0, -11.0, -17.0);
		glVertex3f(78.0, -11.0, -17.0);

	glEnd();

	glBegin(GL_QUADS);

		// door
		glColor3f(0.47, 0.4, 0.36);
		glVertex2f(-4.0, 1.5);
		glColor3f(0.6, 0.51, 0.45);
		glVertex2f(-4.0, -4.0);
		glVertex2f(4.0, -4.0);
		glColor3f(0.47, 0.4, 0.36);
		glVertex2f(4.0, 1.5);

		// window 1
		glColor3f(0.47, 0.4, 0.36);
		glVertex2f(-14.0, 3.5);
		glColor3f(0.6, 0.51, 0.45);
		glVertex2f(-14.0, -1.0);
		glVertex2f(-11.0, -1.0);
		glColor3f(0.47, 0.4, 0.36);
		glVertex2f(-11.0, 3.5);

		// window 2
		glColor3f(0.47, 0.4, 0.36);
		glVertex2f(-10.0, 3.5);
		glColor3f(0.6, 0.51, 0.45);
		glVertex2f(-10.0, -1.0);
		glVertex2f(-7.0, -1.0);
		glColor3f(0.47, 0.4, 0.36);
		glVertex2f(-7.0, 3.5);

		// window 3
		glColor3f(0.47, 0.4, 0.36);
		glVertex2f(14.0, 3.5);
		glColor3f(0.6, 0.51, 0.45);
		glVertex2f(14.0, -1.0);
		glVertex2f(11.0, -1.0);
		glColor3f(0.47, 0.4, 0.36);
		glVertex2f(11.0, 3.5);

		// window 4
		glColor3f(0.47, 0.4, 0.36);
		glVertex2f(10.0, 3.5);
		glColor3f(0.6, 0.51, 0.45);
		glVertex2f(10.0, -1.0);
		glVertex2f(7.0, -1.0);
		glColor3f(0.47, 0.4, 0.36);
		glVertex2f(7.0, 3.5);

		// roof window 1
		glColor3f(0.47, 0.4, 0.36);
		glVertex3f(-5.0, 9.0, 0.0);
		glColor3f(0.6, 0.51, 0.45);
		glVertex3f(-5.0, 7.0, 3.0);
		glVertex3f(-3.0, 7.0, 3.0);
		glColor3f(0.47, 0.4, 0.36);
		glVertex3f(-3.0, 9.0, 0.0);

		// roof window 2
		glColor3f(0.47, 0.4, 0.36);
		glVertex3f(-1.0, 9.0, 0.0);
		glColor3f(0.6, 0.51, 0.45);
		glVertex3f(-1.0, 7.0, 3.0);
		glVertex3f(1.0, 7.0, 3.0);
		glColor3f(0.47, 0.4, 0.36);
		glVertex3f(1.0, 9.0, 0.0);

		// roof window 3
		glColor3f(0.47, 0.4, 0.36);
		glVertex3f(3.0, 9.0, 0.0);
		glColor3f(0.6, 0.51, 0.45);
		glVertex3f(3.0, 7.0, 3.0);
		glVertex3f(5.0, 7.0, 3.0);
		glColor3f(0.47, 0.4, 0.36);
		glVertex3f(5.0, 9.0, 0.0);

		// front roof-wall
		glColor3f(0.54, 0.37, 0.26);
		glVertex3f(-7.0, 10.0, 0.0);
		glVertex3f(-7.0, 6.0, 3.0);
		glVertex3f(7.0, 6.0, 3.0);
		glVertex3f(7.0, 10.0, 0.0);

		// back roof-wall
		glColor3f(0.54, 0.37, 0.26);
		glVertex3f(-7.0, 10.0, -15.0);
		glVertex3f(-7.0, 6.0, -18.0);
		glVertex3f(7.0, 6.0, -18.0);
		glVertex3f(7.0, 10.0, -15.0);

		// roof
		glColor3f(0.54, 0.37, 0.26);
		glVertex3f(-7.0, 10.0, -15.0);
		glVertex3f(-18.0, 6.0, -18.0);
		glVertex3f(-18.0, 6.0, 3.0);
		glVertex3f(-7.0, 10.0, 0.0);

		glVertex3f(7.0, 10.0, 0.0);
		glVertex3f(18.0, 6.0, 3.0);
		glVertex3f(18.0, 6.0, -18.0);
		glVertex3f(7.0, 10.0, -15.0);

		glVertex3f(0.0, 16.0, -15.0);
		glVertex3f(-7.0, 10.0, -15.0);
		glVertex3f(-7.0, 10.0, 0.0);
		glVertex3f(0.0, 16.0, 0.0);

		glVertex3f(0.0, 16.0, 0.0);
		glVertex3f(7.0, 10.0, 0.0);
		glVertex3f(7.0, 10.0, -15.0);
		glVertex3f(0.0, 16.0, -15.0);

		glColor3f(0.34, 0.27, 0.22);
		glVertex3f(-15.0, 6.0, -15.0);
		glVertex3f(-18.0, 6.0, -15.0);
		glVertex3f(-18.0, 6.0, 0.0);
		glVertex3f(-15.0, 6.0, 0.0);

		glVertex3f(15.0, 6.0, 0.0);
		glVertex3f(18.0, 6.0, 0.0);
		glVertex3f(18.0, 6.0, -15.0);
		glVertex3f(15.0, 6.0, -15.0);

		glVertex3f(18.0, 6.0, -18.0);
		glVertex3f(-18.0, 6.0, -18.0);
		glVertex3f(-18.0, 6.0, -15.0);
		glVertex3f(18.0, 6.0, -15.0);

		glVertex3f(18.0, 6.0, 0.0);
		glVertex3f(-18.0, 6.0, 0.0);
		glVertex3f(-18.0, 6.0, 3.0);
		glVertex3f(18.0, 6.0, 3.0);

		// front house
		glColor3f(0.44, 0.3, 0.21);
		glVertex3f(-15.0, 6.0, 0.0);
		glColor3f(0.52, 0.32, 0.19);
		glVertex3f(-15.0, -5.0, 0.0);
		glVertex3f(15.0, -5.0, 0.0);
		glColor3f(0.44, 0.3, 0.21);
		glVertex3f(15.0, 6.0, 0.0);

		// back house
		glColor3f(0.44, 0.3, 0.21);
		glVertex3f(-15.0, 6.0, -15.0);
		glColor3f(0.52, 0.32, 0.19);
		glVertex3f(-15.0, -5.0, -15.0);
		glVertex3f(15.0, -5.0, -15.0);
		glColor3f(0.44, 0.3, 0.21);
		glVertex3f(15.0, 6.0, -15.0);

		// left house
		glColor3f(0.44, 0.3, 0.21);
		glVertex3f(-15.0, 6.0, -15.0);
		glColor3f(0.52, 0.32, 0.19);
		glVertex3f(-15.0, -5.0, -15.0);
		glVertex3f(-15.0, -5.0, 0.0);
		glColor3f(0.44, 0.3, 0.21);
		glVertex3f(-15.0, 6.0, 0.0);

		// right house
		glColor3f(0.44, 0.3, 0.21);
		glVertex3f(15.0, 6.0, 0.0);
		glColor3f(0.52, 0.32, 0.19);
		glVertex3f(15.0, -5.0, 0.0);
		glVertex3f(15.0, -5.0, -15.0);
		glColor3f(0.44, 0.3, 0.21);
		glVertex3f(15.0, 6.0, -15.0);

		// bottom house
		glColor3f(0.44, 0.3, 0.21);
		glVertex3f(15.0, -5.0, -15.0);
		glVertex3f(-15.0, -5.0, -15.0);
		glVertex3f(-15.0, -5.0, 0.0);
		glVertex3f(15.0, -5.0, 0.0);

		// top house
		glVertex3f(15.0, 6.0, -15.0);
		glVertex3f(-15.0, 6.0, -15.0);
		glVertex3f(-15.0, 6.0, 0.0);
		glVertex3f(15.0, 6.0, 0.0);

		// pillar 1
		glColor3f(0.44, 0.3, 0.21);
		glVertex3f(-15.0, -5.0, 0.0);
		glVertex3f(-15.0, -13.0, 0.0);
		glVertex3f(-14.5, -13.0, 0.0);
		glVertex3f(-14.5, -5.0, 0.0);

		glVertex3f(-15.0, -5.0, -0.5);
		glVertex3f(-15.0, -13.0, -0.5);
		glVertex3f(-14.5, -13.0, -0.5);
		glVertex3f(-14.5, -5.0, -0.5);

		glVertex3f(-15.0, -5.0, -0.5);
		glVertex3f(-15.0, -13.0, -0.5);
		glVertex3f(-15.0, -13.0, 0.0);
		glVertex3f(-15.0, -5.0, 0.0);

		glVertex3f(-14.5, -5.0, 0.0);
		glVertex3f(-14.5, -13.0, 0.0);
		glVertex3f(-14.5, -13.0, -0.5);
		glVertex3f(-14.5, -5.0, -0.5);

		// pillar 2
		glVertex3f(-15.0, -5.0, -15.0);
		glVertex3f(-15.0, -13.0, -15.0);
		glVertex3f(-14.5, -13.0, -15.0);
		glVertex3f(-14.5, -5.0, -15.0);

		glVertex3f(-15.0, -5.0, -14.5);
		glVertex3f(-15.0, -13.0, -14.5);
		glVertex3f(-14.5, -13.0, -14.5);
		glVertex3f(-14.5, -5.0, -14.5);

		glVertex3f(-15.0, -5.0, -15.0);
		glVertex3f(-15.0, -13.0, -15.0);
		glVertex3f(-15.0, -13.0, -14.5);
		glVertex3f(-15.0, -5.0, -14.5);

		glVertex3f(-14.5, -5.0, -14.5);
		glVertex3f(-14.5, -13.0, -14.5);
		glVertex3f(-14.5, -13.0, -15.0);
		glVertex3f(-14.5, -5.0, -15.0);

		// pillar 3
		glVertex3f(14.5, -5.0, -15.0);
		glVertex3f(14.5, -13.0, -15.0);
		glVertex3f(15.0, -13.0, -15.0);
		glVertex3f(15.0, -5.0, -15.0);

		glVertex3f(14.5, -5.0, -14.5);
		glVertex3f(14.5, -13.0, -14.5);
		glVertex3f(15.0, -13.0, -14.5);
		glVertex3f(15.0, -5.0, -14.5);

		glVertex3f(14.5, -5.0, -15.0);
		glVertex3f(14.5, -13.0, -15.0);
		glVertex3f(14.5, -13.0, -14.5);
		glVertex3f(14.5, -5.0, -14.5);

		glVertex3f(15.0, -5.0, -14.5);
		glVertex3f(15.0, -13.0, -14.5);
		glVertex3f(15.0, -13.0, -15.0);
		glVertex3f(15.0, -5.0, -15.0);

		// pillar 4
		glVertex3f(14.5, -5.0, 0.0);
		glVertex3f(14.5, -13.0, 0.0);
		glVertex3f(15.0, -13.0, 0.0);
		glVertex3f(15.0, -5.0, 0.0);

		glVertex3f(14.5, -5.0, -0.5);
		glVertex3f(14.5, -13.0, -0.5);
		glVertex3f(15.0, -13.0, -0.5);
		glVertex3f(15.0, -5.0, -0.5);

		glVertex3f(14.5, -5.0, -0.5);
		glVertex3f(14.5, -13.0, -0.5);
		glVertex3f(14.5, -13.0, 0.0);
		glVertex3f(14.5, -5.0, 0.0);

		glVertex3f(15.0, -5.0, 0.0);
		glVertex3f(15.0, -13.0, 0.0);
		glVertex3f(15.0, -13.0, -0.5);
		glVertex3f(15.0, -5.0, -0.5);

		// stair
		glColor3f(0.29, 0.2, 0.12);
		glVertex3f(-4.0, -4.0, 0.0);
		glVertex3f(-4.0, -5.0, 0.0);
		glVertex3f(-4.0, -14.0, 10.0);
		glVertex3f(-4.0, -13.0, 10.0);

		glVertex3f(4.0, -4.0, 0.0);
		glVertex3f(4.0, -5.0, 0.0);
		glVertex3f(4.0, -14.0, 10.0);
		glVertex3f(4.0, -13.0, 10.0);

		// steps
		glColor3f(0.46, 0.31, 0.19);
		glVertex3f(-4.0, -12.0, 7.5);
		glVertex3f(-4.0, -12.0, 9.5);
		glVertex3f(4.0, -12.0, 9.5);
		glVertex3f(4.0, -12.0, 7.5);

		glVertex3f(-4.0, -10.0, 5.5);
		glVertex3f(-4.0, -10.0, 7.5);
		glVertex3f(4.0, -10.0, 7.5);
		glVertex3f(4.0, -10.0, 5.5);

		glVertex3f(-4.0, -8.0, 3.5);
		glVertex3f(-4.0, -8.0, 5.5);
		glVertex3f(4.0, -8.0, 5.5);
		glVertex3f(4.0, -8.0, 3.5);

		glVertex3f(-4.0, -6.0, 1.5);
		glVertex3f(-4.0, -6.0, 3.5);
		glVertex3f(4.0, -6.0, 3.5);
		glVertex3f(4.0, -6.0, 1.5);
	
	glEnd();

	glBegin(GL_TRIANGLES);

		// front top roof
		glColor3f(0.44, 0.3, 0.21);
		glVertex3f(0.0, 16.0, 0.0);
		glColor3f(0.54, 0.37, 0.26);
		glVertex3f(-7.0, 10.0, 0.0);
		glVertex3f(7.0, 10.0, 0.0);

		// front left roof
		glColor3f(0.54, 0.37, 0.26);
		glVertex3f(-7.0, 10.0, 0.0);
		glVertex3f(-18.0, 6.0, 3.0);
		glVertex3f(-7.0, 6.0, 3.0);

		// front right roof
		glColor3f(0.54, 0.37, 0.26);
		glVertex3f(7, 10.0, 0.0);
		glVertex3f(18.0, 6.0, 3.0);
		glVertex3f(7.0, 6.0, 3.0);

		// back top roof
		glColor3f(0.44, 0.3, 0.21);
		glVertex3f(0.0, 16.0, -15.0);
		glColor3f(0.54, 0.37, 0.26);
		glVertex3f(-7.0, 10.0, -15.0);
		glVertex3f(7.0, 10.0, -15.0);

		// back left roof
		glColor3f(0.54, 0.37, 0.26);
		glVertex3f(-7.0, 10.0, -15.0);
		glVertex3f(-18.0, 6.0, -18.0);
		glVertex3f(-7.0, 6.0, -18.0);

		// back right roof
		glColor3f(0.54, 0.37, 0.26);
		glVertex3f(7, 10.0, -15.0);
		glVertex3f(18.0, 6.0, -18.0);
		glVertex3f(7.0, 6.0, -18.0);

	glEnd();
}

void moon()
{
	// this function will draw 2 overlapped circle so 
	// so it can make a crescent moon using the circle function.

	glColor3f(0.09, 0.1, 0.13);
	circle(-33.0, 18.0, 0.0, 3.0);
	glColor3f(0.8, 0.81, 0.48);
	circle(-35.0, 17.0, 0.0, 3.0);
}

void pelita()
{
	// this function will use the combination of circle function and GL_TRIANGLES
	// to make the 'api pelita' and use GL_QUADS which will take 4 consecutive
	// vertices to make the pelita stand.
	
	// 'api pelita'
	glColor3f(1, 0.75, 0.25);
	circle(7.75, -5.75, 8.0, 0.5);
	circle(7.75, -5.75, 24.0, 0.5);
	circle(7.75, -5.75, 40.0, 0.5);
	circle(7.75, -5.75, 56.0, 0.5);
	circle(-7.75, -5.75, 8.0, 0.5);
	circle(-7.75, -5.75, 24.0, 0.5);
	circle(-7.75, -5.75, 40.0, 0.5);
	circle(-7.75, -5.75, 56.0, 0.5);

	glBegin(GL_TRIANGLES);

		glVertex3f(7.75, -4.75, 8.0);
		glVertex3f(7.25, -6.0, 8.0);
		glVertex3f(8.25, -6.0, 8.0);

		glVertex3f(7.75, -4.75, 24.0);
		glVertex3f(7.25, -6.0, 24.0);
		glVertex3f(8.25, -6.0, 24.0);

		glVertex3f(7.75, -4.75, 40.0);
		glVertex3f(7.25, -6.0, 40.0);
		glVertex3f(8.25, -6.0, 40.0);

		glVertex3f(7.75, -4.75, 56.0);
		glVertex3f(7.25, -6.0, 56.0);
		glVertex3f(8.25, -6.0, 56.0);

		glVertex3f(-7.75, -4.75, 8.0);
		glVertex3f(-7.25, -6.0, 8.0);
		glVertex3f(-8.25, -6.0, 8.0);

		glVertex3f(-7.75, -4.75, 24.0);
		glVertex3f(-7.25, -6.0, 24.0);
		glVertex3f(-8.25, -6.0, 24.0);

		glVertex3f(-7.75, -4.75, 40.0);
		glVertex3f(-7.25, -6.0, 40.0);
		glVertex3f(-8.25, -6.0, 40.0);

		glVertex3f(-7.75, -4.75, 56.0);
		glVertex3f(-7.25, -6.0, 56.0);
		glVertex3f(-8.25, -6.0, 56.0);

	glEnd();

	glBegin(GL_QUADS);

		// pelita stand 1
		glColor3f(0.22, 0.22, 0.06);
		glVertex3f(-8.0, -8.0, 8.0);
		glVertex3f(-8.0, -13.0, 8.0);
		glVertex3f(-7.5, -13.0, 8.0);
		glVertex3f(-7.5, -8.0, 8.0);
		glColor3f(0.33, 0.34, 0.09);
		glVertex3f(-8.5, -6.0, 8.0);
		glVertex3f(-8.5, -8.0, 8.0);
		glVertex3f(-7.0, -8.0, 8.0);
		glVertex3f(-7.0, -6.0, 8.0);

		// pelita stand 2
		glColor3f(0.22, 0.22, 0.06);
		glVertex3f(8.0, -8.0, 8.0);
		glVertex3f(8.0, -13.0, 8.0);
		glVertex3f(7.5, -13.0, 8.0);
		glVertex3f(7.5, -8.0, 8.0);
		glColor3f(0.33, 0.34, 0.09);
		glVertex3f(8.5, -6.0, 8.0);
		glVertex3f(8.5, -8.0, 8.0);
		glVertex3f(7.0, -8.0, 8.0);
		glVertex3f(7.0, -6.0, 8.0);

		// pelita stand 3
		glColor3f(0.22, 0.22, 0.06);
		glVertex3f(-8.0, -8.0, 24.0);
		glVertex3f(-8.0, -13.0, 24.0);
		glVertex3f(-7.5, -13.0, 24.0);
		glVertex3f(-7.5, -8.0, 24.0);
		glColor3f(0.33, 0.34, 0.09);
		glVertex3f(-8.5, -6.0, 24.0);
		glVertex3f(-8.5, -8.0, 24.0);
		glVertex3f(-7.0, -8.0, 24.0);
		glVertex3f(-7.0, -6.0, 24.0);

		// pelita stand 4
		glColor3f(0.22, 0.22, 0.06);
		glVertex3f(8.0, -8.0, 24.0);
		glVertex3f(8.0, -13.0, 24.0);
		glVertex3f(7.5, -13.0, 24.0);
		glVertex3f(7.5, -8.0, 24.0);
		glColor3f(0.33, 0.34, 0.09);
		glVertex3f(8.5, -6.0, 24.0);
		glVertex3f(8.5, -8.0, 24.0);
		glVertex3f(7.0, -8.0, 24.0);
		glVertex3f(7.0, -6.0, 24.0);

		// pelita stand 5
		glColor3f(0.22, 0.22, 0.06);
		glVertex3f(-8.0, -8.0, 40.0);
		glVertex3f(-8.0, -13.0, 40.0);
		glVertex3f(-7.5, -13.0, 40.0);
		glVertex3f(-7.5, -8.0, 40.0);
		glColor3f(0.33, 0.34, 0.09);
		glVertex3f(-8.5, -6.0, 40.0);
		glVertex3f(-8.5, -8.0, 40.0);
		glVertex3f(-7.0, -8.0, 40.0);
		glVertex3f(-7.0, -6.0, 40.0);

		// pelita stand 6
		glColor3f(0.22, 0.22, 0.06);
		glVertex3f(8.0, -8.0, 40.0);
		glVertex3f(8.0, -13.0, 40.0);
		glVertex3f(7.5, -13.0, 40.0);
		glVertex3f(7.5, -8.0, 40.0);
		glColor3f(0.33, 0.34, 0.09);
		glVertex3f(8.5, -6.0, 40.0);
		glVertex3f(8.5, -8.0, 40.0);
		glVertex3f(7.0, -8.0, 40.0);
		glVertex3f(7.0, -6.0, 40.0);

		// pelita stand 7
		glColor3f(0.22, 0.22, 0.06);
		glVertex3f(-8.0, -8.0, 56.0);
		glVertex3f(-8.0, -13.0, 56.0);
		glVertex3f(-7.5, -13.0, 56.0);
		glVertex3f(-7.5, -8.0, 56.0);
		glColor3f(0.33, 0.34, 0.09);
		glVertex3f(-8.5, -6.0, 56.0);
		glVertex3f(-8.5, -8.0, 56.0);
		glVertex3f(-7.0, -8.0, 56.0);
		glVertex3f(-7.0, -6.0, 56.0);

		// pelita stand 8
		glColor3f(0.22, 0.22, 0.06);
		glVertex3f(8.0, -8.0, 56.0);
		glVertex3f(8.0, -13.0, 56.0);
		glVertex3f(7.5, -13.0, 56.0);
		glVertex3f(7.5, -8.0, 56.0);
		glColor3f(0.33, 0.34, 0.09);
		glVertex3f(8.5, -6.0, 56.0);
		glVertex3f(8.5, -8.0, 56.0);
		glVertex3f(7.0, -8.0, 56.0);
		glVertex3f(7.0, -6.0, 56.0);

	glEnd();
}

void ground()
{
	// this function will draw the ground for the scenery.

	glBegin(GL_QUADS);

		glColor3f(0.37, 0.55, 0.43);
		glVertex3f(78.0, -13.0, -20.0);
		glVertex3f(-78.0, -13.0, -20.0);
		glVertex3f(-50.0, -13.0, 60.0);
		glVertex3f(50.0, -13.0, 60.0);

	glEnd();
}

void display(void) 
{
	// this function will display all primitives onto the screen.

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity(); // Load the Identity Matrix to reset our drawing locations

	glTranslatef(0.0, 0.0, -65.0);
	glRotatef(angle, 0.0, 0.5, 0.0);

	moon();
	firework();
	pelita();
	house();
	car1();
	car2();
	car3();
	car4();
	ground();

	glFlush();
	glutSwapBuffers();
}

void init()
{
	// this function will do some initialization for the background color
	// and set the 2d orthographic projection for 2d objects.
	
	glClearColor(0.09, 0.1, 0.13, 0.0);
	glEnable(GL_DEPTH_TEST);
	gluOrtho2D(-50, 50, -50, 50);
}

void timer(int)
{
	// this will be used as a timer to constantly rotate the graphics

	glutPostRedisplay();
	glutTimerFunc(1000 / 60, timer, 0);

	angle += 0.8;
	if (angle > 360.0)
		angle -= 360.0;
}

int main(int argc, char** argv) 
{
	// this is the main function of this project.
	// 
	// init GLUT and create window
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA | GLUT_RGB);
	glutInitWindowPosition(200, 200);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Selamat Hari Raya");
	init();

	// register callbacks
	glutDisplayFunc(display);
	glutReshapeFunc(changeSize);
	glutTimerFunc(0, timer, 0);

	// enter GLUT event processing loop
	glutMainLoop();

	return 1;
}

