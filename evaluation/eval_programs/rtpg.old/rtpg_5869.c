// RTPG_5869: vars=6 stmts=4
void test_func(void) {
    int hi10 = 4;
    int hi51 = 49;
    int v73 = 31486;
    float out29 = 20.28;
    int a22 = 0;
    double x30 = 74.16;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 23;
    int sv1 = 0;
    int h2 = 41881;
    int sv2 = 0;
    int i;
    for (i = 0; i < 53; i++) {
        a22 = out29 - v73;
        hi51 = x30 - v73;
        x30 = out29 - a22;
        out29 = v73 - 17;
        if (x30 == 93) {
        x30 = a22;
        }
    }
}
int main() { test_func(); return 0; }

