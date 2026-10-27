// RTPG_5756: vars=4 stmts=3
void test_func(void) {
    int val16 = 28142;
    int b76 = 37;
    int cur86 = 10;
    int v58 = 37;
    int i;
    for (i = 0; i < 57; i++) {
        int j;
        for (j = 0; j < 10; j++) {
        val16 = cur86;
        v58 = cur86;
        cur86 = v58 - cur86;
        }
    }
}
int main() { test_func(); return 0; }

