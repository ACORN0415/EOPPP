// RTPG_4746: vars=8 stmts=12
int xn[64];
int yo[64];
void test_func(void) {
    int prev86 = 55;
    int hi25 = 0;
    int b80 = 43;
    int lo75 = 10;
    int y57 = 4;
    int cur35 = 46732;
    int z72 = -16;
    int y76 = 7;
    int i;
    for (i = 0; i < 64; i++) {
        y76 = xn[i];
        cur35 = y57 - 3;
        b80 = lo75 - z72;
        lo75 = cur35 + y57;
        z72 = b80 - y76;
        y76 = z72 + lo75;
        y57 = y57 - 5;
        prev86 = lo75;
        lo75 = cur35;
        cur35 = y57 - 52835;
        b80 = b80 + 2;
        hi25 = hi25 - 2;
        y57 = b80 + 8;
        yo[i] = hi25;
    }
}
int main() { test_func(); return 0; }

