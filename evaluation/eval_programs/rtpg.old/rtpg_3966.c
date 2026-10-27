// RTPG_3966: vars=7 stmts=4
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int v25 = 96;
    int val8 = 89;
    int sum7 = 4;
    int a86 = 8;
    int cur72 = 24;
    int dat66 = 9;
    int tmp79 = 22477;
    int i;
    for (i = 0; i < 64; i++) {
        tmp79 = xn[i];
        dat66 = xn[idx_arr[i]];
        a86 = sum7;
        sum7 = a86;
        v25 = tmp79;
        tmp79 = tmp79 + 1;
        yo[i] = val8;
    }
}
int main() { test_func(); return 0; }

