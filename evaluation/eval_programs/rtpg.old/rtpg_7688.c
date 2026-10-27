// RTPG_7688: vars=3 stmts=4
void test_func(void) {
    int z79 = 29;
    int cnt57 = 51;
    int b81 = 35000;
    int *ptr = &z79;
    int i;
    for (i = 0; i < 77; i++) {
        b81 = b81 - 3;
        b81 = b81 + 58;
        cnt57 = z79 - 6;
        z79 = b81 + b81;
        *ptr = *ptr + 4;
        if (z79 != -12) {
        cnt57 = cnt57 - z79;
        }
    }
}
int main() { test_func(); return 0; }

