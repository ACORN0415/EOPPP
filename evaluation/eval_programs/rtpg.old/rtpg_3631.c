// RTPG_3631: vars=7 stmts=4
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int v80 = 58387;
    float cnt91 = 4.42;
    int tmp44 = 8;
    int res14 = 33;
    int res78 = 97;
    float cur79 = 71.88;
    int a24 = 21603;
    int i;
    for (i = 0; i < 64; i++) {
        a24 = xn[i];
        res14 = xn[idx_arr[i]];
        cnt91 = a24;
        cur79 = cnt91 + a24;
        v80 = v80 + 5;
        cnt91 = res78 + a24;
        yo[i] = res78;
    }
}
int main() { test_func(); return 0; }

