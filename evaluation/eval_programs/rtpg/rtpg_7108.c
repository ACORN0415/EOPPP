// RTPG_7108: vars=7 stmts=10
enum State { ON, FAST, GREEN };
void test_func(void) {
    int v56 = -26;
    int a69 = 9;
    int hi85 = 12465;
    int hi56 = 8652;
    int dat4 = -8;
    int b4 = 39972;
    int b35 = -6;
    enum State st = ON;
    int h0 = 84;
    int sv0 = 0;
    int h1 = 21381;
    int sv1 = 0;
    int i;
    for (i = 0; i < 72; i++) {
        switch (dat4) {
            case 0: b4 = 33010; break;
            case 1: b4 = 8; break;
            case 2: b4 = 13; break;
            case 3: b35 = 35; break;
            default: break;
        }
        dat4 = dat4 + 1;
    }
}
int main() { test_func(); return 0; }

