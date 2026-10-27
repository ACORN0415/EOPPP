// RTPG_2152: vars=9 stmts=5
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int acc17 = 0;
    int sum43 = -8;
    int lo90 = 4;
    int lo1 = 7843;
    int c56 = 2;
    int x58 = 55;
    int b55 = 13;
    int z6 = 44;
    int c9 = 34;
    int i;
    for (i = 0; i < 64; i++) {
        z6 = xn[i];
        z6 = xn[idx_arr[i]];
        x58 = x58 + 1;
        z6 = acc17;
        b55 = lo90 + 22;
        c9 = acc17 - lo90;
        c56 = x58 + c9;
        yo[i] = c9;
    }
}
int main() { test_func(); return 0; }

