
/*
 * sea.c
 *
 *  Created on: Mar 28, 2014
 *      Author: kamath
 */
#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>

int glob=0;
int boat=0;
int n;
int bi;
int s;

void day();
void night();
void drawsea();
void drawsea2();
void mountain();
void mountain2();
void drawtree2();
void drawtree();
void drawboat();
void redrawboat();
void drawsmallboat();
void circle_draw(GLint h,GLint k,GLint r);
void plotpixels(GLint h,GLint k,GLint x,GLint y);
void display();
void displaytext();

void key(unsigned char key,int x,int y);
void mainmenu(int id);

void init();
int main(int argc,char** argv);


void displaytext()
{
	//to diplay text
	glColor3f(0.0,0.0,0.0);
	glRasterPos2i(1900,70);
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'R');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'A');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'I');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'L');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'W');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'A');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'Y');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,' ');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'S');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'T');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'A');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'T');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'I');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'O');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'N');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,' ');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'R');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'O');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'A');
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,'D');
}
void init()
{	glClearColor(.8,.5,0.0,1.0);

	glColor3f(1.0,0.0,0.0);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,2200.0,0.0,1800.0);

	printf("press 'x' to move boat in +ve x-direction\n");
	printf("press 'y' to move boat in -ve x-direction\n");
	printf("press 'z' to move the moon in +ve y-direction\n");
	printf("press 'w' to move the moon in -ve y-direction\n");
	printf("press 's' to stop the smallboat\n");
	printf("press 'r' to restart the smallboat\n");

	glutPostRedisplay();
}

//To draw Mountain for DAY

void mountain()
{

	glColor3f(0.60,0.40,0.12);
    glBegin(GL_TRIANGLES);
	glVertex2f(250,1300);
		glColor3f(0.55,0.40,0.12);
	glVertex2f(0,1600);
		glColor3f(0.55,0.40,0.12);
	glVertex2f(0,1300);
	glEnd();
	glColor3f(0.60,0.40,0.12);
	glBegin(GL_POLYGON);
	glVertex2f(100,1300);
	glVertex2f(300,1600);
	glVertex2f(400,1600);
		glColor3f(0.55,0.40,0.12);
	glVertex2f(500,1650);
	glVertex2f(700,1630);
		glColor3f(0.55,0.40,0.12);
	glVertex2f(900,1300);
	glEnd();

	glColor3f(0.60,0.40,0.12);
	glBegin(GL_TRIANGLES);
	glVertex2f(300,1300);
	glColor3f(0.50,0.40,0.12);
	glVertex2f(700,1680);
	glColor3f(0.55,0.40,0.12);
	glVertex2f(900,1300);
	glEnd();
	glColor3f(0.60,0.42,0.12);
	glBegin(GL_POLYGON);
	glVertex2f(500,1300);
	glVertex2f(700,1500);
	glColor3f(0.50,0.40,0.12);
	glVertex2f(900,1650);
	glVertex2f(1300,1500);
	glColor3f(0.55,0.40,0.12);
	glVertex2f(1500,1450);
	glVertex2f(1600,1300);
	glEnd();
	glColor3f(0.62,0.42,0.12);
	glBegin(GL_POLYGON);
	glVertex2f(1400,1300);
	glVertex2f(1800,1600);
	glColor3f(0.50,0.40,0.12);
	glVertex2f(1850,1650);
	glVertex2f(1900,1600);
	glColor3f(0.55,0.40,0.12);
	glVertex2f(2000,1300);
	//glEnd();glColor3f(0.62,0.42,0.13);
	glBegin(GL_TRIANGLES);
	glVertex2f(2000,1300);
	glColor3f(0.50,0.40,0.12);
	glVertex2f(2200,1600);
	glColor3f(0.55,0.40,0.12);
	glVertex2f(2200,1300);

//glEnd();



}

//To Draw Mountain for Night

