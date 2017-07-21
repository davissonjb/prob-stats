#include "utils.h"
#include "prob.h"
#include "mathTypes.h"
#include <iostream>
#include <cstdio>

int main(int argc, char** argv)
{
	Complex<double_t> cplx(1, 1);
	printf("Magnitude is: %f\n", cplx.getMagnitude());
	printf("Phase angle is: %f radians\n", cplx.getPhase(true));
	printf("Phase angle is: %f degrees\n", cplx.getPhase(false));
	cplx.setComponents(2, 1);
	printf("Magnitude is: %f\n", cplx.getMagnitude());
	printf("Phase angle is: %f radians\n", cplx.getPhase(true));
	printf("Phase angle is: %f degrees\n", cplx.getPhase(false));
	Complex<double_t> a(1,1);
	Complex<double_t> b(2,2);
	Complex<double_t> d = a + b;
	printf("New complex number is: (%f, j%f)\n", d.getRealPart(), d.getImaginaryPart());
	Complex<double_t> e = a*b;
	printf("New complex number is: (%f, j%f)\n", e.getRealPart(), e.getImaginaryPart());
	std::cout << cplx << std::endl;
	b.complexConjugate();
	std::cout << "Complex conjugate is: " << b << std::endl;
	Complex<double_t> test;
	test.setPolarComponents(1.414, 45, false);
	std::cout << test << std::endl;
	/***
	 **
	 **		Testing the probability functionality
	 ***/
	printf("Factorial of 3 is: %d.\n", factorial<int>(3));
	printf("nrDescent(2,3) = %d\n", nrDescent<int>(2,3));
	printf("nrDescent(3,2) = %d\n", nrDescent<int>(3,2));
	printf("nrDescent(5,2) = %d\n", nrDescent<int>(5,2));
	printf("nrDescent(5,1) = %d\n", nrDescent<int>(5,1));
	printf("binomCoeff(3,1) = %d\n", binomCoeff<int>(3,1));
	printf("binomCoeff(3,2) = %d\n", binomCoeff<int>(3,2));
	printf("binomCoeff(3,3) = %d\n", binomCoeff<int>(3,3));
	printf("binomCoeff(3,4) = %d\n", binomCoeff<int>(3,4));
	printf("binomDist(3, 1, 0.5) = %f\n", binomDist(3,1,.5));
	printf("binomDist(10,2,0.5) = %f\n", binomDist(10,2,0.5));
	printf("binomDist(3,1,0.6) = %f\n", binomDist(3,1,0.6));
	printf("poissonDist(5, 0) = %f\n", poissonDist(5.0, 0));
	printf("nrProbability(3, 0, 52) = %f\n", nrProbability(4, 2, 52));
	printf("geometricProb(2,0.5) = %f\n", geometricProb(2, 0.5));
	printf("negBinomial(3,2,0.5) = %f\n", negBinomial(3,2,0.5));
	//*/
	return 0;
}