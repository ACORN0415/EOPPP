// RTPG_6994: vars=3 stmts=5
void test_func(void) {
    int tmp57 = -5;
    int z47 = 63492;
    int a21 = 56;
    int h0 = 283;
    int sv0 = 0;
    int h1 = 56143;
    int sv1 = 0;
    int i;
    for (i = 0; i < 81; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        a21 = tmp57 + a21;
        z47 = a21;
        a21 = z47 + tmp57;
        a21 = a21;
        tmp57 = tmp57 + a21;
        }
    }
}
int main() { test_func(); return 0; }

