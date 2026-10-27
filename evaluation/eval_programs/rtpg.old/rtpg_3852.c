// RTPG_3852: vars=5 stmts=4
void test_func(void) {
    int tmp54 = 51542;
    int v55 = 5;
    int acc59 = 38;
    int z25 = 0;
    int b43 = 9;
    int i;
    for (i = 0; i < 59; i++) {
        b43 = v55 - b43;
        tmp54 = b43 - v55;
        v55 = b43 & z25;
        v55 = v55;
    }
}
int main() { test_func(); return 0; }

