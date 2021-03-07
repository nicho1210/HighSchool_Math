#include<stdio.h>
#define PI 3.1415

double CirclePerimeter ( float radius );
double CircleArea( float radius );
double CylinderVolume(float height);
double BallVolume(float radius);
float *point;

int main(void){
	float Radius;
	float Height;
	double ResultPerimeter;
	double ResultArea;
	double ResultVolume;
	double ResultBallV;
	printf("please input the radius of the cicle:");
	scanf("%f", &Radius);
	point = &Radius;
	printf("please input the height of the cylinder:");
	scanf("%f", &Height);
	ResultPerimeter = CirclePerimeter (Radius);
	ResultArea = CircleArea( Radius );
	ResultVolume = CylinderVolume(Height);
	ResultBallV = BallVolume(Radius);
	printf("the perimeter = %f\n", ResultPerimeter);
	printf("the area = %f\n", ResultArea);
	printf("the volume of the cylinder = %f\n", ResultVolume);
	printf("the ball's volume  = %f\n", ResultBallV);
	printf("the location of Radius: 0x%x\n", point);
	return 0;
}

double CirclePerimeter ( float radius ) {
	double Result = 0.0;
	Result = 2 * PI * radius;
	return Result;
}

double CircleArea( float radius ){
	double ResultArea;
	ResultArea = PI * radius * radius;
	return ResultArea;
}

double CylinderVolume(float height){
	double ResultVolume;
	ResultVolume = CircleArea(*point) * height;
	return ResultVolume;
}

double BallVolume(float radius){
	double ResultBallV;
	ResultBallV = (4/3) * PI * radius * radius * radius;
	return ResultBallV;
}
