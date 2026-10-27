// RTPG_3621: vars=4 stmts=8
void test_func(void) {
    int tmp88 = -27;
    int val58 = 37;
    int val75 = 8219;
    int tmp90 = 17;
    int *ptr = &val58;
    int i;
    for (i = 0; i < 85; i++) {
        tmp88 = tmp90;
        tmp88 = tmp88 - 5;
        tmp88 = val58;
        val75 = tmp88;
        tmp90 = tmp88 - val75;
        tmp88 = val58 + tmp88;
        val58 = val58;
        val75 = val75 - tmp88;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

