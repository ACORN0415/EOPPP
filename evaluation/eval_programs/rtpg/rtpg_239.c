// RTPG_239: vars=4 stmts=7
void test_func(void) {
    int out74 = 55512;
    int z90 = 28540;
    int out63 = 34;
    int res97 = 29257;
    int i;
    for (i = 0; i < 63; i++) {
        z90 = out63 - z90;
        out63 = out63 & out74;
        res97 = res97 + 4;
        z90 = out74;
        out74 = res97 + z90;
        out63 = out74 | out63;
        z90 = z90 + 5;
    }
}
int main() { test_func(); return 0; }

