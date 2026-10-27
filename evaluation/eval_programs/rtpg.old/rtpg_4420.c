// RTPG_4420: vars=3 stmts=7
void test_func(void) {
    int out77 = 49;
    int hi85 = -29;
    int c50 = 8;
    int *ptr = &hi85;
    int i;
    for (i = 0; i < 83; i++) {
        out77 = hi85 - 1;
        hi85 = hi85;
        out77 = out77 - 2;
        c50 = c50 - out77;
        c50 = c50;
        out77 = out77 - 5;
        hi85 = out77 - hi85;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

