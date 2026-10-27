// RTPG_318: vars=3 stmts=3
void test_func(void) {
    int val54 = 32124;
    int dat44 = 16;
    int res12 = 57;
    int i;
    for (i = 0; i < 27; i++) {
        res12 = val54 - res12;
        dat44 = val54 + 6;
        res12 = res12 - 4;
    }
}
int main() { test_func(); return 0; }

