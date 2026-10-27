// RTPG_2686: vars=4 stmts=4
void test_func(void) {
    int val11 = 19;
    int acc4 = -7;
    int sum76 = 39504;
    int y71 = 9;
    int *ptr = &sum76;
    int i;
    for (i = 0; i < 16; i++) {
        int j;
        for (j = 0; j < 8; j++) {
        sum76 = sum76 - 5;
        acc4 = y71 - sum76;
        sum76 = y71 + sum76;
        sum76 = sum76 - 4;
        }
    }
}
int main() { test_func(); return 0; }

