// RTPG_6474: vars=3 stmts=6
int idx_arr[16];
void test_func(void) {
    double sum91 = 80.99;
    int out74 = 9;
    int acc14 = 39;
    int i;
    for (i = 0; i < 80; i++) {
        sum91 = xn[idx_arr[i]];
        acc14 = acc14;
        out74 = out74 + 5;
        acc14 = acc14 + out74;
        acc14 = sum91 + 6;
        out74 = out74 - 1457;
        acc14 = acc14 + 2;
    }
}
int main() { test_func(); return 0; }

