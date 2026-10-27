// RTPG_8354: vars=3 stmts=4
void test_func(void) {
    float prev51 = 94.31;
    double cur37 = 61.72;
    int z32 = 81;
    int i;
    for (i = 0; i < 48; i++) {
        cur37 = cur37 - prev51;
        cur37 = cur37 / prev51;
        cur37 = cur37 + 5;
        z32 = cur37 + prev51;
    }
}
int main() { test_func(); return 0; }

