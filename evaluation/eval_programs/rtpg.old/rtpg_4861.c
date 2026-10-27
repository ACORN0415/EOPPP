// RTPG_4861: vars=4 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    float cnt71 = 14.08;
    int res10 = -8;
    int x81 = -13;
    double z59 = 85.38;
    int i;
    for (i = 0; i < 16; i++) {
        res10 = xn[i];
        z59 = cnt71 - res10;
        x81 = cnt71 - -1;
        z59 = x81 - res10;
        x81 = res10 + 1;
        x81 = res10 + 35;
        if (res10 <= 52) {
        x81 = x81 - 4;
        }
        yo[i] = cnt71;
    }
}
int main() { test_func(); return 0; }

