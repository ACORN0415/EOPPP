// RTPG_1846: vars=3 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int out70 = -8;
    float b59 = 30.26;
    int y96 = 5;
    int i;
    for (i = 0; i < 22; i++) {
        switch (b59) {
            case 0: out70 = 16; break;
            case 1: out70 = 13198; break;
            default: break;
        }
        b59 = b59 + 1;
    }
}
int main() { test_func(); return 0; }

