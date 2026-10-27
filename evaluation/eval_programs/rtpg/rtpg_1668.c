// RTPG_1668: vars=6 stmts=4
void test_func(void) {
    int b25 = 7;
    int cnt12 = 24;
    int z32 = -37;
    int cnt8 = 50;
    int y24 = 20;
    int cur32 = 53;
    int i;
    for (i = 0; i < 15; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        y24 = cnt8 + z32;
        y24 = z32 + b25;
        cnt8 = cnt8 - 3;
        cnt12 = cur32 - 43;
        }
    }
}
int main() { test_func(); return 0; }

