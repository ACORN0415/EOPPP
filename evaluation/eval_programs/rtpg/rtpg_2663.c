// RTPG_2663: vars=10 stmts=4
void test_func(void) {
    int z71 = -25;
    int acc86 = 82;
    int b65 = 40;
    int out54 = 76;
    int v36 = 96;
    int acc29 = 28151;
    int tmp80 = 4;
    int cnt87 = 43;
    int hi22 = 51984;
    int tmp68 = 45627;
    int h0 = 82;
    int sv0 = 0;
    int h1 = 24;
    int sv1 = 0;
    int i;
    for (i = 0; i < 66; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        z71 = z71 + 5;
        acc29 = out54 + z71;
        tmp80 = hi22 + z71;
        hi22 = hi22 - acc29;
        }
    }
}
int main() { test_func(); return 0; }

