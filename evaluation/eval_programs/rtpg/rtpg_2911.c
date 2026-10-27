// RTPG_2911: vars=4 stmts=4
int idx_arr[64];
enum State { FAST, ON, RED };
void test_func(void) {
    int z99 = 2447;
    int acc93 = 48977;
    int hi17 = 26;
    int c12 = 49;
    enum State st = FAST;
    int i;
    for (i = 0; i < 60; i++) {
        acc93 = xn[idx_arr[i]];
        z99 = acc93 - z99;
        hi17 = hi17;
        c12 = c12 + 4;
        c12 = acc93 - c12;
    }
}
int main() { test_func(); return 0; }

