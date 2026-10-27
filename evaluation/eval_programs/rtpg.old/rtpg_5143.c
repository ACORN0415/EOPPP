// RTPG_5143: vars=8 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int b68 = 47766;
    int hi65 = 99;
    int cnt40 = 23;
    int prev47 = -30;
    int sum51 = 44625;
    int res74 = 8;
    int out29 = 35;
    int b60 = 1;
    int i;
    for (i = 0; i < 64; i++) {
        sum51 = xn[i];
        sum51 = sum51 + 4;
        sum51 = sum51 + 1;
        cnt40 = out29;
        res74 = res74 - b60;
        sum51 = b60;
        if (cnt40 != 10) {
        b60 = res74 - prev47;
        }
        yo[i] = cnt40;
    }
}
int main() { test_func(); return 0; }

