// RTPG_4557: vars=4 stmts=3
int idx_arr[64];
void test_func(void) {
    int b58 = 15309;
    int hi5 = 10;
    int tmp90 = -15;
    int x69 = 1;
    int i;
    for (i = 0; i < 61; i++) {
        b58 = xn[idx_arr[i]];
        tmp90 = tmp90 + 5;
        tmp90 = b58 + 3;
        b58 = tmp90 + hi5;
    }
}
int main() { test_func(); return 0; }

