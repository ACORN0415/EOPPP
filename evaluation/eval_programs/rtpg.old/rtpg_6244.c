// RTPG_6244: vars=3 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int acc82 = 14337;
    int b83 = 53646;
    int tmp3 = 2;
    int h0 = 11022;
    int sv0 = 0;
    int h1 = 56955;
    int sv1 = 0;
    int i;
    for (i = 0; i < 90; i++) {
        switch (tmp3) {
            case 0: acc82 = -41; break;
            case 1: acc82 = -24; break;
            case 2: acc82 = 6002; break;
            default: break;
        }
        tmp3 = tmp3 + 1;
    }
}
int main() { test_func(); return 0; }

