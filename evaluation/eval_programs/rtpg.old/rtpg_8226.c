// RTPG_8226: vars=7 stmts=4
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int sum92 = 28499;
    int a6 = 4;
    int hi35 = 53;
    int v96 = 13851;
    int c0 = -15;
    int y16 = 5;
    int dat70 = -11;
    int *ptr = &y16;
    int i;
    for (i = 0; i < 32; i++) {
        v96 = xn[i];
        v96 = xn[idx_arr[i]];
        v96 = hi35;
        y16 = c0 + sum92;
        v96 = sum92 + 45;
        c0 = hi35;
        *ptr = *ptr + 3;
        if (c0 > 33) {
        c0 = c0 + 5;
        }
        yo[i] = c0;
    }
}
int main() { test_func(); return 0; }

