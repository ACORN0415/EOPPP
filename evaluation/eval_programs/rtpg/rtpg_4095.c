// RTPG_4095: vars=10 stmts=11
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int c16 = 25794;
    int a2 = 4;
    int v93 = 5;
    int dat53 = -45;
    int tmp23 = 25;
    int cur25 = 59645;
    int sum0 = 4;
    int out7 = 28;
    int y36 = -37;
    int cnt16 = 10;
    int i;
    for (i = 0; i < 64; i++) {
        a2 = xn[i];
        a2 = xn[idx_arr[i]];
        cur25 = sum0;
        dat53 = dat53 + 3;
        c16 = tmp23 + a2;
        cur25 = cur25 - 5;
        y36 = tmp23;
        a2 = dat53 - a2;
        c16 = c16 + 5;
        cur25 = out7 + a2;
        out7 = y36 + c16;
        cnt16 = cur25 - tmp23;
        y36 = y36 + 2;
        yo[i] = a2;
    }
}
int main() { test_func(); return 0; }

