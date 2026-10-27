// RTPG_5980: vars=10 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int cur18 = 32;
    int b37 = 38070;
    int lo56 = 36954;
    int cur15 = 44231;
    int a57 = 2036;
    int out40 = 4;
    int sum89 = 0;
    int dat86 = 26391;
    int v71 = 26;
    int hi90 = -36;
    int h0 = 55169;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        cur15 = xn[i];
        sum89 = out40;
        hi90 = sum89 | cur18;
        cur15 = a57 & v71;
        cur15 = a57 / b37;
        yo[i] = hi90;
    }
}
int main() { test_func(); return 0; }

