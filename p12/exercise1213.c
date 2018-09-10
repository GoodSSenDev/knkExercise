
#define N 10

double ident[N][N];

double *p;
int count = N;
for ( p = &ident[0][0]; p <= &ident[N-1][N-1];p++){
	if(count == N){
		*p = 1.0;
		count = 0;
	} else {
		*p = 0.0;
		count++;
	}

}	