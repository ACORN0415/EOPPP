// RTPG_6574: vars=3 stmts=4
void test_func(void) {
    int y39 = 76;
    int sum98 = 39893;
    int hi62 = 43;
    int i;
    for (i = 0; i < 10; i++) {
        sum98 = y39 + 7;
        y39 = y39 - 2;
        sum98 = sum98 - 1;
        sum98 = sum98 - 2;
    }
}
int main() { test_func(); return 0; }

