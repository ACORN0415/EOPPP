// RTPG_8633: vars=3 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int res80 = 46;
    int c83 = 24666;
    int y73 = 22223;
    int i;
    for (i = 0; i < 64; i++) {
        res80 = xn[i];
        y73 = res80 - c83;
        c83 = c83;
        y73 = c83 - y73;
        y73 = y73;
        res80 = res80 - 64;
        c83 = res80 + 10;
        if (y73 != 43) {
        c83 = c83 - 4;
        }
        yo[i] = c83;
    }
}
int main() { test_func(); return 0; }

