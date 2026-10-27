// RTPG_7603: vars=5 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int cnt63 = 1;
    int res46 = -47;
    int out12 = 39913;
    int c63 = 5;
    int c49 = 0;
    int i;
    for (i = 0; i < 48; i++) {
        switch (c49) {
            case 0: c63 = 31; break;
            case 1: out12 = 31; break;
            case 2: c49 = 9; break;
            default: break;
        }
        c49 = c49 + 1;
    }
}
int main() { test_func(); return 0; }

