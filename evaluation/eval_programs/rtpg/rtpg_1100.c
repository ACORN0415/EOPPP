// RTPG_1100: vars=4 stmts=2
void test_func(void) {
    int acc74 = 0;
    int c78 = 47;
    int z8 = 1;
    int tmp92 = -16;
    int *ptr = &tmp92;
    int i;
    for (i = 0; i < 47; i++) {
        switch (c78) {
            case 0: c78 = 55; break;
            case 1: z8 = 5; break;
            case 2: c78 = 10; break;
            case 3: z8 = -42; break;
            default: break;
        }
        c78 = c78 + 1;
    }
}
int main() { test_func(); return 0; }

