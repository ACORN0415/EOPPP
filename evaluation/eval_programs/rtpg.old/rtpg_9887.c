// RTPG_9887: vars=4 stmts=9
void test_func(void) {
    int acc23 = -50;
    int val89 = 0;
    int acc67 = 42;
    int y33 = 31;
    int i;
    for (i = 0; i < 9; i++) {
        acc23 = acc23 + 4;
        acc23 = acc23 + acc23;
        val89 = acc23 + 34;
        val89 = val89 - acc67;
        val89 = acc23 - 12514;
        acc67 = y33 - acc67;
        acc67 = acc67 - 5;
        val89 = y33 - -45;
        acc23 = acc67 + 65;
        if (acc67 < 11) {
        y33 = acc23 - y33;
        }
    }
}
int main() { test_func(); return 0; }

