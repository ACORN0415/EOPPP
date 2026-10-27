// RTPG_7627: vars=5 stmts=7
int idx_arr[64];
void test_func(void) {
    int res79 = -2;
    int v13 = 69;
    int cnt16 = 9;
    int tmp0 = 9445;
    int hi19 = 12636;
    int h0 = 11770;
    int sv0 = 0;
    int h1 = 31;
    int sv1 = 0;
    int i;
    for (i = 0; i < 6; i++) {
        tmp0 = xn[idx_arr[i]];
        v13 = res79 / tmp0;
        v13 = tmp0 * 24871;
        res79 = cnt16 & v13;
        v13 = res79 * -32;
        hi19 = hi19 | cnt16;
        res79 = hi19 * 25;
        res79 = hi19 + cnt16;
        if (hi19 < 82) {
        hi19 = hi19;
        }
    }
}
int main() { test_func(); return 0; }

