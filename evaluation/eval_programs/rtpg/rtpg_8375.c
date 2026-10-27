// RTPG_8375: vars=3 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int x16 = -1;
    int cur34 = 11;
    int dat68 = 4566;
    int i;
    for (i = 0; i < 32; i++) {
        dat68 = xn[i];
        x16 = cur34 - x16;
        x16 = x16 + 4;
        x16 = x16;
        yo[i] = x16;
    }
}
int main() { test_func(); return 0; }

