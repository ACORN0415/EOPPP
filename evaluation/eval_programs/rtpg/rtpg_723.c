// RTPG_723: vars=3 stmts=9
void test_func(void) {
    int hi80 = 42638;
    int y14 = 10024;
    int cur5 = 4;
    int *ptr = &y14;
    int h0 = 6081;
    int sv0 = 0;
    int h1 = 1219;
    int sv1 = 0;
    int i;
    for (i = 0; i < 43; i++) {
        int j;
        for (j = 0; j < 13; j++) {
        hi80 = cur5;
        cur5 = cur5;
        y14 = y14 - 5;
        hi80 = hi80 - 35644;
        hi80 = y14 + hi80;
        cur5 = y14 - cur5;
        hi80 = y14;
        hi80 = hi80 + 1;
        y14 = y14 + hi80;
        }
    }
}
int main() { test_func(); return 0; }

