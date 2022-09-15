#include "header.h"
#include<stdio.h>
#include<math.h>

void cube_volume(){

	float side, volume;

	printf("Enter the length of a side of the cube: \n");
	scanf("%f", &side);

	volume = pow(side, 3);

	printf("The volume of the cube with a side of length %.2f is %.2f\n", side, volume);
}

void cuboid_volume(){

	float length, breadth, height, volume;

	printf("Enter the length, breadth and height of the cuboid: \n");
	scanf("%f\n%f\n%f", &length, &breadth, &height);

	volume = length * breadth * height;

	printf("The volume of the cuboid with length %.2f, breadth %.2f and height %.2f is %.2f\n", length, breadth, height, volume);
}

void sphere_volume(){

	float radius, volume;

	printf("Enter the radius of the sphere: \n");
	scanf("%f", &radius);

	volume = (4/3) * pi * pow(radius, 3);

	printf("The volume of the sphere with a radius of %.2f is %.2f\n", radius, volume);
}

void cylinder_volume(){

	float height, radius, volume;

	printf("Enter the height and radius of the cylinder: \n");
	scanf("%f\n%f", &height, &radius);

	volume = pi * height * pow(radius, 2);

	printf("The volume of the cylinder with a radius of %.2f and height of %.2f is %.2f\n", radius, height, volume);
}

void cone_volume(){

	float height, radius, volume;

	printf("Enter the height and radius of the cone: \n");
	scanf("%f\n%f", &height, &radius);

	volume = (pi * height * pow(radius, 2))/3;

	printf("The volume of the cone with a radius of %.2f and height of %.2f is %.2f\n", radius, height, volume);
}

void select_shape(int choice){
	switch(choice){
		case 1:
		cube_volume();
		break;

		case 2:
		cuboid_volume();
		break;

		case 3:
		sphere_volume();
		break;

		case 4:
		cylinder_volume();
		break;

		case 5:
		cone_volume();
		break;

		default:
		printf("Incorrect choice.\n");
	}
}