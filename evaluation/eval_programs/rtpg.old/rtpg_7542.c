// RTPG_7542: vars=6 stmts=5
void test_func(void) {
    int x2 = 7;
    int x39 = 1;
    int a75 = 80;
    int y64 = 43782;
    int dat6 = 35250;
    int a60 = 8;
    int i;
    for (i = 0; i < 45; i++) {
        switch (x39) {
            case 0: x39 = 43761; break;
            case 1: x39 = 0; break;
            case 2: dat6 = 26657; break;
            default: break;
        }
        x39 = x39 + 1;
    }
}
int main() { test_func(); return 0; }

