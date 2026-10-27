// RTPG_4821: vars=7 stmts=4
void test_func(void) {
    int b38 = 10;
    int val79 = 8;
    double c99 = 28.02;
    int z20 = -22;
    float prev2 = 23.21;
    float out16 = 0.85;
    int tmp4 = 81;
    int i;
    for (i = 0; i < 94; i++) {
        prev2 = prev2 - 3;
        val79 = prev2 | b38;
        z20 = b38 + 3;
        tmp4 = b38 + out16;
        if (tmp4 > 28) {
        tmp4 = b38 + tmp4;
        }
    }
}
int main() { test_func(); return 0; }

