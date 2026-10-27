// RTPG_7417: vars=3 stmts=2
void test_func(void) {
    float cnt44 = 93.76;
    int z14 = 7;
    int a64 = 38;
    int i;
    for (i = 0; i < 32; i++) {
        cnt44 = cnt44 - a64;
        cnt44 = cnt44 - 2;
    }
}
int main() { test_func(); return 0; }

