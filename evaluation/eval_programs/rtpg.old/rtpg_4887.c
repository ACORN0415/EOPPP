// RTPG_4887: vars=8 stmts=8
void test_func(void) {
    int x13 = 18;
    int cur14 = 10;
    int acc94 = -16;
    int sum75 = 5;
    int cnt69 = 5;
    int cur9 = 36;
    int x38 = 45401;
    int cur41 = 9;
    int *ptr = &x13;
    int i;
    for (i = 0; i < 23; i++) {
        cur9 = x13 + cur41;
        cur9 = cur9 - 3;
        acc94 = cur41 + 7;
        acc94 = sum75 - acc94;
        cur41 = acc94 - x38;
        cur9 = cur41 - acc94;
        x38 = x38 - 95;
        cur9 = cur9;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

