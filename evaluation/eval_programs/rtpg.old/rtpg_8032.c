// RTPG_8032: vars=3 stmts=10
void test_func(void) {
    int a40 = 33;
    int lo3 = 29;
    int out20 = 61508;
    int i;
    for (i = 0; i < 94; i++) {
        lo3 = out20;
        out20 = out20 - 1;
        out20 = out20 - 8;
        a40 = a40 - out20;
        a40 = lo3;
        a40 = lo3 + 45;
        out20 = lo3 + out20;
        a40 = out20 - a40;
        lo3 = a40 + 23;
        lo3 = lo3 + lo3;
        if (lo3 != 63) {
        out20 = out20 + 2;
        }
    }
}
int main() { test_func(); return 0; }

