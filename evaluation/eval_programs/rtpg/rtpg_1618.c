// RTPG_1618: vars=5 stmts=12
void test_func(void) {
    int out22 = -20;
    int res42 = 6;
    int prev90 = 97;
    int cnt2 = 34243;
    int cur50 = -16;
    int *ptr = &res42;
    int i;
    for (i = 0; i < 36; i++) {
        cnt2 = res42 - 2;
        res42 = res42;
        prev90 = res42 + res42;
        out22 = cur50 + prev90;
        prev90 = res42 + cnt2;
        out22 = out22 + 14818;
        prev90 = cur50 + prev90;
        cnt2 = out22;
        cnt2 = prev90 - 9;
        res42 = res42 + 4;
        cnt2 = cnt2;
        cur50 = cnt2 - cur50;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

