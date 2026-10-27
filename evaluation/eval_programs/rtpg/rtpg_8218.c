// RTPG_8218: vars=5 stmts=4
void test_func(void) {
    int out74 = -21;
    int x89 = 32102;
    int sum44 = 29614;
    int x32 = 4252;
    int tmp40 = 1;
    int i;
    for (i = 0; i < 53; i++) {
        switch (x32) {
            case 0: out74 = 24; break;
            case 1: x32 = 2; break;
            case 2: sum44 = 2; break;
            case 3: x32 = 7; break;
            default: break;
        }
        x32 = x32 + 1;
    }
}
int main() { test_func(); return 0; }

