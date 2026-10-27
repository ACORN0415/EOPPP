// RTPG_8144: vars=3 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int acc75 = 33;
    int tmp61 = 42;
    int res11 = 11425;
    int h0 = 48763;
    int sv0 = 0;
    int h1 = 12;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        tmp61 = xn[i];
        acc75 = tmp61;
        acc75 = res11 + tmp61;
        tmp61 = tmp61 * 27;
        tmp61 = acc75 + 22;
        yo[i] = tmp61;
    }
}
int main() { test_func(); return 0; }

