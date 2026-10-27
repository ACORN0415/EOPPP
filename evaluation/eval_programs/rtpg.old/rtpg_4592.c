// RTPG_4592: vars=3 stmts=4
void test_func(void) {
    int dat76 = 2;
    int out76 = 0;
    int sum88 = 89;
    int i;
    for (i = 0; i < 17; i++) {
        dat76 = out76 + 99;
        dat76 = out76 + 14;
        dat76 = dat76 + 5;
        sum88 = out76 - sum88;
    }
}
int main() { test_func(); return 0; }

