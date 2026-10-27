// RTPG_1512: vars=3 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int val49 = 29;
    int cur35 = 87;
    int b19 = 9;
    int i;
    for (i = 0; i < 10; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        val49 = b19 + cur35;
        cur35 = cur35 - 5;
        }
    }
}
int main() { test_func(); return 0; }

