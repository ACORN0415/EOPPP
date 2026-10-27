// RTPG_6792: vars=6 stmts=4
int idx_arr[16];
void test_func(void) {
    int v27 = 13;
    int y58 = 0;
    int acc86 = 42;
    int out24 = 0;
    int z45 = 18;
    int out50 = 4;
    int i;
    for (i = 0; i < 7; i++) {
        z45 = xn[idx_arr[i]];
        out50 = out50 - 1;
        y58 = y58 - 5;
        y58 = out24;
        acc86 = y58 + acc86;
    }
}
int main() { test_func(); return 0; }

