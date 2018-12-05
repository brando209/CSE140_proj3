void dgemm( int m, int n, float *A, float *C )
{

	for(int k = 0; k < n; k++)
		for(int j = 0; j < m; j++)
			for(int i = 0; i < m; i++)
				C[i + j*m] += A[i + k*m] * A[j + k*m];

}

/*
void dgemm( int m, int n, float *A, float *C )
{

	int a = (m/2) * 2;

	for(int i = 0; i < m; i++) {
		for(int k = 0; k < n; k++) {
			for(int j = 0; j < a; j+=2) {
				C[i + j*m] += A[i + k*m] * A[j + k*m];
				C[i + (j+1)*m] += A[i + k*m] * A[(j+1) + k*m];
			}
			for(int j = a; j < m; j++) {
				C[i + j*m] += A[i + k*m] * A[j + k*m];
			}
		}
	}
}
*/


/*
void dgemm( int m, int n, float *A, float *C )
{

	int a = (m / 2) * 2;

	for(int k = 0; k < n; k++) {
		for(int j = 0; j < m; j++) {
			for(int i = 0; i < a; i+=2) {
				C[i + j*m] += A[i + k*m] * A[j + k*m];
				C[(i+1) + j*m] += A[(i+1) + k*m] * A[j + k*m];
			}
			for(int i = a; i < m; i++) {
				C[i + j*m] += A[i + k*m] * A[j + k*m];
			}
		}
	}

}
*/
