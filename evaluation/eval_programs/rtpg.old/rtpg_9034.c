// RTPG_9034: vars=8 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    double tmp5 = 21.94;
    float v2 = 11.15;
    int tmp88 = 81;
    double a94 = 68.72;
    float lo96 = 17.01;
    int y78 = 24822;
    double dat18 = 64.95;
    float val60 = 54.96;
    int i;
    for (i = 0; i < 32; i++) {
        tmp5 = xn[i];
        dat18 = lo96 - 7;
        tmp88 = tmp5;
        lo96 = y78;
        y78 = val60 + tmp88;
        val60 = tmp5 - 5;
        tmp5 = a94 + lo96;
        a94 = tmp88 + 7;
        yo[i] = y78;
    }
done:
    a94 = 0;
}
int main() { test_func(); return 0; }

