// RTPG_2861: vars=3 stmts=5
void test_func(void) {
    int c64 = 81;
    int res8 = 7526;
    int cur27 = 43351;
    int i;
    for (i = 0; i < 32; i++) {
        switch (cur27) {
            case 0: cur27 = 97; break;
            case 1: c64 = 10; break;
            case 2: cur27 = -32; break;
            default: break;
        }
        cur27 = cur27 + 1;
    }
}
int main() { test_func(); return 0; }

