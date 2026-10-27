// RTPG_6156: vars=4 stmts=3
void test_func(void) {
    int b2 = 1;
    int sum8 = 68;
    int a52 = 25;
    int sum35 = 6;
    int *ptr = &sum35;
    int i;
    for (i = 0; i < 92; i++) {
        a52 = a52 - 2;
        b2 = sum35 - 18;
        b2 = sum8;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

