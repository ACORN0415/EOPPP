// RTPG_3745: vars=4 stmts=5
void test_func(void) {
    int c15 = 1;
    float val18 = 21.40;
    int out59 = 17297;
    int y11 = 50;
    int h0 = 43;
    int sv0 = 0;
    int h1 = 28;
    int sv1 = 0;
    int i;
    for (i = 0; i < 96; i++) {
        val18 = val18 - 8;
        c15 = out59 * 192;
        out59 = y11;
        val18 = y11 + 89;
        y11 = out59;
    }
}
int main() { test_func(); return 0; }

