// RTPG_4315: vars=4 stmts=4
void test_func(void) {
    int sum32 = 40;
    int tmp97 = 5;
    int prev86 = 7;
    int prev52 = 33;
    int *ptr = &tmp97;
    int h0 = 64395;
    int sv0 = 0;
    int h1 = 39;
    int sv1 = 0;
    int i;
    for (i = 0; i < 38; i++) {
        sum32 = sum32 - 5;
        sum32 = tmp97;
        sum32 = sum32 ^ sum32;
        sum32 = prev86 / prev86;
        *ptr = *ptr + 1;
        if (sum32 > 43) {
        prev52 = sum32 - tmp97;
        }
    }
}
int main() { test_func(); return 0; }

