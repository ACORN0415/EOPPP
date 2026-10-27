// RTPG_4380: vars=5 stmts=10
int xn[16];
int yo[16];
void test_func(void) {
    int dat58 = 18;
    int b29 = 51502;
    int y56 = 9;
    int res47 = 9;
    int z99 = 55741;
    int i;
    for (i = 0; i < 16; i++) {
        z99 = xn[i];
        dat58 = y56 - res47;
        dat58 = b29 + z99;
        z99 = dat58;
        y56 = res47;
        y56 = z99 - 54;
        y56 = y56 + b29;
        y56 = res47;
        res47 = y56 - dat58;
        b29 = y56 + b29;
        res47 = dat58 - y56;
        if (z99 >= -8) {
        z99 = dat58 - 4;
        }
        yo[i] = dat58;
    }
}
int main() { test_func(); return 0; }

