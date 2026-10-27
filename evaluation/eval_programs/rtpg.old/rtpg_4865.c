// RTPG_4865: vars=5 stmts=3
void test_func(void) {
    int a52 = 0;
    int b38 = -10;
    int c47 = 7;
    int c58 = 10;
    int v29 = 43;
    int *ptr = &a52;
    int i;
    for (i = 0; i < 13; i++) {
        c47 = b38 + a52;
        v29 = c58 + 44;
        v29 = v29 - 2;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

