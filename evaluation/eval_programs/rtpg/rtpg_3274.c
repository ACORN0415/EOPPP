// RTPG_3274: vars=6 stmts=5
int idx_arr[32];
enum State { BLUE, GREEN, FAST };
void test_func(void) {
    int c74 = 53196;
    int y81 = 10508;
    int cur79 = 5;
    int val72 = 8;
    double y88 = 69.34;
    int v30 = 7;
    enum State st = BLUE;
    int *ptr = &val72;
    int i;
    for (i = 0; i < 20; i++) {
        c74 = xn[idx_arr[i]];
        y88 = y88 + 4;
        y88 = c74 + val72;
        cur79 = v30 - cur79;
        val72 = c74 - y88;
        y88 = y81 - 7;
        *ptr = *ptr + 2;
        if (val72 < 31) {
        y88 = c74 + 10;
        }
    }
}
int main() { test_func(); return 0; }

