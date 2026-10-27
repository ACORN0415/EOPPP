// RTPG_1954: vars=6 stmts=5
void test_func(void) {
    int hi29 = -30;
    int v11 = 10;
    int acc7 = 1;
    int c0 = 53780;
    int hi47 = 8;
    int v37 = 0;
    int h0 = -19;
    int sv0 = 0;
    int h1 = -8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 56; i++) {
        hi29 = v37;
        v11 = v11 + 4;
        acc7 = v37 - hi29;
        v37 = hi29 + c0;
        v11 = acc7 - hi29;
        if (v37 < -30) {
        v37 = hi29 - -6;
        }
    }
}
int main() { test_func(); return 0; }

