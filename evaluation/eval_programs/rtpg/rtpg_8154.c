// RTPG_8154: vars=3 stmts=3
void test_func(void) {
    int res0 = 19472;
    int res96 = 4;
    int c88 = 25;
    int h0 = 36512;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 93; i++) {
        switch (res0) {
            case 0: c88 = 2; break;
            case 1: res0 = 47673; break;
            case 2: res0 = 1; break;
            case 3: c88 = 2; break;
            default: break;
        }
        res0 = res0 + 1;
    }
}
int main() { test_func(); return 0; }

