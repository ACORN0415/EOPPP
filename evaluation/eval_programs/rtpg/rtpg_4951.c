// RTPG_4951: vars=8 stmts=4
struct Data { int a; int b; };
void test_func(void) {
    int z71 = 18931;
    int b65 = 43;
    int tmp67 = 9;
    int val33 = 5;
    int c42 = 1;
    int res79 = 61;
    int b51 = 11;
    int hi93 = 4;
    struct Data s; s.a = 1; s.b = -36;
    int *ptr = &hi93;
    int i;
    for (i = 0; i < 41; i++) {
        c42 = c42 - 2;
        z71 = z71;
        tmp67 = b51 + c42;
        b65 = hi93 + tmp67;
        *ptr = *ptr + 2;
        s.a = s.a + s.b;
        if (tmp67 >= 32) {
        c42 = tmp67 + 2;
        }
    }
}
int main() { test_func(); return 0; }

