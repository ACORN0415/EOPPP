// RTPG_9149: vars=3 stmts=11
void test_func(void) {
    int x57 = 27737;
    int c99 = 59;
    int val64 = 23738;
    int i;
    for (i = 0; i < 5; i++) {
        val64 = val64 - x57;
        c99 = val64 - -35;
        x57 = c99 - val64;
        c99 = c99 - 44;
        c99 = x57 + x57;
        x57 = x57 - val64;
        val64 = val64 + 1;
        c99 = val64 + x57;
        val64 = c99 - val64;
        c99 = c99 - 2;
        x57 = c99 - val64;
    }
}
int main() { test_func(); return 0; }

