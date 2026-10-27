// RTPG_5897: vars=5 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int b67 = 56140;
    int v85 = 29251;
    int sum48 = 18;
    int sum71 = 10;
    int b90 = 3;
    int i;
    for (i = 0; i < 32; i++) {
        b90 = xn[i];
        b90 = b90;
        v85 = b67 / sum71;
        sum71 = sum71 - sum71;
        yo[i] = sum71;
    }
}
int main() { test_func(); return 0; }

