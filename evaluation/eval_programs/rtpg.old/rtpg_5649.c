// RTPG_5649: vars=3 stmts=8
void test_func(void) {
    int cnt51 = 8;
    int res97 = 31;
    int cur91 = 6;
    int i;
    for (i = 0; i < 84; i++) {
        cur91 = cur91 - 3;
        res97 = cnt51 - res97;
        cur91 = res97 + 10;
        cur91 = res97 + cnt51;
        res97 = res97 - 2;
        res97 = cur91 - 1;
        res97 = cnt51 - 20;
        cur91 = cur91;
    }
}
int main() { test_func(); return 0; }

