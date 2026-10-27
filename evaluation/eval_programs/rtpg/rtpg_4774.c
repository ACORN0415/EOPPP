// RTPG_4774: vars=6 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int tmp7 = 2;
    int b65 = -4;
    int sum90 = 10;
    int sum80 = 2;
    int lo53 = 4;
    int out34 = 5;
    int i;
    for (i = 0; i < 32; i++) {
        tmp7 = xn[i];
        b65 = b65 + sum80;
        tmp7 = sum80 + b65;
        yo[i] = tmp7;
    }
}
int main() { test_func(); return 0; }

