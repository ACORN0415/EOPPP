// RTPG_1723: vars=10 stmts=11
int xn[64];
int yo[64];
enum State { BLUE, ON, RED };
void test_func(void) {
    int cur59 = 55006;
    int acc80 = 96;
    int a13 = 8383;
    int prev53 = 17753;
    int tmp79 = 36;
    int a65 = 52;
    int a49 = 98;
    int a78 = 5;
    int hi18 = 54;
    int z1 = 76;
    enum State st = BLUE;
    int h0 = 58967;
    int sv0 = 0;
    int h1 = 24;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        a49 = xn[i];
        cur59 = cur59 - 5;
        a49 = cur59 - hi18;
        tmp79 = z1 * 42;
        a13 = hi18 * 17;
        hi18 = hi18 + 3;
        z1 = a49 * 5;
        a65 = prev53 * 10;
        a65 = a13 - -2;
        prev53 = a65;
        a78 = a78 % a13;
        a49 = prev53 & a49;
        yo[i] = cur59;
    }
}
int main() { test_func(); return 0; }

