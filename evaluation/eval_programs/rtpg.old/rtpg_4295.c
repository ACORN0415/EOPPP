// RTPG_4295: vars=4 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int acc42 = -27;
    int c55 = 7;
    int cnt22 = 49;
    int z8 = 60;
    int i;
    for (i = 0; i < 16; i++) {
        c55 = xn[i];
        acc42 = acc42 ^ c55;
        z8 = z8 & acc42;
        z8 = z8 - 1;
        cnt22 = acc42 + 31775;
        cnt22 = c55 - 9;
        c55 = acc42 & z8;
        if (cnt22 != 18) {
        c55 = cnt22 - c55;
        }
        yo[i] = cnt22;
    }
}
int main() { test_func(); return 0; }

