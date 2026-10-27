// RTPG_1151: vars=3 stmts=8
void test_func(void) {
    int out34 = 29;
    int res21 = 30011;
    float c83 = 3.08;
    int i;
    for (i = 0; i < 24; i++) {
        res21 = out34 + c83;
        out34 = res21 + c83;
        out34 = out34 - 49805;
        c83 = out34 + c83;
        res21 = res21 + c83;
        res21 = res21 + -30;
        res21 = c83 - res21;
        out34 = out34;
        if (c83 > 68) {
        c83 = res21 - c83;
        }
    }
}
int main() { test_func(); return 0; }

