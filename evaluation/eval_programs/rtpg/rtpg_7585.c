// RTPG_7585: vars=6 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int x58 = 90;
    int hi47 = 44044;
    float z18 = 0.80;
    int tmp10 = 15;
    int acc22 = 16887;
    int acc60 = 6;
    int h0 = -30;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 20; i++) {
        switch (acc60) {
            case 0: acc22 = 4; break;
            case 1: tmp10 = 5; break;
            case 2: acc60 = 99; break;
            default: break;
        }
        acc60 = acc60 + 1;
    }
}
int main() { test_func(); return 0; }

