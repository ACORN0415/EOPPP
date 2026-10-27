// RTPG_3509: vars=4 stmts=2
void test_func(void) {
    int acc91 = 15;
    int v56 = 27;
    int acc80 = 44;
    int sum40 = 8;
    int i;
    for (i = 0; i < 53; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        acc91 = sum40 - v56;
        acc80 = v56 - acc80;
        }
    }
}
int main() { test_func(); return 0; }

