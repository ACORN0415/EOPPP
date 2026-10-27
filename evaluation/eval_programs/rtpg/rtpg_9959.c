// RTPG_9959: vars=6 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int z48 = 52288;
    float cur18 = 0.58;
    float c21 = 82.02;
    int res50 = 9;
    int hi36 = 43710;
    double z97 = 66.94;
    int *ptr = &z48;
    int i;
    for (i = 0; i < 16; i++) {
        hi36 = xn[i];
        hi36 = hi36 - 5;
        res50 = cur18 - hi36;
        z48 = res50 + z48;
        z97 = cur18 + z48;
        z97 = z97 + 2;
        c21 = z48 + z97;
        *ptr = *ptr + 1;
        yo[i] = hi36;
    }
}
int main() { test_func(); return 0; }

