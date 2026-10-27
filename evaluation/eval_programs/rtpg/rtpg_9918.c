// RTPG_9918: vars=6 stmts=5
void test_func(void) {
    int y2 = 7;
    int tmp34 = 40039;
    int cur44 = 7;
    int acc74 = 9;
    int lo58 = 13;
    int prev4 = 628;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 14;
    int sv1 = 0;
    int i;
    for (i = 0; i < 17; i++) {
        cur44 = lo58 * 5;
        cur44 = prev4 * 10;
        prev4 = cur44 * 65356;
        prev4 = y2 - tmp34;
        tmp34 = acc74 * 4;
        if (prev4 != 72) {
        y2 = acc74 + lo58;
        }
    }
}
int main() { test_func(); return 0; }

