// RTPG_1246: vars=4 stmts=8
void test_func(void) {
    int b66 = 1;
    int z77 = 4;
    int a31 = 60206;
    int val10 = 60;
    int *ptr = &z77;
    int i;
    for (i = 0; i < 50; i++) {
        a31 = a31 - val10;
        val10 = b66;
        val10 = z77 + val10;
        a31 = val10;
        z77 = z77 + 5;
        b66 = b66 + 5;
        z77 = b66 + a31;
        val10 = val10 + b66;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

