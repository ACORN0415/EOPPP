// RTPG_7941: vars=5 stmts=7
void test_func(void) {
    int acc56 = 43;
    int lo41 = 30;
    float hi96 = 77.36;
    float acc44 = 32.72;
    int res84 = 1;
    int h0 = 5;
    int sv0 = 0;
    int h1 = -23;
    int sv1 = 0;
    int i;
    for (i = 0; i < 50; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        hi96 = hi96 - 4;
        res84 = acc56;
        acc44 = acc44 - 4;
        hi96 = hi96 - 5;
        lo41 = res84 + 96;
        acc56 = acc56 - 2;
        acc56 = res84 - acc56;
        }
    }
}
int main() { test_func(); return 0; }

