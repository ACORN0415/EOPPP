// RTPG_3051: vars=5 stmts=4
void test_func(void) {
    int cur14 = 30303;
    int val19 = 47483;
    int hi2 = 7;
    int c2 = 35328;
    int cur24 = 8;
    int i;
    for (i = 0; i < 70; i++) {
        cur14 = hi2 + cur14;
        hi2 = cur24 & cur14;
        hi2 = cur14 / val19;
        cur24 = hi2 + 6;
        if (cur24 != 97) {
        cur24 = cur24 + 1;
        }
    }
done:
    val19 = 0;
}
int main() { test_func(); return 0; }

