// RTPG_3794: vars=6 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int sum96 = 10;
    int x95 = 47480;
    int a59 = 10;
    int x46 = 2;
    int z71 = 5;
    int x23 = 6;
    int i;
    for (i = 0; i < 32; i++) {
        x23 = xn[i];
        a59 = sum96 - x95;
        sum96 = x23 - sum96;
        x23 = x23 + 3;
        z71 = z71 - 1;
        z71 = z71;
        yo[i] = sum96;
    }
}
int main() { test_func(); return 0; }

