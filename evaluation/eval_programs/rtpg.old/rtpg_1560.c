// RTPG_1560: vars=3 stmts=4
void test_func(void) {
    int lo56 = 16;
    int prev24 = 46687;
    int acc1 = 5;
    int i;
    for (i = 0; i < 24; i++) {
        prev24 = acc1 + 10;
        lo56 = prev24;
        acc1 = acc1;
        acc1 = acc1 + 2;
        if (acc1 != -12) {
        acc1 = acc1 - 5;
        }
    }
}
int main() { test_func(); return 0; }

