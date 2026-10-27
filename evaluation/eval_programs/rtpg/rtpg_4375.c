// RTPG_4375: vars=5 stmts=5
int idx_arr[32];
void test_func(void) {
    int hi50 = 15;
    int hi40 = 37832;
    int cur90 = -35;
    int y29 = 10;
    int cur3 = 86;
    int i;
    for (i = 0; i < 98; i++) {
        cur90 = xn[idx_arr[i]];
        hi50 = cur3 + 4;
        cur90 = cur3 + cur3;
        cur90 = hi50;
        cur3 = cur3 - hi40;
        hi50 = cur3;
    }
}
int main() { test_func(); return 0; }

