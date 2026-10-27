// RTPG_2658: vars=3 stmts=5
int idx_arr[32];
void test_func(void) {
    int a51 = 36;
    int cnt41 = 54;
    int res23 = 8;
    int i;
    for (i = 0; i < 39; i++) {
        a51 = xn[idx_arr[i]];
        res23 = res23 / cnt41;
        a51 = a51 - a51;
        cnt41 = res23 & a51;
        cnt41 = cnt41 - res23;
        a51 = cnt41 - cnt41;
        if (a51 < 78) {
        res23 = a51 - cnt41;
        }
    }
}
int main() { test_func(); return 0; }

