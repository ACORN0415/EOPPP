// RTPG_4407: vars=8 stmts=7
int idx_arr[16];
void test_func(void) {
    int prev72 = 46;
    int res16 = 4;
    int val94 = 2;
    int out64 = 3;
    int hi34 = 3;
    int lo29 = 4;
    int cur47 = 12;
    int cur89 = 0;
    int i;
    for (i = 0; i < 62; i++) {
        lo29 = xn[idx_arr[i]];
        out64 = out64 + prev72;
        hi34 = lo29 + 11;
        hi34 = val94 + val94;
        out64 = val94 + out64;
        res16 = out64;
        val94 = val94 - 3;
        hi34 = hi34 - 3;
        if (res16 != -6) {
        hi34 = prev72 + out64;
        }
    }
done:
    out64 = 0;
}
int main() { test_func(); return 0; }

