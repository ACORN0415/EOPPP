// RTPG_9259: vars=10 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int hi11 = -12;
    int prev60 = 83;
    int res89 = 8;
    int b39 = 41;
    int tmp1 = -47;
    int out49 = 9;
    int c78 = 57118;
    int b2 = 5;
    int val75 = 49;
    int tmp95 = 4;
    int *ptr = &tmp1;
    int i;
    for (i = 0; i < 32; i++) {
        b2 = xn[i];
        prev60 = val75;
        prev60 = b39 + 0;
        b39 = prev60 - hi11;
        *ptr = *ptr + 2;
        if (b39 >= 70) {
        prev60 = hi11 - 4;
        }
        yo[i] = hi11;
    }
}
int main() { test_func(); return 0; }

