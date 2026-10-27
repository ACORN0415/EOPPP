// RTPG_3531: vars=5 stmts=2
void test_func(void) {
    int sum22 = 5;
    int x57 = 27395;
    int prev36 = 2;
    int a5 = 9;
    int cnt18 = 6;
    int i;
    for (i = 0; i < 76; i++) {
        int j;
        for (j = 0; j < 19; j++) {
        x57 = x57 + prev36;
        sum22 = prev36 + sum22;
        }
    }
}
int main() { test_func(); return 0; }

