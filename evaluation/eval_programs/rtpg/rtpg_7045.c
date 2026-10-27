// RTPG_7045: vars=7 stmts=4
void test_func(void) {
    int cur42 = 3;
    int prev32 = 9;
    int dat99 = 3;
    int cnt18 = 10;
    int cur6 = 63;
    int tmp42 = 30;
    int out16 = -9;
    int i;
    for (i = 0; i < 22; i++) {
        cur6 = out16 - cur6;
        cur42 = dat99 + cur6;
        tmp42 = tmp42 - 5;
        cur6 = cur6 + 3;
        if (cur42 <= -46) {
        out16 = cur6;
        }
    }
}
int main() { test_func(); return 0; }

