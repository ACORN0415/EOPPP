// RTPG_4477: vars=3 stmts=7
void test_func(void) {
    int hi85 = 49;
    int c50 = -29;
    int out77 = 8;
    int *ptr = &c50;
    int i;
    for (i = 0; i < 83; i++) {
        hi85 = c50 - 1;
        c50 = c50;
        hi85 = hi85 - 2;
        out77 = out77 - hi85;
        out77 = out77;
        hi85 = hi85 - 5;
        c50 = hi85 - c50;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

