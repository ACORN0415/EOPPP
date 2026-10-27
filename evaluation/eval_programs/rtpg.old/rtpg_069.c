// RTPG_69: vars=6 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int a42 = 8;
    int acc96 = 62;
    int res24 = 2;
    int cur16 = -39;
    int cnt94 = 19;
    int prev92 = 17;
    int *ptr = &res24;
    int i;
    for (i = 0; i < 44; i++) {
        switch (cnt94) {
            case 0: a42 = 10; break;
            case 1: acc96 = 9; break;
            case 2: acc96 = 4; break;
            default: break;
        }
        cnt94 = cnt94 + 1;
    }
}
int main() { test_func(); return 0; }