void mountain2()
{

	glColor3f(0.60,0.40,0.12);
    glBegin(GL_TRIANGLES);
	glVertex2f(250,1300);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(0,1600);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(0,1300);
	glEnd();
	glColor3f(0.60,0.40,0.12);
	glBegin(GL_POLYGON);
	glVertex2f(100,1300);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(300,1600);
	glColor3f(0.10,0.10,0.0);

	glVertex2f(400,1600);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(500,1650);
	glVertex2f(700,1630);
	glColor3f(0.10,0.10,0.0);

	glVertex2f(900,1300);
	glEnd();
	glColor3f(0.60,0.40,0.12);
	glBegin(GL_TRIANGLES);
	glVertex2f(300,1300);
	glColor3f(0.10,0.10,0.0);

	glVertex2f(700,1680);
	glColor3f(0.10,0.10,0.0);

	glVertex2f(900,1300);
	glEnd();
	glColor3f(0.60,0.42,0.12);
	glBegin(GL_POLYGON);
	glVertex2f(500,1300);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(700,1500);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(900,1650);
	glVertex2f(1300,1500);
		glColor3f(0.10,0.10,0.0);
	glVertex2f(1500,1450);
	glVertex2f(1600,1300);
//	glEnd();
	glColor3f(0.62,0.42,0.12);
	glBegin(GL_POLYGON);
	glVertex2f(1400,1300);
	glVertex2f(1800,1600);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(1850,1650);
	glVertex2f(1900,1600);
	glColor3f(0.10,0.10,0.0);

	glVertex2f(2000,1300);
	glEnd();
	glColor3f(0.62,0.42,0.13);
	glBegin(GL_TRIANGLES);
	glVertex2f(2000,1300);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(2200,1600);
		glColor3f(0.10,0.10,0.0);
//	glColor3f(0.60,0.40,0.0);

	glVertex2f(2200,1300);
	glEnd();

	//to draw road for Night

	glPointSize(8.0);
	glColor3f(0.10,0.10,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(2200,700);
	glColor3f(0.05,0.05,0.0);
	glVertex2f(2200,400);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(1700,0);
	glColor3f(0.05,0.07,0.0);
	glVertex2f(1400,0);
	glEnd();
	glColor3f(.8,.7,0.0);
	glBegin(GL_LINES);
	glVertex2f(2200,550);
	glVertex2f(1600,0);
	glVertex2f(2200,560);
	glVertex2f(1590,0);
	glEnd();


}


void draw_pixel(GLint cx,GLint cy)
{	glPolygonMode(GL_FRONT,GL_FILL);

	glBegin(GL_POINTS);

	glVertex2i(cx,cy);

	glEnd();
}


void plotpixels(GLint h,GLint k,GLint x,GLint y)
{
	draw_pixel(x+h,y+k);
    draw_pixel(-x+h,y+k);
	draw_pixel(x+h,-y+k);
	draw_pixel(-x+h,-y+k);

	draw_pixel(y+h,x+k);
	draw_pixel(-y+h,x+k);
	draw_pixel(y+h,-x+k);
	draw_pixel(-y+h,-x+k);

}

void circle_draw(GLint h,GLint k,GLint r)
{
	GLint d=1-r,x=0,y=r;

	while(y>x)
	{
		plotpixels(h,k,x,y);
		if(d<0)
			d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plotpixels(h,k,x,y);
}

//To draw Sea for DAY

void drawsea()
{
	glColor3f(0.0,0.6,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(2200,700);
	glVertex2f(2200,800);
	glColor3f(0.0,0.7,1.0);
	glVertex2f(2200,700);
	glVertex2f(2200,750);
	glVertex2f(1900,700);
	glColor3f(0.0,0.7,1.0);
	glVertex2f(1850,600);
	glVertex2f(1800,600);
	glColor3f(.0,0.8,.9);
	glVertex2f(1700,600);
	glVertex2f(1600,500);
	glColor3f(0.0,0.6,.98);
	glVertex2f(1450,600);
	glColor3f(.0,0.8,.95);
	glVertex2f(1300,500);
	glColor3f(.0,0.7,.98);
	glVertex2f(1100,650);
	glColor3f(.0,0.8,.9);
	glVertex2f(900,500);
	glColor3f(.0,0.8,.9);
	glVertex2f(700,600);

	glColor3f(.0,0.7,.9);
	glVertex2f(500,700);
	glVertex2f(400,700);
	glColor3f(0.0,0.6,.9);
	glVertex2f(300,500);
	glVertex2f(150,700);
	glColor3f(.0,0.7,.9);
	glVertex2f(0,700);
	glVertex2f(0,1300);
	glColor3f(.0,0.8,.9);
	glVertex2f(2200,700);
	glEnd();

	for(int k=0;k<800;k+=150){
		glColor3f(0.5,0.3,0.5);

	        glBegin(GL_POLYGON);
			glVertex2i(350+k,310);
			glVertex2i(350+k,350);
			glVertex2i(360+k,350);
			glVertex2i(360+k,310);
			glEnd();
			glColor3f(0.0,1.0,0.0);
			glBegin(GL_TRIANGLES);
			glVertex2i(340+k,350);
			glVertex2i(355+k,410);
			glVertex2i(370+k,350);
			glEnd();
		glColor3f(1.0,1.2,0.0);
				        glBegin(GL_POLYGON);
						glVertex2i(400+k,300);
						glVertex2i(400+k,360);
						glVertex2i(480+k,360);
						glVertex2i(480+k,300);
						glEnd();
						 glBegin(GL_POLYGON);
						 glColor3f(0.0,0.0,0.0);
						glVertex2i(430+k,300);
						glVertex2i(430+k,350);
						glVertex2i(460+k,350);
						glVertex2i(460+k,300);
						glEnd();
						glColor3f(0.0,1.0,1.0);
						glBegin(GL_TRIANGLES);
						glVertex2i(390+k,360);
						glVertex2i(440+k,410);
						glVertex2i(490+k,360);
						glEnd();
	}

}

//To draw sea for NIGHT

void drawsea2()
{

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(2200,900);
	glColor3f(0.,0.,.0);

	glVertex2f(2200,900);
	glColor3f(.0,0.,.0);
	glVertex2f(2200,800);
	glColor3f(1.,1.,1.0);
	glVertex2f(2200,750);
	glColor3f(.0,0.,.0);
	glVertex2f(1900,700);
	glColor3f(.0,0.,.0);
	glVertex2f(1850,600);
	glColor3f(.0,0.,.0);
	glVertex2f(1800,600);

	glVertex2f(1700,550);
	glColor3f(.0,0.,.0);
	glVertex2f(1600,550);
	glColor3f(.0,0.,.0);

	glVertex2f(1450,400);
	glColor3f(.0,0.0,.0);
	glVertex2f(1300,300);
	glColor3f(.0,0.,.0);
	glVertex2f(1100,250);
	glColor3f(.0,0.0,.0);
	glVertex2f(900,200);
	glColor3f(.0,0.,.0);
	glVertex2f(700,200);

	glColor3f(.0,0.0,.0);
	glVertex2f(500,300);
	glColor3f(.0,0.0,.0);
	glVertex2f(400,400);
	glColor3f(0.0,0.,.0);
	glVertex2f(300,500);
	glColor3f(.0,0.0,.0);
	glVertex2f(150,600);
	glColor3f(.0,0.,.0);
	glVertex2f(0,700);
	glColor3f(.0,0.0,.0);
	glVertex2f(0,1300);
	glColor3f(.0,0.,.0);
	glVertex2f(2200,1300);
	glColor3f(.0,0.,.0);
	glEnd();


}



void night()
{	// to set the background color to black

	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(2200,1800);
	glVertex2f(0,1800);
	glVertex2f(0,0);
	glVertex2f(2200,0);
	glEnd();

	//to draw the moon

	glPointSize(9.0);
	glColor3f(1.0,1.0,1.0);

	circle_draw(1400,1600+s,100);
	circle_draw(1400,1600+s,90);
	circle_draw(1400,1600+s,70);
	circle_draw(1400,1600+s,50);
	circle_draw(1400,1600+s,30);
	circle_draw(1400,1600+s,10);
	glPointSize(5.0);



//to draw the stars

	glBegin(GL_POINTS);
	glVertex2f(900,1700);
	glVertex2f(800,1700);
	glVertex2f(700,1100);
	glVertex2f(200,1500);
	glVertex2f(1800,1700);
	glVertex2f(1700,1200);
	glVertex2f(2000,1500);
	glEnd();
//	glColor3f(.25,.25,.25);
	mountain2();
	glColor3f(.7,.7,.7);

	drawsea2();

//to draw street light for NIGHT

	glColor3f(0.10,0.10,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(1400,0);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(1425,0);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(1425,250);
	glVertex2f(1400,250);
	glEnd();
	glColor3f(1.0,01.0,01.0);
	circle_draw(1410,280,30);
	circle_draw(1410,280,10);

	glColor3f(0.10,0.10,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(1600,200);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(1625,200);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(1625,350);
	glVertex2f(1600,350);
	glEnd();
	glColor3f(1.0,01.0,01.0);
	circle_draw(1610,380,30);
	circle_draw(1610,380,10);

	glColor3f(0.10,0.10,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(1800,380);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(1825,380);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(1825,525);
	glVertex2f(1800,525);
	glEnd();
	glColor3f(1.0,01.0,01.0);
	circle_draw(1810,555,30);
	circle_draw(1810,555,10);

	glColor3f(0.10,0.10,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(2000,500);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(2025,500);
	glColor3f(0.10,0.10,0.0);
	glVertex2f(2025,650);
	glVertex2f(2000,650);
	glEnd();
	glColor3f(1.0,01.0,01.0);
	circle_draw(2010,680,30);
	circle_draw(2010,680,10);

	//to draw tree and boat

	drawtree2();
	drawsmallboat();
	drawboat();

}

//To draw user BOAT

void drawboat()
{

	glColor3f(0.1,0.0,0.1);
	glBegin(GL_POLYGON);

	glVertex2f(700+n,950);
	glColor3f(.6,0.5,0.0);
	glVertex2f(800+n,800);
	glVertex2f(1200+n,800);
	glColor3f(0.1,0.0,0.1);
	glVertex2f(1400+n,950);
	glEnd();

     glColor3f(.6,0.5,0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(1200+n,950);

	glColor3f(.6,0.5,0.5);
	glVertex2f(1350+n,950);
	glColor3f(.0,0.2,0.6);
	glVertex2f(1000+n,1150);
	glEnd();
	glPointSize(9.0);
	glBegin(GL_LINES);
	glVertex2f(1000+n,950);
	glVertex2f(1000+n,1150);
	glEnd();

	glColor3f(0.1,0.0,0.1);
	glBegin(GL_POLYGON);
	glVertex2f(850+n,950);
	glVertex2f(1000+n,950);
	glVertex2f(1000+n,1000);
	glVertex2f(850+n,1000);
	glEnd();
}
void redrawboat1()
{	if(boat==0)
	{
		if(n<1600)
		{

			n+=2;
			glutPostRedisplay();
		}
		else
		{	n=n-2400;
		glutPostRedisplay();
		}
	}
}


void drawsmallboat()
{
	glColor3f(0.0,1.0,0.0);

	glBegin(GL_POLYGON);

	glVertex2f(400+bi,1200);
		glColor3f(1.0,0.6,.9);
	glVertex2f(475+bi,1100);
	glColor3f(0.3,0.0,0.2);
	glVertex2f(575+bi,1100);
	glVertex2f(650+bi,1200);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(550+bi,1200);
	glColor3f(1.0,0.6,.9);

	glVertex2f(650+bi,1200);
	glColor3f(.0,0.2,0.6);
	glVertex2f(500+bi,1250);
	glEnd();
	glPointSize(9.0);
	glBegin(GL_LINES);
	glVertex2f(500+bi,1250);
	glVertex2f(500+bi,1200);
	glEnd();

}

//To loop small boat

void redrawboat()
{	if(boat==0)
	{
		if(bi<1600)
		{

			bi+=2;
			glutPostRedisplay();
		}
		else
		{	bi=bi-2400;
		glutPostRedisplay();
		}
	}
}

// keyboard function

void key(unsigned char key,int x,int y)
{
	if(key=='x')
	{

   	  n=n+10;
   	  if(n>2000) n=-800;
     glutPostRedisplay();
	}
	if(key=='y')
	{
		n=n-10;
		if(n<-1400) n=1400;
	glutPostRedisplay();
	}
	if(key=='z')
	{	 s=s+10;
		glutPostRedisplay();
	}
	if(key=='w')
	{	s=s-10;
		glutPostRedisplay();
	}
	if(key=='s') //to stop boat
	{	boat=1;
		glutPostRedisplay();
	}
	if(key=='r') // to restart boat
	{	boat=0;
		glutPostRedisplay();
	}

}


//To draw tree for DAY

void drawtree()
{
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,300);
	glVertex2f(100,400);
	glVertex2f(40,400);
		glColor3f(0.30,0.4,0.);
	glVertex2f(150,500);
	glVertex2f(90,500);
	glVertex2f(200,600);
	glColor3f(0.10,0.4,0.);
	glVertex2f(300,500);
	glVertex2f(250,500);

	glVertex2f(350,400);
	glVertex2f(300,400);
	glVertex2f(350,300);
	glEnd();

// 	glColor3f(0.0,0.2,0.0);
// 	glBegin(GL_POLYGON);
// 	glVertex2f(400,250);
// 	glVertex2f(450,350);
// //	glVertex2f(400,350);
// //	glVertex2f(450,450);
// 	glColor3f(0.1,0.4,0.);
// 	glVertex2f(400,450);
// 	glVertex2f(500,650);
// 		glColor3f(0.30,0.4,0.);
// 	glVertex2f(650,450);
// 	glVertex2f(600,450);
// 	glColor3f(0.0,0.3,0.2);
// 	glVertex2f(700,350);
// 	glVertex2f(650,350);
// 		glColor3f(0.30,0.4,0.);
// 	glVertex2f(700,250);
// 	glEnd();

	// glColor3f(0.0,0.3,0.0);
	// glBegin(GL_POLYGON);
	// glVertex2f(750,200);
	// glVertex2f(850,300);
	// glColor3f(0.30,0.4,0.);

	// glVertex2f(800,300);

	// glVertex2f(850,400);
	// glVertex2f(800,400);
	// glColor3f(0.0,0.2,0.1);
	// glVertex2f(850,500);
	// 	glColor3f(0.0,0.2,0.0);
	// glVertex2f(800,500);
	// glVertex2f(900,600);
	// glColor3f(0.1,0.4,0.);
	// glVertex2f(1000,500);
	// glVertex2f(950,500);
	// glVertex2f(1100,400);
	// 	glColor3f(0.2,0.4,0.0);
	// glVertex2f(1050,400);
	// glVertex2f(1150,300);
	// glColor3f(0.2,0.5,0.0);
	// glVertex2f(1100,300);
	// glVertex2f(1150,200);
	glEnd();


//stamp
	glColor3f(.2,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(150,0);
//		glColor3f(0.47,0.0,0.0);
	glVertex2f(150,300);
	glColor3f(0.57,0.0,0.0);
	glVertex2f(200,300);
	glColor3f(0.47,0.0,0.0);
	glVertex2f(200,0);
	glEnd();


	// glColor3f(0.2,0.0,0.0);
	// glBegin(GL_POLYGON);
	// glVertex2f(500,0);
	// glVertex2f(500,250);
	// glColor3f(0.57,0.0,0.0);
	// glVertex2f(550,250);
	// glVertex2f(550,0);
	// glEnd();

	// glColor3f(0.2,0.0,0.0);
	// glBegin(GL_POLYGON);
	// glVertex2f(950,0);
	// glVertex2f(950,200);
	// glColor3f(0.57,0.0,0.0);
	// glVertex2f(1000,200);
	// glVertex2f(1000,0);
	// glEnd();
}

//To draw tree for NIGHT

void drawtree2()
{
glColor3f(0.1,0.1,.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,300);

	glVertex2f(100,400);
glColor3f(0.1,0.1,.0);
	glVertex2f(40,400);
	glColor3f(0.,0.,.0);
	glVertex2f(150,500);
	glVertex2f(90,500);
	glVertex2f(200,600);
glColor3f(0.1,0.1,.0);
	glVertex2f(300,500);
	glVertex2f(250,500);
	glColor3f(0.,0.,.0);
	glVertex2f(350,400);
	glVertex2f(300,400);
	glVertex2f(350,300);
	glEnd();


	glColor3f(0.1,0.1,.0);
	glBegin(GL_POLYGON);
	glVertex2f(400,250);
	glVertex2f(450,350);
	glColor3f(0.,0.,.0);
	glVertex2f(400,450);
	glVertex2f(500,650);
	glColor3f(0.1,0.1,.0);
	glVertex2f(650,450);
	glVertex2f(600,450);
	glColor3f(0.,0.,.0);
	glVertex2f(700,350);
	glVertex2f(650,350);
	glColor3f(0.1,0.1,.0);
	glVertex2f(700,250);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(750,200);
	glVertex2f(850,300);
	glColor3f(0.,0.,.0);
	glVertex2f(800,300);
	glColor3f(0.1,0.1,.0);
	glVertex2f(850,400);
	glVertex2f(800,400);

	glVertex2f(850,500);
	glColor3f(0.1,0.1,.0);

	glVertex2f(800,500);
	glVertex2f(900,600);
	glColor3f(0.,0.,.0);
	glVertex2f(1000,500);
	glVertex2f(950,500);
	glVertex2f(1100,400);
	glColor3f(0.1,0.1,.0);
	glVertex2f(1050,400);
	glVertex2f(1150,300);
	glColor3f(0.,0.,.0);
	glVertex2f(1100,300);
	glVertex2f(1150,200);
	glEnd();


//stamp
	glColor3f(.2,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(150,0);
	glColor3f(0.,0.,.0);
	glVertex2f(150,300);
		glColor3f(0.1,0.0,0.0);
	glVertex2f(200,300);
		glColor3f(0.2,0.0,0.0);
	glVertex2f(200,0);
	glEnd();


	glColor3f(0.2,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(500,0);
	glVertex2f(500,250);
		glColor3f(0.0,0.0,0.0);
	glVertex2f(550,250);
		glColor3f(0.1,0.0,0.0);
	glVertex2f(550,0);
	glEnd();

	glColor3f(0.2,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(950,0);
	glVertex2f(950,200);
		glColor3f(0.0,0.0,0.0);
	glVertex2f(1000,200);
		glColor3f(0.1,0.0,0.0);
	glVertex2f(1000,0);
	glEnd();
}
void car(){
	GLint window;
GLint window2;
GLint Xsize=1000;
GLint Ysize=800;
float i,theta;
GLint nml=0,day=1;


GLfloat xt=0.0,yt=0.0,zt=0.0,xw=0.0;   /* x,y,z translation */
GLfloat tx=295,ty=62;
GLfloat xs=1.0,ys=1.0,zs=1.0;

GLfloat xangle=0.0,yangle=0.0,zangle=0.0,angle=0.0;   /* axis angles */

GLfloat r=0,g=0,b=1;
GLint light=1;
int count=1,flg=1;
int view=0;
int flag1=0,aflag=1;            //to switch car driving mode
int flag2=0,wheelflag=0;   //to switch fog effect
GLUquadricObj *t;
	glBegin(GL_QUADS);                /* OBJECT MODULE*/

  /* top of cube*/
  //************************FRONT BODY****************************************
  glColor3f(r,g,b);
  glVertex3f( 0.2, 0.4,0.6);
  glVertex3f(0.6, 0.5,0.6);
  glVertex3f(0.6, 0.5,0.2);
  glVertex3f( 0.2,0.4,0.2);

  /* bottom of cube*/
  glVertex3f( 0.2,0.2,0.6);
  glVertex3f(0.6,0.2,0.6);
  glVertex3f(0.6,0.2,0.2);
  glVertex3f( 0.2,0.2,0.2);

  /* front of cube*/
  glVertex3f( 0.2,0.2,0.6);
  glVertex3f(0.2, 0.4,0.6);
  glVertex3f(0.2,0.4,0.2);
  glVertex3f( 0.2,0.2,0.2);

  /* back of cube.*/
  glVertex3f(0.6,0.2,0.6);
  glVertex3f(0.6,0.5,0.6);
  glVertex3f(0.6,0.5,0.2);
  glVertex3f( 0.6,0.2,0.2);

  /* left of cube*/
  glVertex3f(0.2,0.2,0.6);
  glVertex3f(0.6,0.2,0.6);
  glVertex3f(0.6,0.5,0.6);
  glVertex3f(0.2,0.4,0.6);

  /* Right of cube */
  glVertex3f(0.2,0.2,0.2);
  glVertex3f( 0.6,0.2,0.2);
  glVertex3f( 0.6,0.5,0.2);
  glVertex3f( 0.2,0.4,0.2);
//****************************************************************************
  glVertex3f(0.7,0.65,0.6);
  glVertex3f(0.7,0.65,0.2);
  glVertex3f(1.7,0.65,0.2);        //top cover
  glVertex3f(1.7,0.65,0.6);
//***************************back guard******************************
  glColor3f(r,g,b);            /* Set The Color To Blue*/
  glVertex3f( 1.8, 0.5,0.6);
  glVertex3f(1.8, 0.5,0.2);
  glVertex3f(2.1, 0.4, 0.2);
  glVertex3f(2.1,0.4,0.6);

  /* bottom of cube*/
  glVertex3f( 2.1,0.2,0.6);
  glVertex3f(2.1,0.2,0.2);
  glVertex3f(1.8,0.2,0.6);
  glVertex3f( 1.8,0.2,0.6);

  /* back of cube.*/
  glVertex3f(2.1,0.4,0.6);
  glVertex3f(2.1,0.4,0.2);
  glVertex3f(2.1,0.2,0.2);
  glVertex3f(2.1,0.2,0.6);

  /* left of cube*/
  glVertex3f(1.8,0.2,0.2);
  glVertex3f(1.8,0.5,0.2);
  glVertex3f(2.1,0.4,0.2);
  glVertex3f(2.1,0.2,0.2);

  /* Right of cube */
  glVertex3f(1.8,0.2,0.6);
  glVertex3f(1.8,0.5,0.6);
  glVertex3f(2.1,0.4,0.6);
  glVertex3f(2.1,0.2,0.6);
//******************MIDDLE BODY************************************
  glVertex3f( 0.6, 0.5,0.6);
  glVertex3f(0.6, 0.2,0.6);
  glVertex3f(1.8, 0.2, 0.6);
  glVertex3f(1.8,0.5,0.6);

  /* bottom of cube*/
  glVertex3f( 0.6,0.2,0.6);
  glVertex3f(0.6,0.2,0.2);
  glVertex3f(1.8,0.2,0.2);
  glVertex3f( 1.8,0.2,0.6);

  /* back of cube.*/
  glVertex3f(0.6,0.5,0.2);
  glVertex3f(0.6,0.2,0.2);
  glVertex3f(1.8,0.2,0.2);
  glVertex3f(1.8,0.5,0.2);
//*********************ENTER WINDOW**********************************
  glColor3f(0.3,0.3,0.3);
  glVertex3f( 0.77, 0.63,0.2);
  glVertex3f(0.75, 0.5,0.2);        //quad front window
  glVertex3f(1.2, 0.5, 0.2);
  glVertex3f( 1.22,0.63,0.2);

  glVertex3f(1.27,0.63,.2);
  glVertex3f(1.25,0.5,0.2);        //quad back window
  glVertex3f(1.65,0.5,0.2);
  glVertex3f(1.67,0.63,0.2);

  glColor3f(r,g,b);
  glVertex3f(0.7,0.65,0.2);
  glVertex3f(0.7,0.5,.2);       //first separation
  glVertex3f(0.75,0.5,0.2);
  glVertex3f(0.77,0.65,0.2);

  glVertex3f(1.2,0.65,0.2);
  glVertex3f(1.2,0.5,.2);       //second separation
  glVertex3f(1.25,0.5,0.2);
  glVertex3f(1.27,0.65,0.2);

  glVertex3f(1.65,0.65,0.2);
  glVertex3f(1.65,0.5,.2);     //3d separation
  glVertex3f(1.7,0.5,0.2);
  glVertex3f(1.7,0.65,0.2);

  glVertex3f( 0.75, 0.65,0.2);
  glVertex3f(0.75, 0.63,0.2);        //line strip
  glVertex3f(1.7, 0.63, 0.2);
  glVertex3f( 1.7,0.65,0.2);

  glVertex3f( 0.75, 0.65,0.6);
  glVertex3f(0.75, 0.63,0.6);        //line strip
  glVertex3f(1.7, 0.63, 0.6);
  glVertex3f( 1.7,0.65,0.6);

  glColor3f(0.3,0.3,0.3);
  glVertex3f( 0.77, 0.63,0.6);
  glVertex3f(0.75, 0.5,0.6);        //quad front window
  glVertex3f(1.2, 0.5, 0.6);
  glVertex3f( 1.22,0.63,0.6);

  glVertex3f(1.27,0.63,.6);
  glVertex3f(1.25,0.5,0.6);        //quad back window
  glVertex3f(1.65,0.5,0.6);
  glVertex3f(1.67,0.63,0.6);

  glColor3f(r,g,b);
  glVertex3f(0.7,0.65,0.6);
  glVertex3f(0.7,0.5,.6);       //first separation
  glVertex3f(0.75,0.5,0.6);
  glVertex3f(0.77,0.65,0.6);

  glVertex3f(1.2,0.65,0.6);
  glVertex3f(1.2,0.5,.6);       //second separation
  glVertex3f(1.25,0.5,0.6);
  glVertex3f(1.27,0.65,0.6);

  glVertex3f(1.65,0.65,0.6);
  glVertex3f(1.65,0.5,.6);
  glVertex3f(1.7,0.5,0.6);
  glVertex3f(1.7,0.65,0.6);
  glEnd();


 //**************************************************************
  glBegin(GL_QUADS);

  /* top of cube*/
  glColor3f(0.3,0.3,0.3);
  glVertex3f( 0.6, 0.5,0.6);
  glVertex3f(0.6, 0.5,0.2);        //quad front window
  glVertex3f(0.7, 0.65, 0.2);
  glVertex3f( 0.7,0.65,0.6);

  glVertex3f(1.7,0.65,.6);
  glVertex3f(1.7,0.65,0.2);        //quad back window
  glVertex3f(1.8,0.5,0.2);
  glVertex3f(1.8,0.5,0.6);


//*****************************road and surrounding development***********************************
  if(flag1)
  {
	glPushMatrix();
	glTranslatef(xw,0,0);
  glColor3f(0,1,0);
  glVertex3f(-100,0.1,-100);
  glVertex3f(-100,0.1,0);         //a green surroundings
  glVertex3f(100,0.1,0);
  glVertex3f(100,0.1,-100);

  glColor3f(0.7,0.7,0.7);
  glVertex3f(-100,0.1,0);
  glVertex3f(-100,0.1,0.45);         //a long road
  glVertex3f(100,0.1,0.45);
  glVertex3f(100,0.1,0);

  glColor3f(1.0,0.75,0.0);
  glVertex3f(-100,0.1,0.45);       //a median
  glVertex3f(-100,0.1,0.55);
  glVertex3f(100,0.1,0.55);
  glVertex3f(100,0.1,0.45);

  glColor3f(0.7,0.7,0.7);
  glVertex3f(-100,0.1,0.55);
  glVertex3f(-100,0.1,1);         //a long road
  glVertex3f(100,0.1,1);
  glVertex3f(100,0.1,0.55);

  glColor3f(0,1,0);
  glVertex3f(-100,0.1,1);
  glVertex3f(-100,0.1,100);         //a green surroundings
  glVertex3f(100,0.1,100);
  glVertex3f(100,0.1,1);
    glPopMatrix();
  }
  glEnd();
}


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	if(glob==1)
		night();
	if(glob==0)
		day();
	
   redrawboat();
   redrawboat1();

	glFlush();
	glutSwapBuffers();

}
void day()
{	//to set the sky color and ground color
	car();
	glColor3f(.8,.37,0.0);

	glBegin(GL_POLYGON);
	glVertex2f(2200,1800);
	glColor3f(.7,.37,0.0);
	glVertex2f(0,1800);
	glColor3f(.4,.6,0.0);
	glVertex2f(0,0);
			glColor3f(.4,.6,0.0);
	glVertex2f(2200,0);
	glEnd();

	// to draw the mountains
	mountain();

// to draw the sea
	drawsea();

	// to draw the sun

	glPointSize(9.0);
	glColor3f(.9,0.2,0.0);
	circle_draw(1400,1600,100);
	glColor3f(.95,0.2,0.0);
	circle_draw(1400,1600,90);
	glColor3f(1.0,0.25,0.0);
	circle_draw(1400,1600,70);
		glColor3f(1.1,0.3,0.0);
	circle_draw(1400,1600,50);
		glColor3f(1.15,0.35,0.0);
	circle_draw(1400,1600,30);
		glColor3f(1.18,.38,0.0);

	circle_draw(1400,1600,10);

	drawtree();

	displaytext();

//to draw street light for DAY
	// 	glColor3f(0.10,0.10,0.0);
	// glBegin(GL_POLYGON);
	// glVertex2f(1400,0);
	// 	glColor3f(0.10,0.10,0.0);
	// glVertex2f(1425,0);
	// 	glColor3f(0.10,0.10,0.0);
	// glVertex2f(1425,250);
	// glVertex2f(1400,250);
	// glEnd();
	// glColor3f(1.0,01.0,01.0);
	// circle_draw(1410,280,30);
	// circle_draw(1410,280,10);

	// 		glColor3f(0.10,0.10,0.0);
	// glBegin(GL_POLYGON);
	// glVertex2f(1600,400);
	// 	glColor3f(0.10,0.10,0.0);
	// glVertex2f(1625,400);
	// 	glColor3f(0.10,0.10,0.0);
	// glVertex2f(1625,450);
	// glVertex2f(1600,450);
	// glEnd();
	// glColor3f(1.0,01.0,01.0);
	// circle_draw(1610,380,30);
	// circle_draw(1610,380,10);
drawsmallboat();
	drawboat();
			glColor3f(0.10,0.10,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(1600,460);
		glColor3f(0.10,0.10,0.0);
	glVertex2f(1625,460);
		glColor3f(0.10,0.10,0.0);
	glVertex2f(1625,670);
	glVertex2f(1600,670);
	glEnd();
	glColor3f(1.0,01.0,01.0);
	circle_draw(1610,655,30);
	circle_draw(1610,655,10);

			glColor3f(0.10,0.10,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(1800,550);
		glColor3f(0.10,0.10,0.0);
	glVertex2f(1825,550);
		glColor3f(0.10,0.10,0.0);
	glVertex2f(1825,750);
	glVertex2f(1800,750);
	glEnd();
	glColor3f(1.0,01.0,01.0);
	circle_draw(1810,755,30);
	circle_draw(1810,755,10);

			glColor3f(0.10,0.10,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(2000,650);
		glColor3f(0.10,0.10,0.0);
	glVertex2f(2025,650);
		glColor3f(0.10,0.10,0.0);
	glVertex2f(2025,850);
	glVertex2f(2000,850);
	glEnd();
	glColor3f(1.0,01.0,01.0);
	circle_draw(2010,880,30);
	circle_draw(2010,880,10);
	
		//to draw road DAY

	glPointSize(8.0);
		glColor3f(0.10,0.10,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(2200,700);
		glColor3f(0.05,0.05,0.0);
	glVertex2f(2200,400);
		glColor3f(0.10,0.10,0.0);
	glVertex2f(1200,0);
	glColor3f(0.05,0.07,0.0);
	glVertex2f(600,0);
	glEnd();
		glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(2200,550);
	glVertex2f(850,0);
	glVertex2f(2200,560);
	glVertex2f(830,0);
	glEnd();

}


void mainmenu(int id)
{
	switch(id)
	{
		case 1:exit(0);
		break;
		case 2:glob=0;
			break;
		case 3:glob=1;
			break;

	}
	glutPostRedisplay();
}

int main(int argc,char** argv)
{

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(2200,1800);
	glutInitWindowPosition(0,0);
	glutCreateWindow("sea view");

	glutKeyboardFunc(key);
	glutDisplayFunc(display);

	glutCreateMenu(mainmenu);
	glutAddMenuEntry("QUIT",1);
	glutAddMenuEntry("DAY VIEW",2);
	glutAddMenuEntry("NIGHT VIEW",3);

	glutAttachMenu(GLUT_RIGHT_BUTTON);
	init();
	glutMainLoop();
	return 0;
}
