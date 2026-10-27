// RTPG_841: vars=4 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int acc48 = 5720;
    int v89 = -34;
    int hi60 = 40982;
    int sum21 = -40;
    int *ptr = &sum21;
    int i;
    for (i = 0; i < 16; i++) {
        hi60 = xn[i];
        hi60 = v89 - 42;
        hi60 = sum21 + hi60;
        acc48 = acc48 + 4;
        acc48 = acc48 - 3;
        acc48 = hi60 - 7;
        hi60 = hi60 - 5;
        hi60 = acc48 - hi60;
        v89 = v89 + hi60;
        v89 = v89;
        v89 = hi60;
        hi60 = acc48 + 6;
        sum21 = sum21 + 25;
        *ptr = *ptr + 4;
        if (hi60 >= 82) {
        hi60 = hi60 + 10;
        }
        yo[i] = acc48;
    }
}
int main() { test_func(); return 0; }

