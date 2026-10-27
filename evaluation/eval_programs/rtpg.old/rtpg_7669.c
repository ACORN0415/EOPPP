// RTPG_7669: vars=3 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int val41 = 2;
    int out8 = 6;
    double dat16 = 17.54;
    int i;
    for (i = 0; i < 32; i++) {
        val41 = xn[i];
        dat16 = dat16 + 1;
        out8 = out8 - 2;
        dat16 = dat16 - out8;
        val41 = val41 - 1;
        dat16 = dat16 - 5;
        yo[i] = val41;
    }
}
int main() { test_func(); return 0; }

