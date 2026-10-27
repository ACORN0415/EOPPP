// RTPG_814: vars=4 stmts=6
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int x79 = 65;
    int hi98 = 10;
    int acc53 = 3;
    int v24 = -20;
    int i;
    for (i = 0; i < 64; i++) {
        v24 = xn[i];
        x79 = xn[idx_arr[i]];
        x79 = v24 & acc53;
        x79 = hi98 | x79;
        acc53 = hi98;
        v24 = v24;
        x79 = acc53;
        hi98 = acc53;
        yo[i] = x79;
    }
}
int main() { test_func(); return 0; }

