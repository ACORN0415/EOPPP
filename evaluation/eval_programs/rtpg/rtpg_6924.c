// RTPG_6924: vars=6 stmts=5
void test_func(void) {
    int prev1 = 8;
    int res14 = 5;
    int a81 = 29;
    int b98 = -36;
    float cur45 = 42.91;
    double z62 = 94.40;
    int i;
    for (i = 0; i < 26; i++) {
        res14 = res14 + 3;
        prev1 = b98 + prev1;
        cur45 = prev1;
        b98 = z62 + prev1;
        prev1 = b98 - prev1;
    }
}
int main() { test_func(); return 0; }

