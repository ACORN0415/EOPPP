// RTPG_8245: vars=3 stmts=4
void test_func(void) {
    float cur37 = 94.31;
    double z32 = 61.72;
    int prev51 = 81;
    int i;
    for (i = 0; i < 48; i++) {
        z32 = z32 - cur37;
        z32 = z32 / cur37;
        z32 = z32 + 5;
        prev51 = z32 + cur37;
    }
}
int main() { test_func(); return 0; }

