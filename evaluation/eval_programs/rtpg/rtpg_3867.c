// RTPG_3867: vars=3 stmts=6
void test_func(void) {
    int lo50 = 46774;
    int prev29 = 79;
    int cnt98 = 25;
    int *ptr = &cnt98;
    int i;
    for (i = 0; i < 41; i++) {
        prev29 = prev29 + 2;
        cnt98 = prev29;
        lo50 = prev29 + cnt98;
        prev29 = cnt98 + cnt98;
        cnt98 = cnt98 + 4;
        prev29 = prev29 - 2;
        *ptr = *ptr + 5;
        if (lo50 < -23) {
        prev29 = prev29;
        }
    }
}
int main() { test_func(); return 0; }

