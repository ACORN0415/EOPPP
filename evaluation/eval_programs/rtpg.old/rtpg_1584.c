// RTPG_1584: vars=4 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    float res85 = 34.01;
    float out91 = 79.14;
    int sum60 = 35071;
    float cnt14 = 30.80;
    int i;
    for (i = 0; i < 32; i++) {
        cnt14 = xn[i];
        out91 = sum60;
        cnt14 = cnt14 + cnt14;
        out91 = cnt14 - out91;
        if (res85 > 59) {
        cnt14 = cnt14 - 13;
        }
        yo[i] = out91;
    }
}
int main() { test_func(); return 0; }

