// RTPG_2481: vars=4 stmts=4
void test_func(void) {
    int y7 = 53;
    int sum55 = 24;
    int z62 = 4;
    int cur0 = 26950;
    int i;
    for (i = 0; i < 26; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        y7 = y7 - 3;
        z62 = z62 + y7;
        sum55 = sum55 + 2;
        sum55 = sum55 - 3;
        }
    }
}
int main() { test_func(); return 0; }

