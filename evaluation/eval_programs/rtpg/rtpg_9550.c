// RTPG_9550: vars=3 stmts=5
void test_func(void) {
    int dat3 = -42;
    int c37 = 54666;
    int a40 = 8412;
    int i;
    for (i = 0; i < 11; i++) {
        c37 = a40 - c37;
        a40 = a40 + dat3;
        a40 = a40 + dat3;
        dat3 = a40;
        dat3 = dat3 + 46496;
        if (a40 <= 91) {
        a40 = a40 + 4;
        }
    }
}
int main() { test_func(); return 0; }

