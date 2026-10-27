// RTPG_3268: vars=3 stmts=3
int idx_arr[32];
void test_func(void) {
    int lo46 = 21;
    int hi39 = 17;
    int cnt45 = 60573;
    int i;
    for (i = 0; i < 33; i++) {
        hi39 = xn[idx_arr[i]];
        hi39 = hi39 + 3;
        lo46 = lo46 - 31131;
        cnt45 = hi39 - cnt45;
        if (cnt45 > 28) {
        cnt45 = hi39 - cnt45;
        }
    }
}
int main() { test_func(); return 0; }

