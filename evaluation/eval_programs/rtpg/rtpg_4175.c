// RTPG_4175: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int cnt39 = -19;
    int prev70 = 7253;
    int tmp90 = -34;
    int res23 = 51921;
    int i;
    for (i = 0; i < 64; i++) {
        prev70 = xn[i];
        res23 = res23 ^ cnt39;
        prev70 = prev70 + 9;
        tmp90 = tmp90 + 1;
        if (cnt39 <= 54) {
        res23 = tmp90;
        }
        yo[i] = prev70;
    }
}
int main() { test_func(); return 0; }

