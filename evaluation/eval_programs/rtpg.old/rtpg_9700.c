// RTPG_9700: vars=6 stmts=5
void test_func(void) {
    int cur44 = 7;
    int acc74 = 40039;
    int tmp34 = 7;
    int lo58 = 9;
    int y2 = 13;
    int prev4 = 628;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 14;
    int sv1 = 0;
    int i;
    for (i = 0; i < 17; i++) {
        tmp34 = y2 * 5;
        tmp34 = prev4 * 10;
        prev4 = tmp34 * 65356;
        prev4 = cur44 - acc74;
        acc74 = lo58 * 4;
        if (prev4 != 72) {
        cur44 = lo58 + y2;
        }
    }
}
int main() { test_func(); return 0; }

