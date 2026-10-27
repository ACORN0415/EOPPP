// RTPG_9042: vars=4 stmts=9
void test_func(void) {
    int prev15 = 6;
    int acc27 = 0;
    int dat23 = -44;
    int prev12 = 35;
    int i;
    for (i = 0; i < 5; i++) {
        acc27 = prev15;
        acc27 = prev15;
        dat23 = prev12 - 34907;
        acc27 = prev15 - prev15;
        dat23 = dat23 + acc27;
        prev15 = prev15 - 1;
        prev12 = prev12 + dat23;
        acc27 = dat23;
        prev12 = prev12 + 2;
    }
}
int main() { test_func(); return 0; }

