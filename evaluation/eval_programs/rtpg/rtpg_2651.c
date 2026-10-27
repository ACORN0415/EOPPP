// RTPG_2651: vars=3 stmts=2
void test_func(void) {
    int hi10 = 97;
    int acc99 = 4;
    int tmp27 = 2;
    int i;
    for (i = 0; i < 57; i++) {
        tmp27 = tmp27 + 3;
        hi10 = hi10 - 4;
        if (tmp27 >= 81) {
        tmp27 = acc99;
        }
    }
}
int main() { test_func(); return 0; }

