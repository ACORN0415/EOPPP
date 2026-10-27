// RTPG_8335: vars=7 stmts=4
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int sum92 = 28499;
    int y16 = 4;
    int c0 = 53;
    int v96 = 13851;
    int a6 = -15;
    int dat70 = 5;
    int hi35 = -11;
    int *ptr = &dat70;
    int i;
    for (i = 0; i < 32; i++) {
        v96 = xn[i];
        v96 = xn[idx_arr[i]];
        v96 = c0;
        dat70 = a6 + sum92;
        v96 = sum92 + 45;
        a6 = c0;
        *ptr = *ptr + 3;
        if (a6 > 33) {
        a6 = a6 + 5;
        }
        yo[i] = a6;
    }
}
int main() { test_func(); return 0; }

