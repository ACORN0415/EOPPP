// RTPG_2189: vars=9 stmts=2
int xn[16];
int yo[16];
enum State { GREEN, ON, RED };
void test_func(void) {
    int z12 = 93;
    int x8 = 78;
    int c79 = 7;
    int res55 = -49;
    int hi85 = 29;
    int prev48 = -42;
    int lo18 = 9;
    int hi22 = -3;
    int y74 = 17;
    enum State st = GREEN;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 50;
    int sv1 = 0;
    int h2 = 69;
    int sv2 = 0;
    int h3 = -8;
    int sv3 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        z12 = xn[i];
        prev48 = x8;
        hi85 = hi85 + 2;
        yo[i] = hi85;
    }
}
int main() { test_func(); return 0; }

