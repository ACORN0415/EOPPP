// RTPG_8463: vars=4 stmts=3
void test_func(void) {
    int acc86 = 64126;
    int a88 = 55;
    int prev71 = 45612;
    int y58 = -22;
    int i;
    for (i = 0; i < 11; i++) {
        int j;
        for (j = 0; j < 13; j++) {
        a88 = a88 - 4;
        acc86 = y58 + a88;
        acc86 = a88 - a88;
        }
    }
}
int main() { test_func(); return 0; }

