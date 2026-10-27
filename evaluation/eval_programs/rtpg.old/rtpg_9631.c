// RTPG_9631: vars=5 stmts=5
void test_func(void) {
    int a45 = 10;
    int out50 = 47;
    int acc76 = 10;
    int a10 = 4;
    int cnt13 = 14;
    int *ptr = &acc76;
    int i;
    for (i = 0; i < 41; i++) {
        a10 = a45 + a45;
        cnt13 = acc76 + a45;
        a10 = a10 + 1;
        a10 = a45 & a10;
        a45 = a10 - a45;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

