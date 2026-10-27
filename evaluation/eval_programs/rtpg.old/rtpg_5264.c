// RTPG_5264: vars=3 stmts=4
void test_func(void) {
    int res59 = 50023;
    int res2 = 61022;
    int dat0 = 53926;
    int i;
    for (i = 0; i < 33; i++) {
        res2 = res59 + dat0;
        dat0 = res2 + res59;
        res59 = res2 - dat0;
        res59 = res59 - 5;
    }
}
int main() { test_func(); return 0; }

