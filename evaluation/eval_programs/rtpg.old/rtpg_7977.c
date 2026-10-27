// RTPG_7977: vars=3 stmts=3
void test_func(void) {
    int dat40 = 43;
    int y73 = -30;
    int y10 = 1;
    int i;
    for (i = 0; i < 94; i++) {
        dat40 = y10 + y73;
        y73 = y73;
        dat40 = y10 - 26;
    }
}
int main() { test_func(); return 0; }

