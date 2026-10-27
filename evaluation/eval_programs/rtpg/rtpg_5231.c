// RTPG_5231: vars=3 stmts=4
void test_func(void) {
    int acc31 = 4;
    int hi96 = 48140;
    int c7 = 24;
    int h0 = 65;
    int sv0 = 0;
    int h1 = 15587;
    int sv1 = 0;
    int i;
    for (i = 0; i < 47; i++) {
        hi96 = hi96 + acc31;
        c7 = hi96 + 13;
        hi96 = hi96 + 2;
        c7 = c7 + hi96;
    }
}
int main() { test_func(); return 0; }

