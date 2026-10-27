// RTPG_5247: vars=10 stmts=5
void test_func(void) {
    int z18 = 2;
    int acc54 = 5;
    int dat28 = 4;
    int b62 = 28;
    int z99 = 4;
    int dat71 = 53240;
    int z86 = 30;
    int hi41 = 1;
    int out29 = -12;
    int out19 = 10;
    int *ptr = &hi41;
    int i;
    for (i = 0; i < 64; i++) {
        int j;
        for (j = 0; j < 13; j++) {
        dat71 = dat28 - dat71;
        out19 = z86 + 66;
        hi41 = hi41 + 2;
        z86 = z86;
        dat28 = out29;
        }
    }
}
int main() { test_func(); return 0; }

