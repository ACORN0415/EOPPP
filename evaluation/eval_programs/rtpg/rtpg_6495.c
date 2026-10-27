// RTPG_6495: vars=4 stmts=7
void test_func(void) {
    int res60 = 3228;
    int hi52 = 16;
    int dat0 = 29;
    int out78 = 1;
    int i;
    for (i = 0; i < 63; i++) {
        out78 = out78 + 4;
        res60 = res60 - 1;
        hi52 = hi52 + 12649;
        out78 = out78 - 2;
        dat0 = out78 + res60;
        res60 = res60 + 2;
        hi52 = out78 - dat0;
    }
}
int main() { test_func(); return 0; }

