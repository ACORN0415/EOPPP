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

    // xv 변수를 19까지 확장 (총 20개)
    long long int xv0, xv1, xv2, xv3, xv4, xv5, xv6, xv7, xv8, xv9;
    long long int xv10, xv11, xv12, xv13, xv14, xv15, xv16, xv17, xv18, xv19;

    // fir tap(h) 변수도 19까지 확장
    int h0, h1, h2, h3, h4, h5, h6, h7, h8, h9;
    int h10, h11, h12, h13, h14, h15, h16, h17, h18, h19;

#ifdef CHECKCLK
    int k    = 0;
    int kT   = 100000000;
    double result = 0;
    clock_t start, end;
    start = clock();

    for(k=0; k<kT; k=k+1) {
#endif
        i = 0;

        // xv 초기화 (0~19)
        xv0=0; xv1=0; xv2=0; xv3=0; xv4=0; xv5=0; xv6=0; xv7=0; xv8=0; xv9=0;
        xv10=0; xv11=0; xv12=0; xv13=0; xv14=0; xv15=0; xv16=0; xv17=0; xv18=0; xv19=0;

        // FIR Tap 계수 설정 (기존 패턴을 유지하며 임의의 값 추가)
        h0  = 0x00010000; h1  = 0xffff0000; h2  = 0x00020000; h3  = 0xffff0000;
        h4  = 0x00030000; h5  = 0xfffd0000; h6  = 0x00040000; h7  = 0xfffd0000;
        h8  = 0x00030000; h9  = 0xfffe0000; h10 = 0x00020000; h11 = 0xffff0000;
        h12 = 0x00010000; 
        // 추가된 탭 (h13 ~ h19)
        h13 = 0xffff0000; h14 = 0x00010000; h15 = 0xfffe0000; h16 = 0x00020000;
        h17 = 0xfffd0000; h18 = 0x00030000; h19 = 0xfffc0000;

        for(i=0; i<32; i++){
            // 데이터 시프트 (역순으로 밀어내기)
            xv19 = xv18; xv18 = xv17; xv17 = xv16; xv16 = xv15; xv15 = xv14;
            xv14 = xv13; xv13 = xv12; xv12 = xv11; xv11 = xv10; xv10 = xv9;
            xv9  = xv8;  xv8  = xv7;  xv7  = xv6;  xv6  = xv5;  xv5  = xv4;
            xv4  = xv3;  xv3  = xv2;  xv2  = xv1;  xv1  = xv0;
            xv0  = xn[i];

            // FIR 필터 연산 (Convolution)
            yo[i] = ((long long int)(h0)  * xv0  +
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
                     (long long int)(h12) * xv12 +
                     (long long int)(h13) * xv13 +
                     (long long int)(h14) * xv14 +
                     (long long int)(h15) * xv15 +
                     (long long int)(h16) * xv16 +
                     (long long int)(h17) * xv17 +
                     (long long int)(h18) * xv18 +
                     (long long int)(h19) * xv19 ) >> 31;
        }

#ifdef CHECKCLK
    }
    end = clock();
    result = ((double)(end-start))/((double)CLOCKS_PER_SEC);
    printf("\n..... FIR (20 Taps) .....\n");
    printf(" iter=%d, lapse=%f sec\n", k, result);
#endif

    for(i=0; i<15; i++){
        printf("xn[%d]=%d,  yo[%d]= %lld \n", i, xn[i], i, yo[i]);
    }
    return;
};

/* ================================================================
 * 추가 함수 1: checkfibo_other()
 * - 다른 방법의 피보나치 (배열 기반)
 * ================================================================ */
void checkfibo_other()
{
    int n    = 0;
    int nT   = 50;
    int fib[52];
    int limit = 100;

    fib[0] = 1;
    fib[1] = 0;

    for(n = 2; n < nT; n = n + 1) {
        fib[n] = fib[n-1] + fib[n-2];
        if(fib[n] > limit) {
            break;
        }
    }
    return;
};

