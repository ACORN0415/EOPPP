// RTPG_4726: vars=5 stmts=3
void test_func(void) {
    int acc89 = 67;
    int x78 = -28;
    int res18 = 34;
    int v58 = -13;
    int prev48 = 66;
    int i;
    for (i = 0; i < 10; i++) {
        acc89 = acc89 - prev48;
        prev48 = prev48 - x78;
        v58 = v58;
    }
}
int main() { test_func(); return 0; }

