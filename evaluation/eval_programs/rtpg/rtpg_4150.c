// RTPG_4150: vars=5 stmts=6
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int acc15 = 84;
    int cnt29 = -16;
    int a56 = 6;
    int c87 = 7;
    int lo28 = 49;
    int i;
    for (i = 0; i < 32; i++) {
        acc15 = xn[i];
        cnt29 = xn[idx_arr[i]];
        lo28 = acc15;
        lo28 = a56 / lo28;
        acc15 = a56 + acc15;
        c87 = c87 - 2;
        acc15 = acc15 + acc15;
        cnt29 = acc15 % c87;
        if (acc15 != 20) {
        c87 = c87 - 3;
        }
        yo[i] = acc15;
    }
}
int main() { test_func(); return 0; }

