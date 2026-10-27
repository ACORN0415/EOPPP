// RTPG_108: vars=8 stmts=5
int xn[64];
int yo[64];
enum State { OFF, BLUE, SLOW };
void test_func(void) {
    double x52 = 30.03;
    int sum42 = 33311;
    int dat80 = 29072;
    float dat29 = 43.00;
    int lo5 = 4;
    int acc75 = 6711;
    int z60 = 3;
    int cnt59 = 21;
    enum State st = OFF;
    int i;
    for (i = 0; i < 64; i++) {
        dat29 = xn[i];
        x52 = sum42 + dat80;
        cnt59 = sum42 + lo5;
        dat80 = lo5;
        z60 = z60 + 13;
        sum42 = dat80 + x52;
        yo[i] = dat29;
    }
}
int main() { test_func(); return 0; }

