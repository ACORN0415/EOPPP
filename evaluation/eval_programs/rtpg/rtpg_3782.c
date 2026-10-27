// RTPG_3782: vars=3 stmts=4
void test_func(void) {
    int c69 = -3;
    int a74 = 32666;
    int y73 = 34;
    int *ptr = &a74;
    int h0 = -35;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 63; i++) {
        a74 = a74 + 2;
        y73 = c69 * 3;
        a74 = a74;
        a74 = a74 - 3;
        *ptr = *ptr + 5;
        if (c69 <= 78) {
        a74 = a74 + c69;
        }
    }
}
int main() { test_func(); return 0; }

