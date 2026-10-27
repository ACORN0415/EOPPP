// RTPG_9989: vars=3 stmts=4
void test_func(void) {
    int b2 = 33;
    float x70 = 19.39;
    double val85 = 40.31;
    int i;
    for (i = 0; i < 55; i++) {
        int j;
        for (j = 0; j < 19; j++) {
        x70 = val85 - b2;
        x70 = b2;
        val85 = x70;
        val85 = x70 - val85;
        }
    }
}
int main() { test_func(); return 0; }

