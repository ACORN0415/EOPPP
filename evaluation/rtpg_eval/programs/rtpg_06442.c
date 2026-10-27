int test_func(void) {
    int v0 = 33;
    int v1 = 32;
    int v2 = 6;
    int v3 = 54;
    int v4 = 30;
    int i;
    v3 = 80;
    v3 = v3 + v2;
    for (i = 0; i < 8; i++) {
        v4 = v4 + v4;
    }
    v1 = v1 / (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }
