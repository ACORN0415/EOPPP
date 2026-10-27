// RTPG_4950: vars=3 stmts=6
void test_func(void) {
    int lo85 = 58307;
    int cur90 = 88;
    float res70 = 77.24;
    int h0 = 35135;
    int sv0 = 0;
    int h1 = 46133;
    int sv1 = 0;
    int i;
    for (i = 0; i < 6; i++) {
        lo85 = lo85 - cur90;
        cur90 = cur90;
        lo85 = lo85 + 47;
        cur90 = cur90 * 4;
        lo85 = res70 * 15;
        cur90 = res70 * 8;
    }
}
int main() { test_func(); return 0; }

