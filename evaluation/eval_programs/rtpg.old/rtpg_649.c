// RTPG_649: vars=4 stmts=4
int idx_arr[64];
void test_func(void) {
    int out98 = 26;
    int val99 = 1;
    int cur83 = 17;
    int y51 = 5;
    int i;
    for (i = 0; i < 62; i++) {
        cur83 = xn[idx_arr[i]];
        out98 = out98;
        cur83 = cur83 + 3;
        out98 = val99 - -8;
        out98 = cur83;
    }
}
int main() { test_func(); return 0; }

