// RTPG_4259: vars=3 stmts=5
void test_func(void) {
    int sum55 = 40;
    int b97 = 7;
    int sum21 = 4;
    int i;
    for (i = 0; i < 41; i++) {
        sum21 = sum21 + 18935;
        sum55 = sum21 - -2;
        sum21 = sum55 + sum21;
        sum21 = sum21 + b97;
        sum21 = sum21 - 1;
    }
}
int main() { test_func(); return 0; }

