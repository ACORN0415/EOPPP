// RTPG_8006: vars=4 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int sum56 = 5;
    int sum21 = 51195;
    int x60 = 33748;
    int sum67 = 61;
    int i;
    for (i = 0; i < 88; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        sum67 = sum56;
        sum67 = sum56 - 100;
        x60 = x60 + sum67;
        sum56 = sum56;
        sum56 = x60 + sum21;
        }
    }
}
int main() { test_func(); return 0; }

