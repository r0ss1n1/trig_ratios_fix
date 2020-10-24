#include <stdio.h>
#include <math.h>
#define RADIANS_TO_DEGREES 180 / 3.14159265359
/* github.com/r0ss1n1 */
/* Charles Thomas Wallace Truscott, Byron Bay, NSW, Australia */
/* Fix, SOHCAHTOA and rads to degs */
/* I love you Tai Truscott */
/* Thanks Southern Cross University for allowing me to study a unit in Foundation Maths */
/* Shout out to Nicholas Peter Warner AO, 2012 DG ASIS */
/* Vale Denis Warner, journalist and author, Peggy Warner, journalist and author */
/* Interesting to read the vocalisation of a 1940s Australian journalist */
/* e.g. Not With Guns Alone, Wake Me If There's Trouble, Don't Type In Bed */
int main(void) {

	typedef struct Vector {
		int magnitude;
		int length;

		int i;
		int j;
		int k;

	} Vector;

	typedef struct Fraction {
		float numerator;
		float denominator;

	} Fraction;


	typedef struct Cartesian_Plane {

		int x_coordinate;
		int y_coordinate;
		
	} Cartesian_Plane;

	typedef struct Triangle {

		float opposite;
		float adjacent;
		float hypotenuse;

	} Triangle;


	Triangle FS;

	printf("This program will calculate the ratio of sides of a triangle. Authored by Charles Truscott\n");
	printf("Enter the length of the opposite side, adjacent side & hypotenuse\n");
	printf("What is the length of the opposite side?\n");
	scanf("%f", &FS.opposite);
	printf("OK. What is the length of the adjacent side?\n");
	scanf("%f", &FS.adjacent);
	printf("What is the length of the hypotenuse?\n");
	scanf("%f", &FS.hypotenuse);
	printf("Opposite / Hypotenuse: %f\t Adjacent / Hypotenuse: %f\t Opposite / Adjacent: %f\t\n", FS.opposite / FS.hypotenuse, FS.adjacent / FS.hypotenuse, FS.opposite / FS.adjacent);
	/* FIX: SOHCAHTOA */
	printf("Angles: %f degrees (arcsine) %f degrees (arccosine) %f degrees (arctangent)\n", asin(FS.opposite / FS.hypotenuse) * RADIANS_TO_DEGREES, acos(FS.adjacent / FS.hypotenuse) * RADIANS_TO_DEGREES, atan(FS.opposite / FS.adjacent) * RADIANS_TO_DEGREES);
	return 0;
}