// RTPG_2580: vars=4 stmts=7
void test_func(void) {
    double cnt25 = 56.34;
    int hi35 = 63320;
    int v41 = 30;
    int acc9 = 4;
    int i;
    for (i = 0; i < 43; i++) {
        hi35 = cnt25 + acc9;
        cnt25 = v41 + acc9;
        cnt25 = v41 + hi35;
        hi35 = acc9 + 6;
        acc9 = acc9 - v41;
        hi35 = hi35 - 2;
        v41 = v41 + cnt25;
    }
}
int main() { test_func(); return 0; }

