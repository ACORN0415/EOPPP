// RTPG_8585: vars=4 stmts=4
void test_func(void) {
    int b0 = 20;
    int z9 = 0;
    int a83 = 11;
    int acc84 = 10;
    int h0 = 6;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 48; i++) {
        b0 = z9 + acc84;
        acc84 = acc84 + z9;
        b0 = b0 - a83;
        acc84 = b0;
    }
done:
    a83 = 0;
}
int main() { test_func(); return 0; }

