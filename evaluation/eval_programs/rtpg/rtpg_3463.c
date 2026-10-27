// RTPG_3463: vars=4 stmts=2
void test_func(void) {
    int cur20 = 42;
    int tmp32 = -17;
    int dat68 = -19;
    int sum62 = 5282;
    int i;
    for (i = 0; i < 31; i++) {
        switch (dat68) {
            case 0: dat68 = 60; break;
            case 1: cur20 = 3; break;
            default: break;
        }
        dat68 = dat68 + 1;
    }
}
int main() { test_func(); return 0; }

