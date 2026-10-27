// RTPG_4765: vars=4 stmts=5
void test_func(void) {
    int x95 = 48163;
    int acc35 = 14;
    int lo98 = 64217;
    int a66 = 45;
    int *ptr = &lo98;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 399;
    int sv1 = 0;
    int i;
    for (i = 0; i < 56; i++) {
        x95 = a66 + 36;
        a66 = a66 + 2;
        a66 = a66 - 4;
        lo98 = x95 - x95;
        a66 = lo98 * 9;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

