a)
#define CHECK(x,y,n) ((0<= (x) && (x) <= ((n)-1))&& \
						(0<= (y) && (y) <= ((n)-1)))
b)
#define MEDIAN(x,y,z) (((x) - (y)) * ((z) - (x)) >= 0 ? x : ((y) - (x)) * ((z) - (y)) >= 0 ? y : z) // got this from other git my one was to long

c)
#define POLYNOMAL(x) (3*((x)*(x)*(x)*(x)*(x)) \
					+2*((x)*(x)*(x)*(x))\
					-5*((x)*(x)*(x))\
					-((x)*(x)) + 7(x)- 6)