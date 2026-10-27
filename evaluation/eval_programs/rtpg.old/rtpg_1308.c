// RTPG_1308: vars=6 stmts=4
void test_func(void) {
    int lo91 = 85;
    int res31 = 40;
    int b17 = 6;
    int cur91 = 3;
    int tmp91 = 44;
    int z13 = 45258;
    int i;
    for (i = 0; i < 23; i++) {
        switch (lo91) {
            case 0: res31 = 41; break;
            case 1: lo91 = 48; break;
            case 2: lo91 = -30; break;
            case 3: tmp91 = -10; break;
            default: break;
        }
        lo91 = lo91 + 1;
    }
}
int main() { test_func(); return 0; }

