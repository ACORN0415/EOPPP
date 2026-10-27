// RTPG_9977: vars=8 stmts=9
int idx_arr[16];
void test_func(void) {
    int c61 = 42687;
    int c33 = 54;
    int val32 = 10;
    int y89 = 607;
    int cur3 = 8;
    int cur2 = 25;
    int b88 = 11499;
    int acc84 = 3;
    int i;
    for (i = 0; i < 53; i++) {
        b88 = xn[idx_arr[i]];
        cur2 = c33 + val32;
        c61 = c33;
        cur3 = cur3 + 3;
        c61 = c61 - 3;
        val32 = y89 - cur2;
        val32 = val32 + 4;
        cur2 = cur3 + 17;
        c33 = val32 - y89;
        cur2 = b88 + val32;
        if (cur2 <= 1) {
        val32 = y89 - b88;
        }
    }
}
int main() { test_func(); return 0; }

