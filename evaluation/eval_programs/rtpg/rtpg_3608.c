// RTPG_3608: vars=3 stmts=5
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int out14 = 83;
    int hi68 = -23;
    int b12 = 89;
    int i;
    for (i = 0; i < 16; i++) {
        hi68 = xn[i];
        out14 = xn[idx_arr[i]];
        hi68 = hi68 + 5;
        b12 = b12 - 3;
        out14 = hi68 + -47;
        hi68 = hi68 - 4;
        hi68 = out14 - hi68;
        yo[i] = out14;
    }
}
int main() { test_func(); return 0; }

