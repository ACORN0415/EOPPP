// RTPG_9529: vars=4 stmts=10
void test_func(void) {
    int lo62 = -6;
    int prev79 = 6;
    int v80 = 79;
    int prev31 = 34928;
    int i;
    for (i = 0; i < 39; i++) {
        switch (lo62) {
            case 0: v80 = 3623; break;
            case 1: lo62 = 53; break;
            case 2: lo62 = 35; break;
            case 3: lo62 = 5; break;
            default: break;
        }
        lo62 = lo62 + 1;
    }
}
int main() { test_func(); return 0; }

