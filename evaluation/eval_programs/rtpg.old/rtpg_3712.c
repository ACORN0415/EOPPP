// RTPG_3712: vars=5 stmts=8
void test_func(void) {
    int lo77 = 7;
    int lo74 = 10901;
    int dat82 = 4;
    int x63 = -12;
    int out55 = 62;
    int i;
    for (i = 0; i < 74; i++) {
        dat82 = dat82 + 4;
        lo77 = out55 + x63;
        out55 = dat82;
        lo77 = out55 + 4;
        out55 = out55 + lo74;
        out55 = out55 + 58;
        lo74 = lo74 - 5;
        lo74 = out55 + lo74;
    }
}
int main() { test_func(); return 0; }

