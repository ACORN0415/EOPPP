// RTPG_2864: vars=10 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int prev72 = -43;
    int a47 = 15;
    int a65 = 31;
    int val67 = 81;
    int b96 = 1;
    int prev81 = 56725;
    int hi29 = 5;
    int sum98 = 1;
    int cur89 = 57124;
    int tmp18 = 7;
    int i;
    for (i = 0; i < 32; i++) {
        hi29 = xn[i];
        a65 = hi29 + tmp18;
        cur89 = cur89 - 2;
        prev81 = cur89;
        b96 = a47;
        prev72 = tmp18 - 45;
        a47 = b96 + sum98;
        tmp18 = tmp18 - 2;
        tmp18 = a65 - val67;
        yo[i] = val67;
    }
}
int main() { test_func(); return 0; }

