// RTPG_9496: vars=4 stmts=6
void test_func(void) {
    int hi75 = 44;
    int lo9 = 6;
    int tmp83 = 40;
    int cnt14 = 10;
    int i;
    for (i = 0; i < 49; i++) {
        cnt14 = lo9 - hi75;
        tmp83 = tmp83 + cnt14;
        cnt14 = cnt14 + 4;
        lo9 = cnt14 ^ lo9;
        tmp83 = lo9 % tmp83;
        lo9 = tmp83 + hi75;
        if (cnt14 > 72) {
        lo9 = lo9;
        }
    }
}
int main() { test_func(); return 0; }

