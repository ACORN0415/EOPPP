// RTPG_6651: vars=3 stmts=7
void test_func(void) {
    int c97 = 7;
    int a8 = 40;
    int lo21 = 29;
    int h0 = 11;
    int sv0 = 0;
    int h1 = 21;
    int sv1 = 0;
    int i;
    for (i = 0; i < 39; i++) {
        c97 = c97 - a8;
        c97 = c97 - c97;
        a8 = a8 - 4;
        c97 = a8;
        c97 = a8 * 2718;
        a8 = c97 + 1;
        c97 = lo21 + c97;
    }
}
int main() { test_func(); return 0; }

