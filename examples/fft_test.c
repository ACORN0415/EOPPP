#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#define INTMOD   1
//#define CHECKCLK

#if 1

#define F_SIZE          8
#define F_SIZE2         F_SIZE*2
int bit_reversed[F_SIZE];
double  real[F_SIZE] ;
double  imag[F_SIZE] = {0,  } ;

double  real_[F_SIZE] ;
double  imag_[F_SIZE] = {0,  } ;

double  costable[F_SIZE] ;
double  sintable[F_SIZE] ;

int xn[32]  = {0x8000, 0, }; //fir in
long long int yo[32]  = {0, }; //fir out

void fft_init(void);
void fft_transform(void);
void random_reals(void);
void random_zeros(void);

// Private function prototypes
int floor_log2(int n);
int reverse_bits(int x, int n);
void data_ordering(void);

#endif

/*---- Function implementations ----*/
void checkclkfibo()
{
#ifdef CHECKCLK
    int k    = 0;
    int kT   = 500000000; //50;
    double result;

    //int size =sizeof(long long int);
    clock_t start, end;
    start =clock();
    for( k=0;k<kT; k=k+1) {
#endif
        int i    = 0;
        int iT   = 50;
        int cur  = 0;
        int curT = 100;
        int p0   = 1;
        int p1   = 0;
    	for( i=0;i<iT; i=i+1) {
			cur = p0+p1;
			p1  = p0;
			p0  = cur;

			if(cur>curT) {
				break;
			}
    	}
#ifdef CHECKCLK
    }
    end = clock();

	result = ((double)(end-start))/((double)CLOCKS_PER_SEC);
	printf("\n..... FIBO .....\n");
	printf("%d iter, %f sec\n", k, result);
#endif
    return ;
};

void checkclkfft()
{
    fft_transform();
    return ;
};

void checkclkfir()
{
    int i ;

    long long int xv0  ;
    long long int xv1  ;
    long long int xv2  ;
    long long int xv3  ;
    long long int xv4  ;
    long long int xv5  ;
    long long int xv6  ;
    long long int xv7  ;
    long long int xv8  ;
    long long int xv9  ;
    long long int xv10 ;
    long long int xv11 ;
    long long int xv12 ;

    int h0 ; // fir tap
    int h1 ;
    int h2 ;
    int h3 ;
    int h4 ;
    int h5 ;
    int h6 ;
    int h7 ;
    int h8 ;
    int h9 ;
    int h10;
    int h11;
    int h12;

#ifdef CHECKCLK
	int k    = 0;
    int kT   = 100000000;
    double result =0;
    //int size =sizeof(long long int);
    clock_t start, end;
    start =clock();

    for( k=0;k<kT; k=k+1) {
#endif
        i = 0;

        xv0 = 0 ;
        xv1 = 0 ;
        xv2 = 0 ;
        xv3 = 0 ;
        xv4 = 0 ;
        xv5 = 0 ;
        xv6 = 0 ;
        xv7 = 0 ;
        xv8 = 0 ;
        xv9 = 0 ;
        xv10 = 0 ;
        xv11 = 0 ;
        xv12 = 0 ;

        h0  = 0x00010000; // fir tap
        h1  = 0xffff0000;
        h2  = 0x00020000;
        h3  = 0xfffe0000;
        h4  = 0x00030000;
        h5  = 0xfffd0000;
        h6  = 0x00040000;
        h7  = 0xfffd0000;
        h8  = 0x00030000;
        h9  = 0xfffe0000;
        h10 = 0x00020000;
        h11 = 0xffff0000;
        h12 = 0x00010000;

		for(i=0;i<15;i++){
			xv12 = xv11;
			xv11 = xv10;
			xv10 = xv9;
			xv9  = xv8;
			xv8  = xv7;
			xv7  = xv6;
			xv6  = xv5;
			xv5  = xv4;
			xv4  = xv3;
			xv3  = xv2;
			xv2  = xv1;
			xv1  = xv0;
			xv0  = xn[i];

			yo[i] =  ((long long int)(h0)  * xv0  +
					  (long long int)(h1)  * xv1  +
					  (long long int)(h2)  * xv2  +
					  (long long int)(h3)  * xv3  +
					  (long long int)(h4)  * xv4  +
					  (long long int)(h5)  * xv5  +
					  (long long int)(h6)  * xv6  +
					  (long long int)(h7)  * xv7  +
					  (long long int)(h8)  * xv8  +
					  (long long int)(h9)  * xv9  +
					  (long long int)(h10) * xv10 +
					  (long long int)(h11) * xv11 +
					  (long long int)(h12) * xv12 ) >>31;
		}

#ifdef CHECKCLK
	}
    end = clock();

	result = ((double)(end-start))/((double)CLOCKS_PER_SEC);

	printf("\n..... FIR .....\n");
	printf(" iter=%d, lapse=%f sec\n", k, result);
#endif
	for(i=0;i<15;i++){
		printf("xn[%d]=%d,  yo[%d]= %lld \n", i, xn[i], i, yo[i]);
	}
    return ;
};

int main(void) {

	checkclkfibo();
	checkclkfir();

    return 0 ;
}


