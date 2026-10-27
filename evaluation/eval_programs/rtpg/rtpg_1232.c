// RTPG_1232: vars=4 stmts=8
void test_func(void) {
    int a31 = 1;
    int z77 = 4;
    int b66 = 60206;
    int val10 = 60;
    int *ptr = &z77;
    int i;
    for (i = 0; i < 50; i++) {
        b66 = b66 - val10;
        val10 = a31;
        val10 = z77 + val10;
        b66 = val10;
        z77 = z77 + 5;
        a31 = a31 + 5;
        z77 = a31 + b66;
        val10 = val10 + a31;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

