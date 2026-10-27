// RTPG_979: vars=5 stmts=12
void test_func(void) {
    int prev91 = 48009;
    int y81 = 33;
    int acc87 = 19;
    int acc10 = 10;
    int lo16 = -46;
    int h0 = 51149;
    int sv0 = 0;
    int h1 = 89;
    int sv1 = 0;
    int i;
    for (i = 0; i < 66; i++) {
        lo16 = prev91;
        y81 = prev91 - acc87;
        prev91 = prev91 - 20868;
        acc10 = y81;
        acc87 = y81 * 66;
        y81 = y81 - 10238;
        lo16 = lo16 - acc87;
        prev91 = prev91 - 3;
        lo16 = acc10 * 5;
        acc10 = lo16;
        acc10 = acc87 + prev91;
        prev91 = prev91 + 3;
        if (lo16 > -20) {
        acc87 = acc87;
        }
    }
}
int main() { test_func(); return 0; }

