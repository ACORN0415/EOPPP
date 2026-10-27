// RTPG_2296: vars=3 stmts=4
void test_func(void) {
    int val54 = 4;
    int tmp51 = 84;
    int x54 = 8;
    int *ptr = &x54;
    int i;
    for (i = 0; i < 31; i++) {
        val54 = val54 + val54;
        tmp51 = val54 + tmp51;
        val54 = tmp51 - x54;
        tmp51 = x54 - tmp51;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

