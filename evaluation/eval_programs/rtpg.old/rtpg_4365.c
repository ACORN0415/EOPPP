// RTPG_4365: vars=4 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int a56 = 29;
    int x78 = 5;
    int a17 = 91;
    int y56 = 4;
    int h0 = 6;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 25; i++) {
        switch (a17) {
            case 0: y56 = 14; break;
            case 1: a17 = 49809; break;
            case 2: x78 = 32872; break;
            default: break;
        }
        a17 = a17 + 1;
    }
}
int main() { test_func(); return 0; }

