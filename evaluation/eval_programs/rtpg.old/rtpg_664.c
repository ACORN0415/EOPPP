// RTPG_664: vars=4 stmts=6
void test_func(void) {
    int z29 = 23071;
    int tmp42 = 3;
    int cur47 = 2;
    int c29 = 8;
    int i;
    for (i = 0; i < 79; i++) {
        switch (z29) {
            case 0: c29 = 10; break;
            case 1: z29 = 4; break;
            default: break;
        }
        z29 = z29 + 1;
    }
done:
    tmp42 = 0;
}
int main() { test_func(); return 0; }

