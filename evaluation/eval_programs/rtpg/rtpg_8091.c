// RTPG_8091: vars=3 stmts=2
void test_func(void) {
    int x95 = 8;
    int cnt5 = 5;
    int val74 = 3;
    int i;
    for (i = 0; i < 81; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        x95 = x95 - 3;
        cnt5 = cnt5 - 2;
        }
    }
}
int main() { test_func(); return 0; }

