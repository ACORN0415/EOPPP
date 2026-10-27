// RTPG_5470: vars=5 stmts=5
void test_func(void) {
    int x44 = 0;
    int out40 = 5;
    int out90 = 58186;
    int val12 = 50;
    int sum90 = 25035;
    int i;
    for (i = 0; i < 93; i++) {
        x44 = sum90 - x44;
        out40 = val12 - sum90;
        x44 = x44 + 2;
        x44 = x44 - out40;
        val12 = x44 + sum90;
    }
}
int main() { test_func(); return 0; }

