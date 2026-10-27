// RTPG_7202: vars=5 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int dat51 = 47843;
    int acc40 = -27;
    int out12 = 10;
    int prev12 = 9;
    int acc67 = -25;
    int h0 = 44;
    int sv0 = 0;
    int h1 = 15696;
    int sv1 = 0;
    int i;
    for (i = 0; i < 23; i++) {
        switch (acc67) {
            case 0: out12 = 1; break;
            case 1: acc40 = 25036; break;
            case 2: dat51 = 6; break;
            default: break;
        }
        acc67 = acc67 + 1;
    }
}
int main() { test_func(); return 0; }

