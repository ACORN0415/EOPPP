// RTPG_9971: vars=4 stmts=2
void test_func(void) {
    int val83 = 0;
    int res21 = -40;
    int cur14 = -38;
    int res25 = 27;
    int i;
    for (i = 0; i < 23; i++) {
        res21 = val83 + res21;
        val83 = cur14 - 8;
        if (res25 == 73) {
        res25 = res25 - 2;
        }
    }
}
int main() { test_func(); return 0; }

