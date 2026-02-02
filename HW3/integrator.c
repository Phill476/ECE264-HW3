/* YOU MUST MODIFY THIS FILE */
// Read "hw3.h" to learn about the two data types: `Range` and `RangeAnswer`

#include "hw3.h"

double integrate1(Range rng)
{
  
  
  double lower = rng.lowerlimit;  //PULLING LOWER LIMIT FROM THE RANGE STRUCTURE
  double upper = rng.upperlimit;  //PULLING UPPER LIMIT FROM THE RANGE STRUCTURE
  int n = rng.intervals;  //PULLING INTERVAL VALUE FROM RANGE 

  double step = (upper - lower) / n;  //CREATING STEP SIZE 

  double sum = 0.0; //SUM VARIABEL IS WHATS STORING THE INTEGRATION
  for(int i = 0; i < n; i++ ){  //FOR FUNCTION TO ITERATIE THROUGH INTERVALS
    double x = lower + i * step;  //MAKING X TO RUN THRU FUNCTION
    sum += func(x);

  }
  return sum * step;
}

void integrate2(RangeAnswer * rngans)
{
  rngans->answer = integrate1(rngans->rng); //POINTER FOR RANGEANSWER TO CALL INTEGRATE1 TO STORE INTEGRAL IN THE STRUCT
}
