// RTPG_9677: vars=8 stmts=5
void test_func(void) {
    int out24 = 9;
    int y23 = 9;
    int prev66 = 7;
    int v49 = 5066;
    int v69 = 34411;
    int lo22 = 25354;
    int y39 = 4;
    int prev68 = 99;
    int h0 = 50;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int h2 = 40387;
    int sv2 = 0;
    int i;
    for (i = 0; i < 20; i++) {
        prev66 = y23 | v49;
        v49 = prev68 * 18388;
        y39 = lo22 & out24;
        out24 = y23 | prev66;
        out24 = prev68 * 10;
    }
}
int main() { test_func(); return 0; }

