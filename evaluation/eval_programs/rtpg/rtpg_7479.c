// RTPG_7479: vars=7 stmts=4
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int cur9 = 40092;
    int b75 = 6;
    int val80 = 3;
    int cur87 = -40;
    int dat50 = 2;
    int hi63 = 7;
    int a30 = 82;
    int i;
    for (i = 0; i < 32; i++) {
        val80 = xn[i];
        val80 = xn[idx_arr[i]];
        hi63 = cur9 + -25;
        val80 = dat50;
        dat50 = a30;
        a30 = hi63 + hi63;
        yo[i] = hi63;
    }
}
int main() { test_func(); return 0; }

