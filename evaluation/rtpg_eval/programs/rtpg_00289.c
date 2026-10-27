int test_func(void) {
    int v0 = 0;
    int v1 = 24;
    int v2 = 59;
    int v3 = 19;
    int v4 = 15;
    int v5 = 64;
    int v6 = 2;
    int v7 = 70;
    int i;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v4;
    }
    v4 = 7;
    v6 = v6 % (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
