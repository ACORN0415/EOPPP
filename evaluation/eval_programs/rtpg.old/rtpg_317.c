// RTPG_317: vars=3 stmts=3
void test_func(void) {
    int res12 = 32124;
    int val54 = 16;
    int dat44 = 57;
    int i;
    for (i = 0; i < 27; i++) {
        dat44 = res12 - dat44;
        val54 = res12 + 6;
        dat44 = dat44 - 4;
    }
}
int main() { test_func(); return 0; }

