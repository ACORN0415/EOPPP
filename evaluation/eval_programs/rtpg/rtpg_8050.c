// RTPG_8050: vars=4 stmts=4
void test_func(void) {
    int b89 = 12123;
    int dat87 = 14366;
    int x64 = 46;
    int res28 = 26;
    int i;
    for (i = 0; i < 93; i++) {
        switch (b89) {
            case 0: x64 = 0; break;
            case 1: dat87 = 5; break;
            case 2: x64 = 34; break;
            default: break;
        }
        b89 = b89 + 1;
    }
}
int main() { test_func(); return 0; }

