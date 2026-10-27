// RTPG_2682: vars=8 stmts=4
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int c90 = 82;
    int cnt17 = 77;
    int cur77 = 2;
    int tmp78 = 44656;
    int val71 = 1;
    int x53 = 0;
    int x96 = 7;
    int b79 = 2;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        cur77 = xn[i];
        x53 = xn[idx_arr[i]];
        val71 = val71 + 2;
        b79 = cnt17;
        x96 = val71 - tmp78;
        c90 = c90 * 6;
        yo[i] = tmp78;
    }
}
int main() { test_func(); return 0; }

