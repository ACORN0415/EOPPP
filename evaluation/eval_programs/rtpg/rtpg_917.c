// RTPG_917: vars=9 stmts=8
void test_func(void) {
    int sum67 = 7;
    int tmp78 = 38;
    int lo87 = 0;
    int acc72 = 25529;
    int b0 = 6;
    int y7 = 51396;
    int v37 = 55325;
    int prev43 = 9;
    int b14 = 38;
    int *ptr = &tmp78;
    int i;
    for (i = 0; i < 25; i++) {
        v37 = acc72 - b14;
        sum67 = prev43 | y7;
        acc72 = acc72 + 4;
        acc72 = prev43 - 67;
        tmp78 = prev43 | tmp78;
        sum67 = b0 + y7;
        acc72 = b0 - prev43;
        v37 = v37 - lo87;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

