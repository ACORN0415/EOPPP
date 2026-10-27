// RTPG_9311: vars=4 stmts=11
void test_func(void) {
    int prev15 = 92;
    int v45 = 72;
    int cur81 = 54;
    int a18 = 10;
    int i;
    for (i = 0; i < 54; i++) {
        cur81 = cur81 % prev15;
        v45 = v45 - 6279;
        a18 = v45;
        a18 = cur81 & v45;
        cur81 = v45 % a18;
        v45 = prev15 & v45;
        prev15 = v45 - cur81;
        prev15 = v45 & prev15;
        cur81 = cur81 - 19;
        prev15 = v45;
        prev15 = a18 - a18;
    }
}
int main() { test_func(); return 0; }

