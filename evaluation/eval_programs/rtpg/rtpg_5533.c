// RTPG_5533: vars=4 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    double z25 = 50.40;
    float a43 = 55.13;
    int v44 = 45;
    int dat75 = 41;
    int i;
    for (i = 0; i < 16; i++) {
        z25 = xn[i];
        a43 = a43 + z25;
        z25 = z25;
        z25 = z25 - 3;
        dat75 = z25;
        a43 = a43 + 5;
        z25 = v44 - a43;
        yo[i] = v44;
    }
}
int main() { test_func(); return 0; }

