// RTPG_7505: vars=6 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int z18 = 90;
    int tmp10 = 44044;
    float acc22 = 0.80;
    int acc60 = 15;
    int x58 = 16887;
    int hi47 = 6;
    int h0 = -30;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 20; i++) {
        switch (hi47) {
            case 0: x58 = 4; break;
            case 1: acc60 = 5; break;
            case 2: hi47 = 99; break;
            default: break;
        }
        hi47 = hi47 + 1;
    }
}
int main() { test_func(); return 0; }

