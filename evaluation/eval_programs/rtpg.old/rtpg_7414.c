// RTPG_7414: vars=8 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int hi63 = 40092;
    int cur9 = 6;
    int dat50 = 3;
    int res41 = -40;
    int a30 = 2;
    int cur87 = 7;
    int b75 = 82;
    int val80 = 5;
    int *ptr = &hi63;
    int i;
    for (i = 0; i < 16; i++) {
        res41 = xn[i];
        b75 = cur87 - 21;
        val80 = res41 - hi63;
        b75 = b75 - 1;
        *ptr = *ptr + 5;
        if (dat50 == 26) {
        hi63 = hi63 - a30;
        }
        yo[i] = a30;
    }
}
int main() { test_func(); return 0; }

