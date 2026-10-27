// RTPG_8071: vars=5 stmts=2
void test_func(void) {
    int res82 = 58;
    int out42 = 3;
    int y27 = 6;
    int a55 = 5;
    int c34 = -42;
    int h0 = 47994;
    int sv0 = 0;
    int h1 = -35;
    int sv1 = 0;
    int i;
    for (i = 0; i < 11; i++) {
        switch (c34) {
            case 0: res82 = -50; break;
            case 1: out42 = 46; break;
            case 2: c34 = 5908; break;
            case 3: out42 = 4; break;
            default: break;
        }
        c34 = c34 + 1;
    }
}
int main() { test_func(); return 0; }

