// RTPG_9823: vars=6 stmts=5
void test_func(void) {
    int acc16 = 58;
    int a16 = 46;
    int dat65 = 86;
    double dat26 = 93.62;
    int z13 = 53;
    int prev3 = 31;
    int *ptr = &dat26;
    int h0 = 25392;
    int sv0 = 0;
    int h1 = 20;
    int sv1 = 0;
    int h2 = 31050;
    int sv2 = 0;
    int i;
    for (i = 0; i < 33; i++) {
        a16 = z13 * 40817;
        dat26 = prev3 + acc16;
        prev3 = dat26 * 5;
        dat26 = dat26 - 4;
        acc16 = acc16 - 9;
        *ptr = *ptr + 2;
        if (dat65 >= 17) {
        acc16 = acc16 + 2;
        }
    }
}
int main() { test_func(); return 0; }

