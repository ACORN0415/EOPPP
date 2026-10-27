// RTPG_1483: vars=7 stmts=3
void test_func(void) {
    int y66 = 61;
    int v81 = -11;
    int val5 = 74;
    int dat23 = 1;
    int c36 = 39;
    int prev81 = -45;
    int res97 = -30;
    int *ptr = &prev81;
    int i;
    for (i = 0; i < 34; i++) {
        val5 = res97 - y66;
        res97 = v81 / val5;
        val5 = y66;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

