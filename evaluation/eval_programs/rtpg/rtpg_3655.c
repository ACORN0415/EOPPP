// RTPG_3655: vars=3 stmts=5
void test_func(void) {
    int cnt59 = 9;
    int b94 = 55;
    int a0 = 5;
    int i;
    for (i = 0; i < 100; i++) {
        cnt59 = cnt59;
        b94 = b94 - a0;
        a0 = cnt59;
        b94 = cnt59 | b94;
        b94 = cnt59 + 28398;
        if (b94 < -46) {
        cnt59 = a0 - 24;
        }
    }
}
int main() { test_func(); return 0; }

