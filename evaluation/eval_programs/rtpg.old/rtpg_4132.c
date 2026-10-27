// RTPG_4132: vars=3 stmts=8
void test_func(void) {
    int v30 = -39;
    int cnt64 = 87;
    int val16 = 62;
    int h0 = 92;
    int sv0 = 0;
    int h1 = 28;
    int sv1 = 0;
    int i;
    for (i = 0; i < 68; i++) {
        int j;
        for (j = 0; j < 20; j++) {
        v30 = val16 + 14099;
        v30 = v30 + val16;
        val16 = v30 + cnt64;
        v30 = v30 - 3;
        cnt64 = val16 + cnt64;
        cnt64 = cnt64 - -33;
        v30 = val16 - 4;
        val16 = val16 - 5;
        }
    }
}
int main() { test_func(); return 0; }

