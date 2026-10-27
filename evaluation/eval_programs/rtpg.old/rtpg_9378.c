// RTPG_9378: vars=5 stmts=2
void test_func(void) {
    int hi86 = 38;
    int cur10 = 9;
    int out19 = -28;
    int out61 = -18;
    int tmp12 = 12;
    int h0 = 20;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 17; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        tmp12 = cur10 - 9;
        cur10 = cur10 + out61;
        }
    }
}
int main() { test_func(); return 0; }

