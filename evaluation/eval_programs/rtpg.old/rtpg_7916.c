// RTPG_7916: vars=4 stmts=5
void test_func(void) {
    int prev55 = 87;
    int tmp16 = 3;
    int v22 = 4;
    int c83 = 95;
    int h0 = -3;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 83; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        tmp16 = tmp16 - 4;
        prev55 = v22;
        v22 = v22;
        tmp16 = prev55;
        v22 = v22 + c83;
        }
    }
}
int main() { test_func(); return 0; }