/* ================================================================
 * 추가 함수 2: checkfibo_2()
 * - 기존 checkclkfibo와 동일 로직, 변수명만 다른 문자로 변경
 * ================================================================ */
void checkfibo_2()
{
    int m    = 0;
    int mT   = 50;
    int val  = 0;
    int valT = 100;
    int a0   = 1;
    int a1   = 0;

    for(m = 0; m < mT; m = m + 1) {
        val = a0 + a1;
        a1  = a0;
        a0  = val;

        if(val > valT) {
            break;
        }
    }
    return;
};

/* ================================================================
 * 추가 함수 3: checkfir()
 * - 기존 checkclkfir와 동일 로직, 변수명을 다른 문자로 변경
 * ================================================================ */
int dn[32]  = {0x8000, 0, };
long long int wo[32]  = {0, };

void checkfir()
{
    int j;

    long long int dv0, dv1, dv2, dv3, dv4, dv5, dv6, dv7, dv8, dv9;
    long long int dv10, dv11, dv12, dv13, dv14, dv15, dv16, dv17, dv18, dv19;

    int c0, c1, c2, c3, c4, c5, c6, c7, c8, c9;
    int c10, c11, c12, c13, c14, c15, c16, c17, c18, c19;

    j = 0;

    dv0=0; dv1=0; dv2=0; dv3=0; dv4=0; dv5=0; dv6=0; dv7=0; dv8=0; dv9=0;
    dv10=0; dv11=0; dv12=0; dv13=0; dv14=0; dv15=0; dv16=0; dv17=0; dv18=0; dv19=0;

    c0  = 0x00010000; c1  = 0xffff0000; c2  = 0x00020000; c3  = 0xffff0000;
    c4  = 0x00030000; c5  = 0xfffd0000; c6  = 0x00040000; c7  = 0xfffd0000;
    c8  = 0x00030000; c9  = 0xfffe0000; c10 = 0x00020000; c11 = 0xffff0000;
    c12 = 0x00010000;
    c13 = 0xffff0000; c14 = 0x00010000; c15 = 0xfffe0000; c16 = 0x00020000;
    c17 = 0xfffd0000; c18 = 0x00030000; c19 = 0xfffc0000;

    for(j = 0; j < 32; j++){
        dv19 = dv18; dv18 = dv17; dv17 = dv16; dv16 = dv15; dv15 = dv14;
        dv14 = dv13; dv13 = dv12; dv12 = dv11; dv11 = dv10; dv10 = dv9;
        dv9  = dv8;  dv8  = dv7;  dv7  = dv6;  dv6  = dv5;  dv5  = dv4;
        dv4  = dv3;  dv3  = dv2;  dv2  = dv1;  dv1  = dv0;
        dv0  = dn[j];

        wo[j] = ((long long int)(c0)  * dv0  +
                 (long long int)(c1)  * dv1  +
                 (long long int)(c2)  * dv2  +
                 (long long int)(c3)  * dv3  +
                 (long long int)(c4)  * dv4  +
                 (long long int)(c5)  * dv5  +
                 (long long int)(c6)  * dv6  +
                 (long long int)(c7)  * dv7  +
                 (long long int)(c8)  * dv8  +
                 (long long int)(c9)  * dv9  +
                 (long long int)(c10) * dv10 +
                 (long long int)(c11) * dv11 +
                 (long long int)(c12) * dv12 +
                 (long long int)(c13) * dv13 +
                 (long long int)(c14) * dv14 +
                 (long long int)(c15) * dv15 +
                 (long long int)(c16) * dv16 +
                 (long long int)(c17) * dv17 +
                 (long long int)(c18) * dv18 +
                 (long long int)(c19) * dv19 ) >> 31;
    }

    for(j = 0; j < 15; j++){
        printf("dn[%d]=%d,  wo[%d]= %lld \n", j, dn[j], j, wo[j]);
    }
    return;
};

int main(void) {

	checkclkfibo();
    checkclkfft();
	checkclkfir();

    checkfibo_other();
    checkfibo_2();
    checkfir();

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