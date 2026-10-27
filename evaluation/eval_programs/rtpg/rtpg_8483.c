// RTPG_8483: vars=10 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int y91 = 48;
    int dat46 = 9;
    int y64 = 9;
    int x56 = 828;
    int out68 = 1;
    int lo79 = 15691;
    int acc97 = 37884;
    int sum99 = 11;
    int cur55 = 45;
    int z26 = 8;
    int i;
    for (i = 0; i < 32; i++) {
        y91 = xn[i];
        lo79 = dat46 + x56;
        z26 = cur55 + out68;
        sum99 = y64 + cur55;
        lo79 = y91 + y64;
        yo[i] = z26;
    }
}
int main() { test_func(); return 0; }

