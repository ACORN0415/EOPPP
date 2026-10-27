// RTPG_3661: vars=6 stmts=4
void test_func(void) {
    int hi70 = 15361;
    int z19 = 6;
    int hi4 = 29;
    int x7 = 6889;
    int a21 = 5;
    int cur27 = 40;
    int i;
    for (i = 0; i < 63; i++) {
        x7 = x7 + cur27;
        x7 = x7 - 1;
        hi4 = a21 - x7;
        z19 = x7 + hi70;
    }
}
int main() { test_func(); return 0; }

