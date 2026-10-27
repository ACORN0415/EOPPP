// RTPG_5509: vars=4 stmts=4
void test_func(void) {
    int acc52 = 29;
    double acc23 = 72.94;
    int v56 = 63;
    int out53 = 10;
    int i;
    for (i = 0; i < 48; i++) {
        acc23 = acc52;
        out53 = acc52;
        v56 = acc23 - acc23;
        out53 = v56;
        if (v56 < 71) {
        acc52 = acc23 - v56;
        }
    }
}
int main() { test_func(); return 0; }

