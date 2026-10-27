// RTPG_4253: vars=3 stmts=2
void test_func(void) {
    int dat84 = 77;
    int cur3 = 98;
    int cur23 = 25;
    int i;
    for (i = 0; i < 50; i++) {
        dat84 = cur23 - cur3;
        cur23 = cur3 + cur23;
    }
}
int main() { test_func(); return 0; }

