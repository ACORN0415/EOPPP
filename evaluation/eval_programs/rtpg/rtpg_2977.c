// RTPG_2977: vars=3 stmts=3
void test_func(void) {
    int z1 = 26858;
    int sum91 = 8;
    int v18 = 56;
    int *ptr = &sum91;
    int i;
    for (i = 0; i < 47; i++) {
        switch (z1) {
            case 0: sum91 = 5; break;
            case 1: v18 = 15; break;
            case 2: v18 = 39; break;
            case 3: v18 = -48; break;
            default: break;
        }
        z1 = z1 + 1;
    }
}
int main() { test_func(); return 0; }

