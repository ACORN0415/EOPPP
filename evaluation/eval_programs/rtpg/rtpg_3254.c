// RTPG_3254: vars=3 stmts=8
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int y88 = 13;
    int prev8 = 40373;
    int v94 = 36;
    int i;
    for (i = 0; i < 32; i++) {
        v94 = xn[i];
        y88 = xn[idx_arr[i]];
        prev8 = prev8 - y88;
        y88 = y88 - prev8;
        v94 = v94 - 1;
        y88 = prev8;
        v94 = v94 + 77;
        prev8 = prev8 + 1;
        v94 = y88 - 27;
        y88 = y88 + 5;
        if (prev8 > -38) {
        prev8 = v94 + prev8;
        }
        yo[i] = v94;
    }
}
int main() { test_func(); return 0; }

