// RTPG_2985: vars=3 stmts=3
void test_func(void) {
    int sum91 = 26858;
    int z1 = 8;
    int v18 = 56;
    int *ptr = &z1;
    int i;
    for (i = 0; i < 47; i++) {
        switch (sum91) {
            case 0: z1 = 5; break;
            case 1: v18 = 15; break;
            case 2: v18 = 39; break;
            case 3: v18 = -48; break;
            default: break;
        }
        sum91 = sum91 + 1;
    }
}
int main() { test_func(); return 0; }

