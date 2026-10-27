// RTPG_3126: vars=5 stmts=7
void test_func(void) {
    int z7 = 8;
    int hi79 = 26;
    int res43 = 39;
    int lo54 = 23232;
    int dat40 = 54265;
    int i;
    for (i = 0; i < 58; i++) {
        lo54 = lo54 + 5;
        lo54 = lo54 + 2;
        res43 = z7;
        z7 = dat40 - z7;
        z7 = z7 - 4;
        dat40 = hi79;
        res43 = z7 - lo54;
    }
}
int main() { test_func(); return 0; }

