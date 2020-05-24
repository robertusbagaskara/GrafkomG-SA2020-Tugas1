#include <iostream>
#include <GL/freeglut.h>
#include <math.h>


void myDisplay() {
	float theta;
	glClear(GL_COLOR_BUFFER_BIT);
	//Wall
	glColor3ub(150, 80, 26);
	glBegin(GL_POLYGON);
	glVertex2i(300, 350);
	glVertex2i(500, 350);
	glVertex2i(500, 100);
	glVertex2i(300, 100);
	glEnd();
	//Chimney
	glColor3f(0.184, 0.163, 0.145);
	glBegin(GL_POLYGON);
	glVertex2i(450, 350);
	glVertex2i(475, 350);
	glVertex2i(475, 425);
	glVertex2i(450, 425);
	glEnd();
	//Chimney Top
	glColor3f(0.184, 0.163, 0.145);
	glBegin(GL_POLYGON);
	glVertex2i(445, 425);
	glVertex2i(480, 425);
	glVertex2i(480, 450);
	glVertex2i(445, 450);
	glEnd();
	//Roof
	glColor3ub(79, 37, 13);
	glBegin(GL_TRIANGLES);
	glVertex2i(275, 350);
	glVertex2i(525, 350);
	glVertex2i(400, 450);
	glEnd();
	//Door
	glColor3ub(69, 43, 28);
	glBegin(GL_POLYGON);
	glVertex2i(325, 200);
	glVertex2i(380, 200);
	glVertex2i(380, 100);
	glVertex2i(325, 100);
	glEnd();
	//Door Holder
	glColor3ub(15, 15, 15);
	glPointSize(5.0);
	glBegin(GL_POINTS);
	glVertex2i(370, 150);
	glEnd();
	//Window1
	glColor3ub(206, 227, 18);
	glBegin(GL_POLYGON);
	glVertex2i(425, 200);
	glVertex2i(475, 200);
	glVertex2i(475, 150);
	glVertex2i(425, 150);
	glEnd();
	//Window1 Ring
	glColor3ub(15, 15, 15);
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(450, 200);
	glVertex2i(450, 150);
	glVertex2i(475, 175);
	glVertex2i(425, 175);
	glEnd();
	//Window 2
	glColor3ub(15, 15, 15);
	glBegin(GL_POLYGON);
	glVertex2i(425, 250);
	glVertex2i(475, 250);
	glVertex2i(475, 300);
	glVertex2i(425, 300);
	glEnd();
	//Window 3
	glColor3ub(206, 227, 18);
	glBegin(GL_POLYGON);
	glVertex2i(325, 250);
	glVertex2i(375, 250);
	glVertex2i(375, 300);
	glVertex2i(325, 300);
	glEnd();
	//Window3 Ring
	glColor3ub(15, 15, 15);
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glVertex2i(350, 250);
	glVertex2i(350, 300);
	glVertex2i(375, 275);
	glVertex2i(325, 275);
	glEnd();
	//Bush
	glColor3ub(47, 148, 7);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(740 + 50 * cos(theta), 100 + 50 * sin(theta));
	}
	glEnd();
	//Bush Mini
	glColor3ub(47, 148, 7);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(800 + 30 * cos(theta), 100 + 30 * sin(theta));
	}
	glEnd();
	//Bush Fruit 1
	glColor3ub(189, 43, 26);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(760 + 5 * cos(theta), 110 + 5 * sin(theta));
	}
	glEnd();
	//Bush Fruit 2
	glColor3ub(189, 43, 26);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(740 + 5 * cos(theta), 130 + 5 * sin(theta));
	}
	glEnd();
	//Bush Fruit 3
	glColor3ub(189, 43, 26);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(780 + 5 * cos(theta), 115 + 5 * sin(theta));
	}
	glEnd();
	//Bush Fruit 4
	glColor3ub(189, 43, 26);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(755 + 5 * cos(theta), 135 + 5 * sin(theta));
	}
	glEnd();
	//Yard
	glColor3ub(7, 107, 3);
	glBegin(GL_POLYGON);
	glVertex2i(0, 100);
	glVertex2i(799, 100);
	glVertex2i(799, 0);
	glVertex2i(0, 0);
	glEnd();
	//Asphalt Yard
	glColor3ub(61, 61, 61);
	glBegin(GL_POLYGON);
	glVertex2i(250, 100);
	glVertex2i(750, 100);
	glVertex2i(790, 80);
	glVertex2i(210, 80);
	glEnd();
	//Road
	glColor3ub(61, 61, 61);
	glBegin(GL_POLYGON);
	glVertex2i(325, 100);
	glVertex2i(380, 100);
	glVertex2i(420, 0);
	glVertex2i(285, 0);
	glEnd();
	//Fruit Tree Trunk
	glColor3ub(89, 66, 30);
	glBegin(GL_POLYGON);
	glVertex2i(180, 150);
	glVertex2i(195, 150);
	glVertex2i(195, 100);
	glVertex2i(180, 100);
	glEnd();
	//Fruit Tree Leaf
	glColor3ub(47, 128, 33);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(190 + 50 * cos(theta), 245 + 100 * sin(theta));
	}
	glEnd();
	//Fruit 1
	glColor3ub(87, 12, 97);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(180 + 10 * cos(theta), 245 + 10 * sin(theta));
	}
	glEnd();
	//Fruit 2
	glColor3ub(87, 12, 97);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(197 + 10 * cos(theta), 200 + 10 * sin(theta));
	}
	glEnd();
	//Fruit 3
	glColor3ub(87, 12, 97);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(210 + 10 * cos(theta), 280 + 10 * sin(theta));
	}
	glEnd();
	//Fruit 4
	glColor3ub(87, 12, 97);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(190 + 10 * cos(theta), 172 + 10 * sin(theta));
	}
	glEnd();
	//Fruit 5
	glColor3ub(87, 12, 97);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(170 + 10 * cos(theta), 290 + 10 * sin(theta));
	}
	glEnd();
	//Spruce Trunk
	glColor3ub(143, 60, 9);
	glBegin(GL_POLYGON);
	glVertex2i(100, 100);
	glVertex2i(100, 200);
	glVertex2i(118, 200);
	glVertex2i(118, 100);
	glEnd();
	//Spruce Leaf 1
	glColor3ub(47, 148, 7);
	glBegin(GL_TRIANGLES);
	glVertex2i(50, 200);
	glVertex2i(169, 200);
	glVertex2i(109, 400);
	glEnd();
	//Spruce Leaf 2
	glColor3ub(47, 148, 7);
	glBegin(GL_TRIANGLES);
	glVertex2i(65, 300);
	glVertex2i(154, 300);
	glVertex2i(109, 425);
	glEnd();
	//Grass 1
	glColor3ub(47, 148, 7);
	glBegin(GL_TRIANGLES);
	glVertex2i(120, 60);
	glVertex2i(125, 45);
	glVertex2i(115, 45);
	glEnd();
	//Grass 2
	glColor3ub(47, 148, 7);
	glBegin(GL_TRIANGLES);
	glVertex2i(130, 60);
	glVertex2i(125, 45);
	glVertex2i(115, 45);
	glEnd();
	//Grass 3
	glColor3ub(47, 148, 7);
	glBegin(GL_TRIANGLES);
	glVertex2i(110, 60);
	glVertex2i(125, 45);
	glVertex2i(115, 45);
	glEnd();
	//Grass 4
	glColor3ub(47, 148, 7);
	glBegin(GL_TRIANGLES);
	glVertex2i(90, 60);
	glVertex2i(125, 45);
	glVertex2i(110, 45);
	glEnd();
	//Grass 5
	glColor3ub(47, 148, 7);
	glBegin(GL_TRIANGLES);
	glVertex2i(150, 60);
	glVertex2i(115, 45);
	glVertex2i(130, 45);
	glEnd();
	//Garage
	glColor3ub(150, 80, 26);
	glBegin(GL_POLYGON);
	glVertex2i(550, 225);
	glVertex2i(725, 225);
	glVertex2i(725, 100);
	glVertex2i(550, 100);
	glEnd();
	//Garage Door
	glColor3ub(90, 92, 89);
	glBegin(GL_POLYGON);
	glVertex2i(575, 200);
	glVertex2i(700, 200);
	glVertex2i(700, 100);
	glVertex2i(575, 100);
	glEnd();
	//Garage Door Strip
	glLineWidth(2.0);
	glColor3ub(30, 31, 30);
	glBegin(GL_LINE_LOOP);
	glVertex2i(575, 200);
	glVertex2i(700, 200);
	glVertex2i(700, 175);
	glVertex2i(575, 175);
	glVertex2i(575, 150);
	glVertex2i(700, 150);
	glVertex2i(700, 125);
	glVertex2i(575, 125);
	glVertex2i(575, 100);
	glVertex2i(700, 100);
	glVertex2i(700, 200);
	glVertex2i(575, 200);
	glVertex2i(575, 100);
	glEnd();
	//Garage Roof
	glColor3ub(79, 37, 13);
	glBegin(GL_POLYGON);
	glVertex2i(575, 275);
	glVertex2i(700, 275);
	glVertex2i(750, 225);
	glVertex2i(525, 225);
	glEnd();
	//Garage Holder
	glLineWidth(8);
	glColor3ub(30, 30, 30);
	glBegin(GL_LINES);
	glVertex2i(600, 150);
	glVertex2i(605, 150);
	glEnd();

	//Moon Circle
	glColor3ub(242, 255, 99);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(650 + 50 * cos(theta), 500 + 50 * sin(theta));
	}
	glEnd();

	//Moon Shadow
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(600 + 50 * cos(theta), 520 + 50 * sin(theta));
	}
	glEnd();

	//Little Star
	glPointSize(5.0);
	glColor3ub(250, 250, 127);
	glBegin(GL_POINTS);
	glVertex2i(600, 500);
	glVertex2i(650, 405);
	glVertex2i(550, 520);
	glVertex2i(700, 450);
	glVertex2i(620, 550);
	glVertex2i(630, 470);
	glVertex2i(530, 480);
	glVertex2i(730, 550);
	glEnd();

	//Comet
	glPointSize(10.0);
	glColor3ub(245, 228, 215);
	glBegin(GL_POINTS);
	glVertex2i(550, 465);
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2i(380, 500);
	glVertex2i(380, 515);
	glEnd();

	//UFO


	glColor3ub(148, 156, 161);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(90 + 20 * cos(theta), 510 + 20 * sin(theta));
	}
	glEnd();

	glColor3ub(247, 242, 247);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(90 + 15 * cos(theta), 510 + 15 * sin(theta));
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(148, 156, 161);
	for (int i = 0; i < 360; i++) {
		theta = i * 3.142 / 180;
		glVertex2f(90 + 50 * cos(theta), 505 + 10 * sin(theta));
	}
	glEnd();

	glLineWidth(2.0);
	glColor3ub(0, 255, 255);
	glBegin(GL_LINES);
	glVertex2i(40, 505);
	glVertex2i(140, 505);
	glEnd();

	glFlush();
}

void myInit() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 800.0, 0.0, 600.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Kindergarten Drawing");
	glutDisplayFunc(myDisplay);

	myInit();
	glutMainLoop();

	return 0;
}