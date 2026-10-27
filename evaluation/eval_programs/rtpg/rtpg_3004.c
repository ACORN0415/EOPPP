// RTPG_3004: vars=4 stmts=8
int idx_arr[32];
enum State { ON, FAST, GREEN };
void test_func(void) {
    int lo33 = 3;
    int c21 = 2;
    int cur91 = 1;
    int sum31 = -17;
    enum State st = ON;
    int i;
    for (i = 0; i < 24; i++) {
        sum31 = xn[idx_arr[i]];
        c21 = c21 + lo33;
        c21 = c21 - 3;
        lo33 = sum31 - lo33;
        lo33 = cur91 + sum31;
        lo33 = lo33 + 3;
        sum31 = c21 - 8144;
        lo33 = lo33 + cur91;
        cur91 = lo33 + sum31;
    }
}
int main() { test_func(); return 0; }

