// RTPG_8191: vars=6 stmts=4
void test_func(void) {
    int dat32 = 64103;
    int a92 = 44;
    int a50 = 23;
    int x64 = -16;
    int v97 = 54195;
    int b32 = 35542;
    int *ptr = &a92;
    int i;
    for (i = 0; i < 5; i++) {
        dat32 = a50 - dat32;
        dat32 = b32 - 39;
        a92 = a92 + 1;
        a50 = a50 - 4;
        *ptr = *ptr + 2;
        if (a92 >= 64) {
        v97 = a50;
        }
    }
done:
    b32 = 0;
}
int main() { test_func(); return 0; }

