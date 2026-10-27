// RTPG_7137: vars=4 stmts=10
void test_func(void) {
    int c51 = 0;
    int prev52 = 2;
    int out33 = 14;
    int sum72 = 21;
    int *ptr = &out33;
    int h0 = 36062;
    int sv0 = 0;
    int h1 = 42;
    int sv1 = 0;
    int i;
    for (i = 0; i < 20; i++) {
        prev52 = out33 * 23;
        out33 = prev52 + c51;
        out33 = sum72;
        prev52 = c51 + out33;
        c51 = c51;
        c51 = prev52;
        c51 = out33 + sum72;
        c51 = out33 + prev52;
        sum72 = sum72;
        prev52 = out33;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

