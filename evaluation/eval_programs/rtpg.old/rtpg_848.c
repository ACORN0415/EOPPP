// RTPG_848: vars=6 stmts=2
void test_func(void) {
    int val11 = 6;
    int c41 = -21;
    int out20 = 38;
    int x80 = 1;
    int b32 = 7;
    int x58 = 23558;
    int *ptr = &x80;
    int i;
    for (i = 0; i < 31; i++) {
        c41 = c41 + 3;
        b32 = x80 + out20;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

