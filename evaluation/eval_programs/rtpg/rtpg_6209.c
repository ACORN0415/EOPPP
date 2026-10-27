// RTPG_6209: vars=9 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int acc88 = 60128;
    int prev61 = 2;
    int lo96 = 27;
    int val19 = 53939;
    int x32 = -4;
    int acc77 = 0;
    int sum80 = 44193;
    int z62 = 8;
    int y80 = 91;
    int i;
    for (i = 0; i < 32; i++) {
        y80 = xn[i];
        acc88 = acc77 & z62;
        x32 = acc77 + prev61;
        y80 = val19 | acc77;
        acc77 = sum80 + x32;
        x32 = acc77 - prev61;
        acc88 = acc88 + prev61;
        acc88 = acc88 % val19;
        y80 = lo96 + z62;
        acc77 = val19 - y80;
        val19 = acc77;
        x32 = val19 + val19;
        acc88 = z62 % val19;
        if (sum80 > 67) goto done;
        yo[i] = prev61;
    }
done:
    z62 = 0;
}
int main() { test_func(); return 0; }

