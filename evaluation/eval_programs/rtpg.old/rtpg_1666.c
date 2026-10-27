// RTPG_1666: vars=3 stmts=7
void test_func(void) {
    int b52 = 54;
    int x16 = 20;
    int z90 = -42;
    int i;
    for (i = 0; i < 5; i++) {
        switch (x16) {
            case 0: z90 = 2; break;
            case 1: b52 = 17633; break;
            default: break;
        }
        x16 = x16 + 1;
    }
}
int main() { test_func(); return 0; }

