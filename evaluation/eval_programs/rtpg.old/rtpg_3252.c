// RTPG_3252: vars=3 stmts=8
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int prev8 = 13;
    int y88 = 40373;
    int v94 = 36;
    int i;
    for (i = 0; i < 32; i++) {
        v94 = xn[i];
        prev8 = xn[idx_arr[i]];
        y88 = y88 - prev8;
        prev8 = prev8 - y88;
        v94 = v94 - 1;
        prev8 = y88;
        v94 = v94 + 77;
        y88 = y88 + 1;
        v94 = prev8 - 27;
        prev8 = prev8 + 5;
        if (y88 > -38) {
        y88 = v94 + y88;
        }
        yo[i] = v94;
    }
}
int main() { test_func(); return 0; }

