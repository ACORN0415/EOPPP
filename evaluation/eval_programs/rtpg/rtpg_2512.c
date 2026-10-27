// RTPG_2512: vars=6 stmts=6
struct Node { int a; int b; };
void test_func(void) {
    int hi11 = 16;
    int c17 = -46;
    int z77 = 10;
    int v84 = 61129;
    int z61 = 35333;
    int z27 = 3;
    struct Node s; s.a = -4; s.b = 0;
    int i;
    for (i = 0; i < 23; i++) {
        switch (c17) {
            case 0: z77 = -8; break;
            case 1: v84 = 9; break;
            default: break;
        }
        c17 = c17 + 1;
    }
}
int main() { test_func(); return 0; }

