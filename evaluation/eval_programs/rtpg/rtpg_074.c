// RTPG_74: vars=3 stmts=2
void test_func(void) {
    float b81 = 17.08;
    int a55 = 61;
    int x23 = 64;
    int i;
    for (i = 0; i < 71; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        a55 = a55 - a55;
        b81 = a55 - b81;
        }
    }
}
int main() { test_func(); return 0; }

