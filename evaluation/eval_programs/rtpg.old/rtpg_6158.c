// RTPG_6158: vars=7 stmts=4
void test_func(void) {
    int y9 = 77;
    int acc90 = 5;
    int c52 = 25;
    int y7 = 8;
    int tmp77 = -15;
    int lo30 = -11;
    int acc50 = 1;
    int *ptr = &c52;
    int i;
    for (i = 0; i < 12; i++) {
        y9 = c52 % y7;
        acc50 = tmp77 + acc50;
        y9 = y9 ^ tmp77;
        tmp77 = tmp77 / y7;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

