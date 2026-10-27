// RTPG_2881: vars=4 stmts=12
void test_func(void) {
    int dat75 = 10;
    int y21 = -28;
    int res59 = 3;
    int hi2 = -4;
    int i;
    for (i = 0; i < 12; i++) {
        int j;
        for (j = 0; j < 19; j++) {
        hi2 = hi2 + 2;
        res59 = hi2 - dat75;
        y21 = hi2 - dat75;
        y21 = hi2 - 20;
        y21 = res59 + 5;
        y21 = res59 + dat75;
        y21 = res59;
        res59 = y21;
        y21 = y21 - 1;
        hi2 = y21 + res59;
        hi2 = dat75 - 9;
        res59 = res59;
        }
    }
}
int main() { test_func(); return 0; }

