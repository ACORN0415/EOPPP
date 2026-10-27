// RTPG_4657: vars=4 stmts=6
void test_func(void) {
    int prev82 = 47017;
    int z36 = 60;
    int out32 = 46481;
    int tmp56 = -31;
    int i;
    for (i = 0; i < 88; i++) {
        tmp56 = z36 + out32;
        z36 = tmp56 - -19;
        tmp56 = out32 - prev82;
        prev82 = prev82 - 1;
        out32 = out32 + 1;
        prev82 = prev82 + 3;
    }
}
int main() { test_func(); return 0; }

