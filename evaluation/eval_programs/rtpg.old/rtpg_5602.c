// RTPG_5602: vars=5 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int prev35 = 72;
    int dat45 = 5;
    int lo16 = 68;
    int out71 = 18;
    int tmp76 = 25607;
    int i;
    for (i = 0; i < 64; i++) {
        tmp76 = xn[i];
        out71 = out71;
        dat45 = dat45 + out71;
        prev35 = out71 + tmp76;
        yo[i] = prev35;
    }
}
int main() { test_func(); return 0; }

