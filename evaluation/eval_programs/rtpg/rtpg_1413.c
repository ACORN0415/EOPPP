// RTPG_1413: vars=3 stmts=8
void test_func(void) {
    int v13 = 88;
    int z42 = 51288;
    int res51 = 29327;
    int *ptr = &z42;
    int i;
    for (i = 0; i < 21; i++) {
        v13 = z42 + v13;
        v13 = res51;
        z42 = res51 - v13;
        z42 = z42 + 1;
        res51 = z42 + 0;
        z42 = z42 - 1;
        res51 = z42 % res51;
        z42 = z42 & res51;
        *ptr = *ptr + 5;
        if (z42 < 11) {
        res51 = res51 + 4;
        }
    }
}
int main() { test_func(); return 0; }

