// RTPG_6787: vars=3 stmts=8
void test_func(void) {
    int y66 = 23595;
    int c55 = 47;
    int cnt92 = 41;
    int i;
    for (i = 0; i < 54; i++) {
        y66 = c55 & cnt92;
        cnt92 = c55 + cnt92;
        cnt92 = y66 - y66;
        c55 = c55 - 1;
        cnt92 = cnt92 - 5;
        c55 = c55 - c55;
        cnt92 = c55 % cnt92;
        c55 = cnt92 + 4;
        if (cnt92 != -40) {
        y66 = cnt92 + c55;
        }
    }
}
int main() { test_func(); return 0; }

