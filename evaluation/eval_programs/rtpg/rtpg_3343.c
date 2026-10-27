// RTPG_3343: vars=3 stmts=12
void test_func(void) {
    int x21 = 18733;
    int c40 = 19;
    int x27 = 28;
    int h0 = 72;
    int sv0 = 0;
    int h1 = 17112;
    int sv1 = 0;
    int i;
    for (i = 0; i < 19; i++) {
        switch (c40) {
            case 0: c40 = 21; break;
            case 1: x27 = -22; break;
            default: break;
        }
        c40 = c40 + 1;
    }
}
int main() { test_func(); return 0; }

