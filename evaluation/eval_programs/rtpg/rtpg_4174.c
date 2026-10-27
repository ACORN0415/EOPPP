// RTPG_4174: vars=8 stmts=9
void test_func(void) {
    int v83 = -12;
    int dat75 = -21;
    int res86 = 20;
    int cnt14 = 23;
    int dat82 = 60;
    int tmp51 = 48018;
    int hi78 = 7;
    double cur91 = 59.15;
    int i;
    for (i = 0; i < 74; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        dat75 = hi78;
        tmp51 = dat82 - tmp51;
        hi78 = dat75 + cur91;
        dat75 = cnt14 - tmp51;
        dat82 = dat82 + 2;
        tmp51 = dat75;
        hi78 = res86;
        res86 = dat75;
        hi78 = dat75 - hi78;
        }
    }
}
int main() { test_func(); return 0; }