void random_reals(void) {
    int n = F_SIZE;
    for (int i = 0; i < n; i++) {
#if INTMOD
        //real[i] = (long long int) ((cos(2.0*M_PI*(double)i/(double)n)*pow(2.0, 15)));
        real[i]  =  ((long long int)(cos(2.0*M_PI*(double)i/(double)n)*pow(2.0, 14)));
        real_[i] = ((long long int)(cos(2.0*M_PI*(double)i/(double)n)*pow(2.0, 14)));
#else
        real[i] = cos(2.0*M_PI*(double)i/(double)n);
        real_[i] = cos(2.0*M_PI*(double)i/(double)n);
#endif
    }
    return;
}

void random_zeros(void) {
    int n;
    n = F_SIZE;

	for (int i = 0; i < n; i++) {
        imag[i]  =0;
        imag_[i] =0;
	}
    return;
}

/*---- Function implementations ----*/

// Returns a pointer to an opaque structure of FFT tables. n must be a power of 2.
void fft_init(void) {

    int i;
    int levels;
    int n;
    n = F_SIZE;
    levels = floor_log2(n);
    for (i = 0; i < F_SIZE; i++)
        bit_reversed[i] = reverse_bits(i, levels);

    for (i = 0; i < F_SIZE; i++)
    {
        double angle = 2.0 * M_PI * (double)i / (double)n;
#if INTMOD
        costable[i] = (long long int)(cos(angle)*pow(2.0, 15));
        sintable[i] = (long long int)(sin(angle)*pow(2.0, 15));
#else
        costable[i] = cos(angle);
        sintable[i] = sin(angle);
#endif
    }
    random_reals();
    random_zeros();
    data_ordering();
    return ;
}

void data_ordering(void) {
    for (int i = 0; i < F_SIZE; i++) {
        int b = bit_reversed[i];
        if (i < b) {
        	double tp0re = real[i];
        	double tp0im = imag[i];
        	double tp1re = real[b];
        	double tp1im = imag[b];
            real[i] = tp1re;
            imag[i] = tp1im;
            real[b] = tp0re;
            imag[b] = tp0im;
            real_[i] = tp1re;
            imag_[i] = tp1im;
            real_[b] = tp0re;
            imag_[b] = tp0im;
        }
    }

    return;
}

void fft_transform(void) {

    int n;
    int i;
    int j;
    int k;
    double tpre;
    double tpim;

    fft_init();

#ifdef CHECKCLK
    int f = 0;
    int fT= 10000000; //50;
    double result;
    clock_t start, end;
    start =clock();

    for(f=0; f<fT; f=f+1) {
#endif

        n = F_SIZE;
        k = 0;
        i = 0;
        j = 0;
        tpre =0;
        tpim =0;

		for (int p = 0; p<F_SIZE ; p++) { //bit_reversed
			real[p] = real_[p];
			imag[p] = imag_[p];
		}

		// Cooley-Tukey decimation-in-time radix-2 FFT
		for (int size = 2 ; size <= F_SIZE; size *= 2) {
			 int halfsize = size / 2;
			 int tablestep = F_SIZE / size;
			for (i=0 ; i < n; i += size) {
				k=0;
				for (j=i; j<(i + halfsize); j++) {
#if INTMOD
		            tpre =  (( real[j+halfsize] * costable[k])*pow(2.0, -15)) + ((imag[j+halfsize] * sintable[k])*pow(2.0, -15));
		            tpim =  ((-real[j+halfsize] * sintable[k])*pow(2.0, -15)) + ((imag[j+halfsize] * costable[k])*pow(2.0, -15));

		            real[j + halfsize] = real[j] - tpre;
		            imag[j + halfsize] = imag[j] - tpim;
		            real[j] += tpre;
		            imag[j] += tpim;
#else
					tpre =  real[j+halfsize] * costable[k] + imag[j+halfsize] * sintable[k];
                    tpim = -real[j+halfsize] * sintable[k] + imag[j+halfsize] * costable[k];
					real[j + halfsize] = real[j] - tpre;
					imag[j + halfsize] = imag[j] - tpim;
					real[j] += tpre;
					imag[j] += tpim;
#endif
					k += tablestep;
				}
			}
			if (size == n)  // Prevent overflow in 'size *= 2'
				break;
		}

#ifdef CHECKCLK
	}
    end = clock();

	result = ((double)(end-start))/((double)CLOCKS_PER_SEC);

	printf("\n..... FFT .....\n");
	printf(" iter=%d, lapse=%f sec\n", f, result);
#endif
    return;
}

// Returns the largest i such that 2^i <= n.
int floor_log2(int n) {
    int result = 0;
    for (; n > 1; n /= 2)
        result++;
    return result;
}

// Returns the bit reversal of the n-bit unsigned integer x.
int reverse_bits(int x, int n) {
    int result = 0;
    for (int i = 0; i < n; i++, x >>= 1)
        result = (result << 1) | (x & 1);
    return result;
}

int fibo() {

    int i    = 0;
    int iT   = 5;
    int cur  = 0;
    int curT = 10;
    int p0   = 1;
    int p1   = 0;

	for(i=0;i<iT; i=i+1) {
	    cur = p0+p1;
	    p1  = p0;
        p0  = cur;

		if(cur>curT) {
			break;
		}
	}
	return p0;
}



