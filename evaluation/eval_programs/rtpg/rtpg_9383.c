// RTPG_9383: vars=3 stmts=4
void test_func(void) {
    int y12 = 8;
    int a86 = 4;
    int y36 = 2;
    int *ptr = &y12;
    int i;
    for (i = 0; i < 17; i++) {
        y36 = y12;
        y36 = y36 + a86;
        a86 = y12 - 96;
        a86 = y12;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

