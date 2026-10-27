// RTPG_6475: vars=10 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    float c60 = 93.96;
    int cur42 = 0;
    int tmp15 = 13438;
    double v76 = 6.39;
    int v24 = 71;
    float cnt16 = 36.28;
    int out34 = 14;
    float out57 = 63.45;
    int sum15 = 33621;
    float lo10 = 51.76;
    int i;
    for (i = 0; i < 32; i++) {
        cnt16 = xn[i];
        out57 = v24 - cur42;
        cur42 = cnt16 + cur42;
        out34 = cnt16 + cur42;
        yo[i] = out34;
    }
}
int main() { test_func(); return 0; }

