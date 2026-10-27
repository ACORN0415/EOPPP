// RTPG_5596: vars=4 stmts=4
void test_func(void) {
    int out53 = 29;
    double acc52 = 72.94;
    int v56 = 63;
    int acc23 = 10;
    int i;
    for (i = 0; i < 48; i++) {
        acc52 = out53;
        acc23 = out53;
        v56 = acc52 - acc52;
        acc23 = v56;
        if (v56 < 71) {
        out53 = acc52 - v56;
        }
    }
}
int main() { test_func(); return 0; }

