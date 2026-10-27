// RTPG_5139: vars=3 stmts=7
void test_func(void) {
    int b85 = 4;
    int dat93 = 30;
    int out33 = 0;
    int i;
    for (i = 0; i < 60; i++) {
        switch (b85) {
            case 0: b85 = 57; break;
            case 1: dat93 = 11; break;
            default: break;
        }
        b85 = b85 + 1;
    }
}
int main() { test_func(); return 0; }

