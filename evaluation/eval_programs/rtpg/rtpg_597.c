// RTPG_597: vars=5 stmts=4
void test_func(void) {
    int c18 = 15;
    int prev0 = 9;
    int prev32 = 10;
    int acc43 = 4;
    int dat42 = -39;
    int *ptr = &prev32;
    int i;
    for (i = 0; i < 56; i++) {
        dat42 = prev0 + prev0;
        acc43 = prev32 + 13894;
        dat42 = dat42 - 1;
        acc43 = acc43;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

