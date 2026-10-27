// RTPG_3042: vars=5 stmts=4
void test_func(void) {
    int c2 = 30303;
    int val19 = 47483;
    int hi2 = 7;
    int cur14 = 35328;
    int cur24 = 8;
    int i;
    for (i = 0; i < 70; i++) {
        c2 = hi2 + c2;
        hi2 = cur24 & c2;
        hi2 = c2 / hi2;
        cur24 = hi2 + 6;
        if (cur24 != 97) {
        cur24 = cur24 + 1;
        }
    }
}
int main() { test_func(); return 0; }

