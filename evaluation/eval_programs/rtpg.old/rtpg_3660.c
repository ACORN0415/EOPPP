// RTPG_3660: vars=8 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int c33 = 33101;
    int dat2 = 5;
    int a80 = 37377;
    int acc66 = 48;
    int a57 = -50;
    int val72 = 34;
    int v78 = 9;
    int cnt42 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        a80 = xn[i];
        acc66 = acc66 - a57;
        c33 = acc66;
        yo[i] = dat2;
    }
}
int main() { test_func(); return 0; }

