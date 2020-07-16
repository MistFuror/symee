#include "symee.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	_variable var1 = {"x", 25};
	_variable var2 = {"y", -25};
	bindVariable(var1);
	bindVariable(var2);
	double res;
	int status = evaluateExpression("23 - 64.43/34 + 5pi^2 - sin(pi/2) + max(phi, avg(1, e)) - x - y/x", &res);
	if(status != -1)
		printf("%lf\n", res);
	else
		printf("Expression error at token %d, positioned at %d\n", exprInfo.tokenPosition, exprInfo.realPosition);
	freeVariables();
	
	return 0;
}
