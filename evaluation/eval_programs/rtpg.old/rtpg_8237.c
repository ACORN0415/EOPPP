// RTPG_8237: vars=3 stmts=4
void test_func(void) {
    int b44 = 5;
    int acc67 = 0;
    int tmp24 = 46;
    int i;
    for (i = 0; i < 37; i++) {
        tmp24 = b44 - b44;
        acc67 = b44 - b44;
        b44 = acc67 - b44;
        b44 = b44 + 1;
    }
}
int main() { test_func(); return 0; }

