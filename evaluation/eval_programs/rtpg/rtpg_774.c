// RTPG_774: vars=3 stmts=8
void test_func(void) {
    int a13 = 1;
    int c21 = 5;
    int y65 = 95;
    int i;
    for (i = 0; i < 100; i++) {
        c21 = c21 - 3;
        c21 = c21 + 3;
        c21 = y65 + c21;
        a13 = c21 - y65;
        a13 = a13 - y65;
        c21 = c21 - 2;
        c21 = y65 - a13;
        a13 = y65 - c21;
    }
}
int main() { test_func(); return 0; }

