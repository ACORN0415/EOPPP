// RTPG_4067: vars=3 stmts=4
void test_func(void) {
    int res83 = 72;
    int hi45 = 8;
    int x65 = 11;
    int *ptr = &res83;
    int i;
    for (i = 0; i < 97; i++) {
        hi45 = hi45 + 2;
        res83 = res83 + 4;
        res83 = res83 + 5;
        x65 = hi45 - res83;
        *ptr = *ptr + 2;
        if (res83 > -37) {
        x65 = res83 - x65;
        }
    }
}
int main() { test_func(); return 0; }

