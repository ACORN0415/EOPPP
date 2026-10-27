// RTPG_9343: vars=3 stmts=2
void test_func(void) {
    int c69 = 10;
    int y1 = 41524;
    int b11 = 20;
    int i;
    for (i = 0; i < 58; i++) {
        b11 = c69 | y1;
        c69 = c69 - 2;
    }
}
int main() { test_func(); return 0; }

