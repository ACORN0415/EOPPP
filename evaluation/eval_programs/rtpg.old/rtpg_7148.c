// RTPG_7148: vars=3 stmts=11
void test_func(void) {
    int b2 = 46;
    int b31 = 80;
    int acc3 = 1;
    int i;
    for (i = 0; i < 75; i++) {
        b31 = b2 + b31;
        acc3 = acc3 - 5;
        b2 = b2 - 95;
        acc3 = acc3;
        b31 = b31 + 3;
        acc3 = acc3 - b31;
        b31 = b2 + b31;
        acc3 = b2 - b2;
        b2 = b31 + acc3;
        acc3 = b2 + b31;
        acc3 = b31 - b2;
        if (b2 <= 37) {
        acc3 = acc3 - 5;
        }
    }
}
int main() { test_func(); return 0; }

