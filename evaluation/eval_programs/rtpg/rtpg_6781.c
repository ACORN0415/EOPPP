// RTPG_6781: vars=4 stmts=9
void test_func(void) {
    int a3 = -6;
    int b94 = 92;
    int res83 = -31;
    int a84 = 5;
    int i;
    for (i = 0; i < 82; i++) {
        a84 = a84 + 2;
        a84 = a84 - 42;
        a84 = b94 + 27;
        a3 = b94 + a3;
        a3 = a84 + res83;
        a3 = a84 + 77;
        b94 = a84 - b94;
        a84 = res83 - res83;
        b94 = b94 - 4;
    }
}
int main() { test_func(); return 0; }

