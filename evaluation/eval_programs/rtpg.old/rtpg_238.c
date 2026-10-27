// RTPG_238: vars=4 stmts=7
void test_func(void) {
    int out74 = 55512;
    int res97 = 28540;
    int out63 = 34;
    int z90 = 29257;
    int i;
    for (i = 0; i < 63; i++) {
        res97 = out63 - res97;
        out63 = out63 & out74;
        z90 = z90 + 4;
        res97 = out74;
        out74 = z90 + res97;
        out63 = out74 | out63;
        res97 = res97 + 5;
    }
}
int main() { test_func(); return 0; }

