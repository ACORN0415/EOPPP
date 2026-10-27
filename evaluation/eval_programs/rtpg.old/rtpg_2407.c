// RTPG_2407: vars=3 stmts=3
void test_func(void) {
    int out10 = 38212;
    int out37 = 26;
    int c77 = 46;
    int i;
    for (i = 0; i < 53; i++) {
        out37 = c77 - out37;
        out37 = out37 - 3;
        c77 = c77 - 4;
    }
}
int main() { test_func(); return 0; }

