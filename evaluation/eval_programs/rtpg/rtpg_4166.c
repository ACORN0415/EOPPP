// RTPG_4166: vars=3 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int b69 = -3;
    int lo31 = 8;
    int y12 = 7;
    int h0 = 17;
    int sv0 = 0;
    int h1 = -13;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        b69 = xn[i];
        lo31 = lo31 + 1;
        b69 = y12 - b69;
        b69 = lo31 * 65;
        b69 = b69 - lo31;
        lo31 = y12 - lo31;
        yo[i] = y12;
    }
}
int main() { test_func(); return 0; }

