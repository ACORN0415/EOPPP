// RTPG_5366: vars=3 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int a76 = 100;
    int cur95 = 32021;
    int tmp84 = 36351;
    int i;
    for (i = 0; i < 64; i++) {
        a76 = xn[i];
        tmp84 = tmp84 - 4;
        tmp84 = cur95 - 43;
        cur95 = tmp84 - a76;
        a76 = cur95 + a76;
        if (cur95 < 27) {
        tmp84 = a76 + tmp84;
        }
        yo[i] = a76;
    }
}
int main() { test_func(); return 0; }

