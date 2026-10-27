// RTPG_1150: vars=5 stmts=3
void test_func(void) {
    int lo32 = 3;
    int c82 = 9;
    int prev96 = 99;
    int a97 = 73;
    int prev97 = 26;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 83; i++) {
        c82 = lo32 * 60339;
        c82 = c82 + prev96;
        lo32 = c82 + a97;
        if (a97 < -19) {
        c82 = prev96;
        }
    }
}
int main() { test_func(); return 0; }

