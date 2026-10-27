// RTPG_5545: vars=3 stmts=8
void test_func(void) {
    int hi91 = 0;
    int x95 = -31;
    int c87 = 0;
    int i;
    for (i = 0; i < 79; i++) {
        int j;
        for (j = 0; j < 20; j++) {
        x95 = hi91 - x95;
        x95 = x95 - 2;
        x95 = c87 - x95;
        hi91 = x95 - c87;
        hi91 = x95 + c87;
        hi91 = x95;
        x95 = x95 + c87;
        c87 = c87 - x95;
        }
    }
}
int main() { test_func(); return 0; }

