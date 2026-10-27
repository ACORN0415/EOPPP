// RTPG_1913: vars=4 stmts=4
void test_func(void) {
    int v63 = 55214;
    int res34 = 5;
    int x53 = -28;
    int cur87 = 4;
    int i;
    for (i = 0; i < 17; i++) {
        res34 = res34 + 2;
        cur87 = cur87 - 1;
        cur87 = cur87 + 2;
        res34 = res34 - 4;
        if (cur87 <= 46) {
        cur87 = x53;
        }
    }
}
int main() { test_func(); return 0; }

