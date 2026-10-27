// RTPG_8523: vars=3 stmts=5
void test_func(void) {
    int x76 = 1;
    int cnt44 = 5;
    int dat50 = 12125;
    int h0 = 16;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 26; i++) {
        dat50 = x76 * 5;
        dat50 = cnt44 - x76;
        x76 = cnt44 + dat50;
        cnt44 = cnt44 - 2;
        dat50 = dat50 * 8;
        if (dat50 != -35) {
        dat50 = x76;
        }
    }
}
int main() { test_func(); return 0; }

