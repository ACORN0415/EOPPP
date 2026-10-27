// RTPG_6430: vars=3 stmts=11
int xn[32];
int yo[32];
void test_func(void) {
    float cnt51 = 31.21;
    float prev67 = 63.90;
    double a50 = 13.80;
    int i;
    for (i = 0; i < 32; i++) {
        a50 = xn[i];
        cnt51 = cnt51 + a50;
        prev67 = cnt51 + prev67;
        a50 = a50;
        prev67 = a50 - cnt51;
        a50 = cnt51 + a50;
        cnt51 = prev67 + cnt51;
        a50 = prev67 - a50;
        a50 = a50 - 3;
        a50 = a50 - 1;
        prev67 = prev67 + 5;
        a50 = a50;
        yo[i] = a50;
    }
}
int main() { test_func(); return 0; }

