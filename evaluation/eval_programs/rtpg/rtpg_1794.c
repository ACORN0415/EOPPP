// RTPG_1794: vars=4 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int c36 = 2;
    int val34 = 8;
    int tmp23 = 9;
    int y68 = 2;
    int i;
    for (i = 0; i < 86; i++) {
        switch (tmp23) {
            case 0: tmp23 = 31806; break;
            case 1: val34 = 17745; break;
            case 2: c36 = 34; break;
            default: break;
        }
        tmp23 = tmp23 + 1;
    }
}
int main() { test_func(); return 0; }

