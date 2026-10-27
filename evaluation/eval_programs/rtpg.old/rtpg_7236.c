// RTPG_7236: vars=4 stmts=4
void test_func(void) {
    int cur30 = 4;
    int acc0 = 34;
    int lo72 = 6;
    int z45 = -25;
    int *ptr = &lo72;
    int i;
    for (i = 0; i < 34; i++) {
        acc0 = acc0;
        lo72 = z45;
        lo72 = lo72 + cur30;
        z45 = z45 - lo72;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

