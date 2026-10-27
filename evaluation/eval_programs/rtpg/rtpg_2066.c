// RTPG_2066: vars=3 stmts=5
int idx_arr[64];
void test_func(void) {
    int v85 = 18462;
    int cur29 = -10;
    int b17 = 29;
    int i;
    for (i = 0; i < 94; i++) {
        b17 = xn[idx_arr[i]];
        b17 = cur29 + v85;
        v85 = b17 - -40;
        b17 = b17 - cur29;
        v85 = v85 - 5;
        b17 = b17 + v85;
    }
}
int main() { test_func(); return 0; }

