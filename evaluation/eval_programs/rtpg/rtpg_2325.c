// RTPG_2325: vars=7 stmts=5
int xn[64];
int yo[64];
enum State { ON, OFF, BLUE };
void test_func(void) {
    int acc63 = 57;
    int c83 = 12;
    int c21 = 8;
    int prev24 = 50;
    int cnt66 = 33344;
    int dat78 = 14546;
    int hi42 = 75;
    enum State st = ON;
    int h0 = 0;
    int sv0 = 0;
    int h1 = -14;
    int sv1 = 0;
    int h2 = -24;
    int sv2 = 0;
    int i;
    for (i = 0; i < 72; i++) {
        switch (c21) {
            case 0: cnt66 = 2; break;
            case 1: c83 = 29492; break;
            case 2: prev24 = 14; break;
            case 3: prev24 = 22; break;
            default: break;
        }
        c21 = c21 + 1;
    }
}
int main() { test_func(); return 0; }

