#include <stdio.h>
#include "sirocco.h"




int main() {

	/* The input polynomial is a 2 variable interval complex polynomial. Each coefficient is a complex interval of the form [a,b] + i[c,d] 
	The function needs a list of all coefficients given in a deglex order, and each coefficient is given by four doubles: a, b, c, d. 
	For example, 
		p(x,y) = -1/4 - 0.0001*I + 3/4*x -3/2*x^2 + x^3 - y^3
    double coefs[] = {-0.125, -0.125, -0.0001, -0.0001,
            3.0/4.0, 3.0/4.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
            -3.0/2.0, -3.0/2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
            1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0, -1.0, 0.0, 0.0}; 
	Another example,
		q(x,y) = sqrt(2)*I*x - x^2*y
	double coefs[] = {0, 0, 0, 0,
			0, 0, 1.4142, 1.4143, 0, 0, 0, 0,
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
			0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0,0, 0, 0, 0};*/



	/* TEST FOR 
	p(x,y) = (90 - 182.5*I)*x^2*y + (133.5 - 190.5*I)*x*y^2 + (42 - 44.*I)*y^3 + (-38.5 + 5.5*I)*x^2 + (66 + 304*I)*x*y + (12 + 180*I)*y^2 + (-40.25 + 18.25*I)*x + (-200 - 75*I)*y
	and root (0, 4-4*I)

*/ 

        
    double coefs[] = {0.000000000000000, -0.000000000000000, 0.000000000000000, 
-0.000000000000000, 0.000000000000000, -0.000000000000000, 
0.000000000000000, -0.000000000000000, -128.000000000000, 
-128.000000000000, -96.0000000000000, -96.0000000000000, 
0.000000000000000, -0.000000000000000, 0.000000000000000, 
-0.000000000000000, 72.0000000000000, 72.0000000000000, 
304.000000000000, 304.000000000000, 12.0000000000000, 
12.0000000000000, 180.000000000000, 180.000000000000, 
0.000000000000000, -0.000000000000000, 0.000000000000000, 
-0.000000000000000, 90.0000000000000, 90.0000000000000, 
-182.500000000000, -182.500000000000, 133.500000000000, 
133.500000000000, -190.500000000000, -190.500000000000, 
42.0000000000000, 42.0000000000000, -44.0000000000000, 
-44.0000000000000, 0.000000000000000, -0.000000000000000, 
0.000000000000000, -0.000000000000000, -40.2500000000000, 
-40.2500000000000, 18.2500000000000, 18.2500000000000, 
-72.0000000000000, -72.0000000000000, 21.0000000000000, 
21.0000000000000, -38.5000000000000, -38.5000000000000, 
5.50000000000000, 5.50000000000000, -6.00000000000000, 
-6.00000000000000, 0.000000000000000, -0.000000000000000};

   	double y0R = 4.0;
   	double y0I = -4.0;
   	double *rop = homotopyPath (4, coefs, y0R, y0I);
   	
    
    int len = (int) rop[0];
    int i;
    for (i=0; i<len; ++i) 
    	printf ("%.5e  %.5e  %.5e\n", rop[1+3*i], rop[2+3*i], rop[3+3*i]);
    
    return 1;
  
}




