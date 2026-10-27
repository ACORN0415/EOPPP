// RTPG_5047: vars=9 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    float acc34 = 48.67;
    double b35 = 12.56;
    int b1 = 1;
    int prev25 = 87;
    double prev14 = 80.45;
    float out68 = 38.40;
    int acc98 = 47139;
    float lo35 = 55.23;
    int dat40 = 25;
    int i;
    for (i = 0; i < 16; i++) {
        prev14 = xn[i];
        dat40 = acc34 - 831;
        prev25 = dat40;
        dat40 = acc34 + 6;
        b1 = dat40 + lo35;
        acc98 = b1 - out68;
        b35 = acc34 - out68;
        dat40 = acc98;
        acc34 = prev25 - b35;
        lo35 = lo35 + b1;
        acc98 = b1 - b35;
        dat40 = lo35 - 10;
        dat40 = b35;
        yo[i] = b35;
    }
}
int main() { test_func(); return 0; }

