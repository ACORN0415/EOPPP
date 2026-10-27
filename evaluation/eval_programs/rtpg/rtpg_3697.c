// RTPG_3697: vars=4 stmts=2
void test_func(void) {
    int cnt5 = -2;
    int lo41 = -23;
    int dat67 = -23;
    int v14 = 1;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 24; i++) {
        v14 = lo41;
        lo41 = cnt5 - 42;
    }
}
int main() { test_func(); return 0; }

