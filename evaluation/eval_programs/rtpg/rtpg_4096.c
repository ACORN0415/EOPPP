// RTPG_4096: vars=3 stmts=4
void test_func(void) {
    int x65 = 72;
    int hi45 = 8;
    int res83 = 11;
    int *ptr = &x65;
    int i;
    for (i = 0; i < 97; i++) {
        hi45 = hi45 + 2;
        x65 = x65 + 4;
        x65 = x65 + 5;
        res83 = hi45 - x65;
        *ptr = *ptr + 2;
        if (x65 > -37) {
        res83 = x65 - res83;
        }
    }
}
int main() { test_func(); return 0; }

