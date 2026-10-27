int test_func(void) {
    int v0 = 72;
    int v1 = 99;
    int v2 = 1;
    int v3 = 37;
    int v4 = 62;
    int v5 = 5;
    int i;
    v5 = 72;
    v4 = v4 + v2;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }
