// RTPG_805: vars=5 stmts=12
void test_func(void) {
    int c32 = 20477;
    int b18 = 45185;
    int prev6 = -29;
    int lo53 = 9;
    int x97 = -28;
    int *ptr = &c32;
    int h0 = 58177;
    int sv0 = 0;
    int h1 = -21;
    int sv1 = 0;
    int i;
    for (i = 0; i < 97; i++) {
        b18 = b18 + 5;
        lo53 = x97 - lo53;
        prev6 = b18 - lo53;
        x97 = x97 + x97;
        prev6 = x97;
        c32 = b18 + c32;
        lo53 = b18 - c32;
        c32 = x97 * -9;
        c32 = c32 * 37;
        x97 = prev6;
        x97 = lo53;
        x97 = lo53 * 15;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

