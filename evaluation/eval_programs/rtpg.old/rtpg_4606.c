// RTPG_4606: vars=4 stmts=6
void test_func(void) {
    int out32 = 47017;
    int z36 = 60;
    int prev82 = 46481;
    int tmp56 = -31;
    int i;
    for (i = 0; i < 88; i++) {
        tmp56 = z36 + prev82;
        z36 = tmp56 - -19;
        tmp56 = prev82 - out32;
        out32 = out32 - 1;
        prev82 = prev82 + 1;
        out32 = out32 + 3;
    }
}
int main() { test_func(); return 0; }

