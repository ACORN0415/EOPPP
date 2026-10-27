// RTPG_8095: vars=5 stmts=4
void test_func(void) {
    int b10 = 89;
    int a19 = 14;
    int z51 = 2;
    int acc85 = 5160;
    int cur45 = 23758;
    int i;
    for (i = 0; i < 5; i++) {
        cur45 = cur45 - acc85;
        acc85 = acc85 - 4;
        acc85 = z51 - cur45;
        a19 = z51 - 41;
        if (acc85 >= 50) {
        b10 = cur45 + b10;
        }
    }
}
int main() { test_func(); return 0; }

