// RTPG_7543: vars=10 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int c98 = 26499;
    int acc72 = 14571;
    int prev28 = 62369;
    int c18 = 10;
    double val91 = 20.64;
    int cnt11 = 5;
    int hi7 = 49902;
    int out47 = 9;
    int sum81 = 10;
    double z54 = 42.48;
    int i;
    for (i = 0; i < 64; i++) {
        prev28 = xn[i];
        out47 = out47 - 4;
        acc72 = val91 % cnt11;
        acc72 = acc72 + 2;
        hi7 = out47 % c98;
        val91 = hi7 - z54;
        out47 = out47 - c18;
        if (prev28 <= 84) {
        c18 = acc72 - z54;
        }
        yo[i] = acc72;
    }
}
int main() { test_func(); return 0; }

