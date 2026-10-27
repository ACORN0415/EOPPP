// RTPG_8677: vars=3 stmts=10
int idx_arr[64];
void test_func(void) {
    int sum82 = -39;
    int cur68 = 18;
    int a25 = 1;
    int i;
    for (i = 0; i < 81; i++) {
        a25 = xn[idx_arr[i]];
        a25 = a25 - 4;
        cur68 = a25 - cur68;
        a25 = cur68 - sum82;
        a25 = cur68 + 47;
        cur68 = cur68 - a25;
        sum82 = a25;
        sum82 = a25 - sum82;
        a25 = cur68 + cur68;
        sum82 = a25 - cur68;
        cur68 = a25;
    }
}
int main() { test_func(); return 0; }

