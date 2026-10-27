// RTPG_7634: vars=6 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int y41 = 98;
    int acc33 = 11107;
    int y67 = 63;
    int res37 = 8;
    int cur97 = 1;
    int lo24 = 16;
    int i;
    for (i = 0; i < 32; i++) {
        y41 = xn[i];
        y67 = y67 + 3;
        acc33 = y67 - y41;
        y41 = res37 + 17;
        acc33 = acc33 + y67;
        acc33 = acc33 + 3;
        y41 = lo24 - 36;
        if (lo24 >= 26) {
        res37 = y41;
        }
        yo[i] = lo24;
    }
}
int main() { test_func(); return 0; }

