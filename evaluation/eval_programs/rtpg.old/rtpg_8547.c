// RTPG_8547: vars=3 stmts=10
int idx_arr[64];
void test_func(void) {
    int cur68 = -39;
    int sum82 = 18;
    int a25 = 1;
    int i;
    for (i = 0; i < 81; i++) {
        a25 = xn[idx_arr[i]];
        a25 = a25 - 4;
        sum82 = a25 - sum82;
        a25 = sum82 - cur68;
        a25 = sum82 + 47;
        sum82 = sum82 - a25;
        cur68 = a25;
        cur68 = a25 - cur68;
        a25 = sum82 + sum82;
        cur68 = a25 - sum82;
        sum82 = a25;
    }
}
int main() { test_func(); return 0; }

