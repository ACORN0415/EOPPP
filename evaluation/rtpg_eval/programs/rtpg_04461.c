int test_func(void) {
    int v0 = 33;
    int v1 = 78;
    int v2 = 66;
    int v3 = 43;
    int v4 = 40;
    int i;
    v4 = v4 - v2;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v3;
    }
    v0 = 48;
    return v0;
}
int main(void) { return test_func(); }
