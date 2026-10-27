// RTPG_9748: vars=4 stmts=2
void test_func(void) {
    int res25 = 0;
    int val83 = -40;
    int cur14 = -38;
    int res21 = 27;
    int i;
    for (i = 0; i < 23; i++) {
        val83 = res25 + val83;
        res25 = cur14 - 8;
        if (res21 == 73) {
        res21 = res21 - 2;
        }
    }
}
int main() { test_func(); return 0; }

