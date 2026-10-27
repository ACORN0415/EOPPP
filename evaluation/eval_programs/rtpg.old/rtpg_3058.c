// RTPG_3058: vars=7 stmts=5
void test_func(void) {
    int acc96 = 0;
    int lo6 = 6;
    int hi43 = 23;
    int b51 = 71;
    int dat23 = 25;
    int tmp26 = 9436;
    int val55 = 5;
    int i;
    for (i = 0; i < 68; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        val55 = hi43 + acc96;
        acc96 = val55 + tmp26;
        tmp26 = dat23 + hi43;
        hi43 = dat23 - val55;
        val55 = tmp26;
        }
    }
}
int main() { test_func(); return 0; }

