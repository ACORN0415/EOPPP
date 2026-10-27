// RTPG_875: vars=3 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    float prev4 = 4.85;
    double x68 = 61.75;
    float x1 = 18.96;
    int i;
    for (i = 0; i < 64; i++) {
        prev4 = xn[i];
        x68 = x68;
        prev4 = x68 - prev4;
        x1 = x1 - x1;
        x1 = x1 - 3;
        x68 = x68 + 4;
        x68 = x1;
        x1 = x1 + 0;
        x1 = x1 + 3;
        yo[i] = prev4;
    }
}
int main() { test_func(); return 0; }

