// RTPG_3198: vars=10 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int sum61 = 6;
    int val99 = 45;
    int acc7 = 15;
    int val31 = 2;
    int a54 = 2;
    int y46 = 0;
    int y27 = 19;
    int out16 = -11;
    int x81 = 60;
    int b17 = -29;
    int i;
    for (i = 0; i < 32; i++) {
        y27 = xn[i];
        y46 = a54 % val31;
        acc7 = val31 + y46;
        val31 = val31 - 4;
        if (y46 == -28) {
        y27 = out16 + x81;
        }
        yo[i] = y46;
    }
}
int main() { test_func(); return 0; }

