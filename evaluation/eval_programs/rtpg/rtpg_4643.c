// RTPG_4643: vars=3 stmts=4
void test_func(void) {
    int out76 = 2;
    int dat76 = 0;
    int sum88 = 89;
    int i;
    for (i = 0; i < 17; i++) {
        out76 = dat76 + 99;
        out76 = dat76 + 14;
        out76 = out76 + 5;
        sum88 = dat76 - sum88;
    }
}
int main() { test_func(); return 0; }

