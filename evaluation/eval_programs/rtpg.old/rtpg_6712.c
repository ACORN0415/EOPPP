// RTPG_6712: vars=6 stmts=4
int idx_arr[16];
void test_func(void) {
    int v27 = 13;
    int out50 = 0;
    int acc86 = 42;
    int z45 = 0;
    int y58 = 18;
    int out24 = 4;
    int i;
    for (i = 0; i < 7; i++) {
        y58 = xn[idx_arr[i]];
        out24 = out24 - 1;
        out50 = out50 - 5;
        out50 = z45;
        acc86 = out50 + acc86;
    }
}
int main() { test_func(); return 0; }

