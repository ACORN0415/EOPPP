// RTPG_2972: vars=6 stmts=12
void test_func(void) {
    int dat8 = 36;
    int v65 = 6459;
    int tmp98 = 40003;
    int prev23 = 64894;
    int prev32 = 87;
    int a97 = 31;
    int i;
    for (i = 0; i < 11; i++) {
        prev32 = a97 + dat8;
        a97 = prev32;
        prev32 = dat8;
        a97 = a97 + 3;
        tmp98 = prev23 + tmp98;
        a97 = tmp98 + v65;
        tmp98 = tmp98 + 21;
        a97 = a97 - 1;
        prev32 = dat8;
        dat8 = a97 + 58246;
        prev23 = tmp98 + prev23;
        prev23 = v65 - dat8;
        if (a97 != 67) {
        a97 = dat8 - 7665;
        }
    }
}
int main() { test_func(); return 0; }

