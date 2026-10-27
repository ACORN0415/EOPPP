// RTPG_5053: vars=3 stmts=4
void test_func(void) {
    int out47 = 68;
    int res2 = 3;
    int out69 = 3;
    int h0 = 3;
    int sv0 = 0;
    int h1 = -9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 84; i++) {
        switch (out69) {
            case 0: res2 = 28582; break;
            case 1: res2 = 3; break;
            default: break;
        }
        out69 = out69 + 1;
    }
}
int main() { test_func(); return 0; }

