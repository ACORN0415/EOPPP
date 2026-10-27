// RTPG_5269: vars=5 stmts=2
void test_func(void) {
    double lo1 = 66.69;
    int c80 = 9;
    int cur8 = 47;
    int acc19 = 8895;
    int prev21 = 60739;
    int h0 = 28022;
    int sv0 = 0;
    int h1 = -31;
    int sv1 = 0;
    int i;
    for (i = 0; i < 72; i++) {
        c80 = prev21;
        c80 = cur8;
    }
}
int main() { test_func(); return 0; }

