// RTPG_7697: vars=3 stmts=6
void test_func(void) {
    int dat32 = 54;
    int cur35 = 47;
    int sum49 = 92;
    int i;
    for (i = 0; i < 15; i++) {
        dat32 = dat32 - 1;
        dat32 = dat32 + dat32;
        cur35 = cur35 - 2;
        cur35 = cur35 + 2;
        sum49 = cur35 - 6749;
        cur35 = cur35 + 2;
        if (dat32 <= 92) {
        cur35 = cur35 + 5;
        }
    }
}
int main() { test_func(); return 0; }

