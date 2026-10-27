// RTPG_5520: vars=5 stmts=8
void test_func(void) {
    int hi50 = 8;
    int v22 = 39;
    int a43 = 5;
    int c19 = 6636;
    int b35 = 32;
    int i;
    for (i = 0; i < 39; i++) {
        a43 = a43 + 3;
        a43 = v22 - c19;
        a43 = b35 - 9;
        v22 = v22 - 74;
        a43 = v22;
        v22 = v22 + a43;
        c19 = v22;
        b35 = c19 - -45;
        if (a43 >= -20) {
        hi50 = hi50 - v22;
        }
    }
}
int main() { test_func(); return 0; }

