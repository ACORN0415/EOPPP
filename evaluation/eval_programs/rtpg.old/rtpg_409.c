// RTPG_409: vars=5 stmts=3
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int b17 = 1;
    int b83 = 17;
    int x11 = 9;
    int sum42 = 39;
    int acc41 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        sum42 = xn[i];
        sum42 = xn[idx_arr[i]];
        sum42 = sum42 - 1;
        sum42 = sum42 + 5;
        b83 = b83 + 4;
        yo[i] = sum42;
    }
}
int main() { test_func(); return 0; }

