// RTPG_9951: vars=3 stmts=3
void test_func(void) {
    int tmp40 = 4;
    int y35 = 66;
    int cnt37 = 3;
    int i;
    for (i = 0; i < 57; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        y35 = cnt37 - y35;
        cnt37 = y35;
        cnt37 = tmp40;
        }
    }
}
int main() { test_func(); return 0; }

