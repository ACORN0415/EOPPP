// RTPG_8344: vars=5 stmts=4
void test_func(void) {
    int x57 = 24377;
    int lo38 = 28;
    int val65 = 27;
    int v12 = 10;
    int lo15 = 8;
    int *ptr = &lo38;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 36; i++) {
        x57 = x57;
        lo38 = lo38 + 2;
        lo15 = lo38 * 1;
        x57 = lo15 * 29;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

