// RTPG_495: vars=4 stmts=3
void test_func(void) {
    int hi79 = 33;
    int hi13 = 2;
    int a65 = 21;
    int hi77 = 26799;
    int *ptr = &hi79;
    int i;
    for (i = 0; i < 84; i++) {
        hi13 = hi79 - 0;
        hi13 = hi13 + a65;
        hi77 = hi77 + 1;
        *ptr = *ptr + 1;
        if (hi13 < 71) {
        hi13 = hi77 - hi79;
        }
    }
}
int main() { test_func(); return 0; }

