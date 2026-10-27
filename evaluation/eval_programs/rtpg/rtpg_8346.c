// RTPG_8346: vars=3 stmts=4
void test_func(void) {
    int b44 = 5;
    int tmp24 = 0;
    int acc67 = 46;
    int i;
    for (i = 0; i < 37; i++) {
        acc67 = b44 - b44;
        tmp24 = b44 - b44;
        b44 = tmp24 - b44;
        b44 = b44 + 1;
    }
}
int main() { test_func(); return 0; }

