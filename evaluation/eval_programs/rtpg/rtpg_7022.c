// RTPG_7022: vars=8 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    double a16 = 35.37;
    int tmp15 = 4761;
    int val5 = 9;
    int b16 = 40;
    int acc66 = 78;
    int sum14 = 36100;
    int val47 = 1;
    int val63 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        a16 = xn[i];
        val63 = val63 + 5;
        a16 = val5 + b16;
        val5 = val5 - a16;
        a16 = acc66 - tmp15;
        a16 = a16 - 3;
        yo[i] = b16;
    }
}
int main() { test_func(); return 0; }

