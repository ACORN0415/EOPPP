// RTPG_635: vars=3 stmts=3
int xn[32];
int yo[32];
enum State { BLUE, ON, RED };
void test_func(void) {
    int cur27 = 54879;
    int out88 = 32;
    int z40 = 26124;
    enum State st = BLUE;
    int h0 = 24965;
    int sv0 = 0;
    int h1 = 50;
    int sv1 = 0;
    int i;
    for (i = 0; i < 98; i++) {
        switch (cur27) {
            case 0: out88 = 16912; break;
            case 1: cur27 = 32; break;
            case 2: cur27 = 30; break;
            case 3: out88 = 21416; break;
            default: break;
        }
        cur27 = cur27 + 1;
    }
}
int main() { test_func(); return 0; }

