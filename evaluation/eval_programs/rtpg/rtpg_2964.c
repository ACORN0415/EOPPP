// RTPG_2964: vars=6 stmts=12
void test_func(void) {
    int tmp98 = 36;
    int prev23 = 6459;
    int dat8 = 40003;
    int prev32 = 64894;
    int a97 = 87;
    int v65 = 31;
    int i;
    for (i = 0; i < 11; i++) {
        a97 = v65 + tmp98;
        v65 = a97;
        a97 = tmp98;
        v65 = v65 + 3;
        dat8 = prev32 + dat8;
        v65 = dat8 + prev23;
        dat8 = dat8 + 21;
        v65 = v65 - 1;
        a97 = tmp98;
        tmp98 = v65 + 58246;
        prev32 = dat8 + prev32;
        prev32 = prev23 - tmp98;
        if (v65 != 67) {
        v65 = tmp98 - 7665;
        }
    }
}
int main() { test_func(); return 0; }

