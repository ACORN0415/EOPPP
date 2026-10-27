// RTPG_4205: vars=3 stmts=8
void test_func(void) {
    int a11 = 3;
    int tmp23 = 17;
    int prev29 = 89;
    int i;
    for (i = 0; i < 72; i++) {
        switch (a11) {
            case 0: tmp23 = 3; break;
            case 1: prev29 = 8361; break;
            case 2: a11 = 4; break;
            default: break;
        }
        a11 = a11 + 1;
    }
}
int main() { test_func(); return 0; }

