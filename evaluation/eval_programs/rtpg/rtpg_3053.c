// RTPG_3053: vars=6 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int out11 = 0;
    float tmp23 = 47.27;
    int out96 = 9;
    double tmp52 = 25.72;
    float res6 = 81.94;
    float out2 = 22.65;
    int i;
    for (i = 0; i < 32; i++) {
        res6 = xn[i];
        out96 = tmp23 + 2;
        tmp52 = tmp52 - 1;
        out96 = out11 + 8;
        tmp23 = out2;
        if (out96 == -35) {
        tmp52 = tmp52 + 24;
        }
        yo[i] = res6;
    }
}
int main() { test_func(); return 0; }

