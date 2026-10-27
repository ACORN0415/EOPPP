// RTPG_2940: vars=3 stmts=5
void test_func(void) {
    int b57 = -29;
    int sum44 = 9;
    int acc73 = 7;
    int *ptr = &b57;
    int i;
    for (i = 0; i < 57; i++) {
        b57 = acc73 + b57;
        acc73 = sum44 - 61;
        b57 = b57 + 3;
        sum44 = sum44 - 3;
        b57 = b57 + sum44;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

