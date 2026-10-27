// RTPG_6426: vars=22 stmts=11
int xn[32];
int yo[32];
struct Point { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int a27 = 6;
    float x3 = 6.03;
    double x40 = 72.14;
    float cur70 = 66.45;
    int acc50 = 0;
    int val10 = 8;
    float dat45 = 58.51;
    float b63 = 32.72;
    int tmp44 = 24;
    int z70 = 10;
    int val58 = 9;
    int res69 = 42;
    int lo76 = 62744;
    float val90 = 21.99;
    float c0 = 43.02;
    int sum31 = 1;
    double prev75 = 7.80;
    int lo51 = 18;
    int cnt87 = 8;
    int sum70 = 1;
    int tmp53 = 7;
    int out27 = 29993;
    struct Point s; s.a = 1; s.b = 45;
    int *ptr = &b63;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 77;
    int sv0 = 0;
    int h1 = 34;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        val90 = xn[i];
        c0 = res69 + acc50;
        tmp53 = a27 * 2;
        tmp44 = sum31 + b63;
        val10 = x40 - res69;
        b63 = lo76 * -39;
        sum70 = b63 - lo51;
        res69 = acc50 * 7;
        cnt87 = c0;
        sum70 = x40;
        acc50 = res69 - tmp53;
        dat45 = dat45 - 5;
        *ptr = *ptr + 1;
        s.a = s.a + s.b;
        darr[i] = dat45;
        yo[i] = cnt87;
    }
    free(darr);
}
int main() { test_func(); return 0; }

