// RTPG_8063: vars=5 stmts=6
void test_func(void) {
    int v40 = 44227;
    int b27 = 2;
    int sum37 = 90;
    int y39 = 15;
    int hi10 = 2;
    int *ptr = &hi10;
    int i;
    for (i = 0; i < 15; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        y39 = v40;
        b27 = y39 - 70;
        y39 = hi10 + 56423;
        y39 = y39 - 5;
        b27 = v40 + sum37;
        sum37 = sum37 - 3;
        }
    }
}
int main() { test_func(); return 0; }

