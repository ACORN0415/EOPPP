// RTPG_4757: vars=4 stmts=9
void test_func(void) {
    int x20 = 43253;
    int out74 = 79;
    int acc67 = 16;
    int sum31 = 5;
    int *ptr = &sum31;
    int i;
    for (i = 0; i < 50; i++) {
        switch (sum31) {
            case 0: x20 = 14; break;
            case 1: sum31 = 8; break;
            case 2: x20 = -36; break;
            default: break;
        }
        sum31 = sum31 + 1;
    }
}
int main() { test_func(); return 0; }

