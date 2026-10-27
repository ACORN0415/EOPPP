// RTPG_8896: vars=7 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int res54 = -50;
    int cnt69 = -18;
    int acc60 = 2;
    int x5 = 9;
    int out9 = 89;
    int cnt6 = -6;
    int sum77 = 1;
    int i;
    for (i = 0; i < 16; i++) {
        sum77 = xn[i];
        cnt69 = sum77 - x5;
        out9 = x5 + out9;
        out9 = acc60 - 5;
        x5 = res54 & out9;
        yo[i] = cnt69;
    }
}
int main() { test_func(); return 0; }

