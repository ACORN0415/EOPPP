// RTPG_6717: vars=4 stmts=7
void test_func(void) {
    int dat60 = 82;
    int y14 = 64;
    int lo83 = 6;
    int b42 = 30;
    int *ptr = &dat60;
    int i;
    for (i = 0; i < 57; i++) {
        dat60 = dat60 + y14;
        b42 = lo83;
        lo83 = b42 + 69;
        dat60 = dat60 - lo83;
        lo83 = lo83 + 5;
        dat60 = dat60 + 2;
        y14 = b42 + dat60;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

