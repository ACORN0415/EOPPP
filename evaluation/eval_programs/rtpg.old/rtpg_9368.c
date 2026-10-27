// RTPG_9368: vars=3 stmts=2
void test_func(void) {
    int out60 = 6;
    int z7 = 27;
    int prev6 = -12;
    int i;
    for (i = 0; i < 62; i++) {
        z7 = prev6;
        prev6 = z7 + -27;
        if (prev6 <= -13) {
        prev6 = z7 - 5;
        }
    }
}
int main() { test_func(); return 0; }

