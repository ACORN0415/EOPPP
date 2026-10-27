// RTPG_2706: vars=4 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int lo2 = 53229;
    int y19 = 14144;
    int sum79 = 2;
    int c83 = 41;
    int i;
    for (i = 0; i < 16; i++) {
        lo2 = xn[i];
        c83 = sum79 & y19;
        y19 = lo2 / c83;
        c83 = c83 + 4;
        lo2 = y19;
        c83 = c83 / y19;
        sum79 = lo2 + 62;
        lo2 = lo2 + lo2;
        yo[i] = y19;
    }
}
int main() { test_func(); return 0; }

