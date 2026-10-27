// RTPG_358: vars=5 stmts=7
void test_func(void) {
    int dat87 = 7;
    int hi0 = 5;
    int b85 = 84;
    int tmp51 = 24225;
    int out71 = 25;
    int h0 = 21;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 29; i++) {
        b85 = b85 + 3;
        out71 = out71 + hi0;
        b85 = hi0 + tmp51;
        hi0 = hi0 + 1;
        tmp51 = hi0 + 57;
        b85 = b85 + 2;
        out71 = tmp51 + hi0;
    }
}
int main() { test_func(); return 0; }

