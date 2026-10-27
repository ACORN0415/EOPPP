// RTPG_5894: vars=7 stmts=2
int idx_arr[16];
void test_func(void) {
    int prev55 = 10;
    int v80 = 42;
    int a94 = 47;
    float cnt11 = 46.52;
    int y26 = 20;
    int v40 = 56;
    int b60 = 34334;
    int i;
    for (i = 0; i < 23; i++) {
        v80 = xn[idx_arr[i]];
        prev55 = cnt11;
        cnt11 = a94 - y26;
    }
}
int main() { test_func(); return 0; }

