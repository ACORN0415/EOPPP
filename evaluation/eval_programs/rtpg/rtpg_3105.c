// RTPG_3105: vars=10 stmts=8
void test_func(void) {
    int lo59 = -16;
    int prev58 = 6;
    int val61 = 9;
    int res30 = 9;
    int res63 = 10;
    int acc29 = 10;
    int cnt68 = 84;
    int cnt58 = 30;
    int cnt24 = 0;
    int x40 = 42;
    int i;
    for (i = 0; i < 9; i++) {
        lo59 = cnt68;
        res63 = cnt24 + cnt58;
        cnt68 = cnt58;
        prev58 = lo59;
        cnt68 = x40;
        acc29 = lo59 + 9;
        acc29 = acc29 + 2;
        prev58 = prev58 + lo59;
    }
}
int main() { test_func(); return 0; }

