// RTPG_7152: vars=4 stmts=9
void test_func(void) {
    int dat70 = 24;
    int cur91 = 46;
    int a65 = 70;
    int hi7 = 16;
    int h0 = 41;
    int sv0 = 0;
    int h1 = 99;
    int sv1 = 0;
    int i;
    for (i = 0; i < 99; i++) {
        switch (dat70) {
            case 0: cur91 = 31; break;
            case 1: dat70 = 58758; break;
            case 2: dat70 = 26; break;
            default: break;
        }
        dat70 = dat70 + 1;
    }
}
int main() { test_func(); return 0; }

