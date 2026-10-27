// RTPG_6276: vars=4 stmts=2
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int b38 = 39073;
    int z38 = 26;
    int cur85 = 25519;
    int lo38 = 7;
    int i;
    for (i = 0; i < 64; i++) {
        lo38 = xn[i];
        b38 = xn[idx_arr[i]];
        lo38 = b38 - b38;
        cur85 = cur85 - 1;
        yo[i] = b38;
    }
}
int main() { test_func(); return 0; }

