// RTPG_4610: vars=5 stmts=3
void test_func(void) {
    int a62 = 2;
    int z84 = -18;
    int z52 = 5;
    int a59 = 22541;
    int val41 = 10;
    int i;
    for (i = 0; i < 9; i++) {
        switch (a62) {
            case 0: val41 = 25; break;
            case 1: val41 = 0; break;
            case 2: z84 = -9; break;
            default: break;
        }
        a62 = a62 + 1;
    }
}
int main() { test_func(); return 0; }

