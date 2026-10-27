// RTPG_6673: vars=7 stmts=4
int idx_arr[64];
void test_func(void) {
    int res31 = 26;
    int hi38 = 3;
    int out13 = 6;
    int cur3 = -8;
    int val94 = 3;
    int v30 = 17751;
    int acc70 = -25;
    int i;
    for (i = 0; i < 51; i++) {
        hi38 = xn[idx_arr[i]];
        v30 = acc70 - cur3;
        acc70 = acc70 + v30;
        hi38 = res31 + acc70;
        val94 = res31 - out13;
    }
}
int main() { test_func(); return 0; }

