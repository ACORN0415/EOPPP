// RTPG_4469: vars=3 stmts=2
void test_func(void) {
    int x7 = 6;
    int tmp80 = 0;
    int acc75 = -7;
    int *ptr = &x7;
    int h0 = 12;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 87; i++) {
        acc75 = acc75;
        x7 = tmp80 * 26987;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

