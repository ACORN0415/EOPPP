// RTPG_753: vars=8 stmts=2
enum State { FAST, RED, OFF };
void test_func(void) {
    int out43 = 42670;
    int v35 = 10;
    int cnt26 = 9;
    int sum85 = 17407;
    int y94 = 6;
    int acc71 = 9;
    int tmp51 = 12767;
    int cnt75 = -46;
    enum State st = FAST;
    int h0 = 75;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int h2 = 3;
    int sv2 = 0;
    int h3 = 18;
    int sv3 = 0;
    int i;
    for (i = 0; i < 14; i++) {
        switch (v35) {
            case 0: cnt75 = 7; break;
            case 1: y94 = 10; break;
            case 2: tmp51 = 9; break;
            default: break;
        }
        v35 = v35 + 1;
    }
}
int main() { test_func(); return 0; }

