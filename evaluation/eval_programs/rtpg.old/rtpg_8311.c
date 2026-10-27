// RTPG_8311: vars=3 stmts=4
void test_func(void) {
    int c18 = 37770;
    int z21 = 6;
    int z67 = 10;
    int i;
    for (i = 0; i < 22; i++) {
        switch (c18) {
            case 0: z21 = -10; break;
            case 1: z21 = 9; break;
            case 2: z21 = 3; break;
            case 3: z21 = 9; break;
            default: break;
        }
        c18 = c18 + 1;
    }
}
int main() { test_func(); return 0; }

