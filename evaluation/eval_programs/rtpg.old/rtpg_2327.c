// RTPG_2327: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int v25 = 61;
    int c91 = 43119;
    int tmp16 = 14;
    int prev73 = -21;
    int cnt13 = 6;
    int h0 = 19796;
    int sv0 = 0;
    int h1 = 31;
    int sv1 = 0;
    int i;
    for (i = 0; i < 23; i++) {
        switch (tmp16) {
            case 0: cnt13 = 9; break;
            case 1: cnt13 = 30; break;
            case 2: cnt13 = 6; break;
            default: break;
        }
        tmp16 = tmp16 + 1;
    }
}
int main() { test_func(); return 0; }

