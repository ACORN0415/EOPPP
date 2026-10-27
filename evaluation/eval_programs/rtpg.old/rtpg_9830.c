// RTPG_9830: vars=3 stmts=7
void test_func(void) {
    int v26 = 25;
    int acc22 = 88;
    int y80 = 26532;
    int i;
    for (i = 0; i < 25; i++) {
        y80 = y80 - 3;
        acc22 = v26 + acc22;
        v26 = v26 - y80;
        y80 = v26 + 40687;
        acc22 = y80 - 71;
        v26 = acc22;
        y80 = v26;
        if (y80 > 89) {
        acc22 = acc22 - v26;
        }
    }
}
int main() { test_func(); return 0; }

