// RTPG_4336: vars=3 stmts=6
void test_func(void) {
    int hi24 = 81;
    int cur44 = 26;
    int y65 = 27341;
    int *ptr = &cur44;
    int i;
    for (i = 0; i < 13; i++) {
        cur44 = hi24 - y65;
        y65 = y65 - hi24;
        hi24 = cur44 + 8;
        hi24 = cur44;
        hi24 = cur44 - 14;
        y65 = cur44 - 1;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

