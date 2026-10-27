// RTPG_9122: vars=3 stmts=4
void test_func(void) {
    int tmp40 = 1;
    int acc6 = 54416;
    int b12 = 36853;
    int i;
    for (i = 0; i < 22; i++) {
        switch (b12) {
            case 0: acc6 = 36; break;
            case 1: tmp40 = 4; break;
            default: break;
        }
        b12 = b12 + 1;
    }
}
int main() { test_func(); return 0; }

