// RTPG_9458: vars=3 stmts=2
void test_func(void) {
    int acc11 = 74;
    int hi97 = -34;
    int c76 = 6;
    int i;
    for (i = 0; i < 10; i++) {
        acc11 = c76;
        hi97 = acc11;
        if (hi97 >= 56) {
        acc11 = c76 - acc11;
        }
    }
}
int main() { test_func(); return 0; }

