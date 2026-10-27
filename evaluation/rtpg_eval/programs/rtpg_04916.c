int test_func(void) {
    int v0 = 3;
    int v1 = 86;
    int v2 = 34;
    int v3 = 26;
    int v4 = 33;
    int i;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v1;
    }
    v2 = v2 + v4;
    v1 = 78;
    v0 = v0 - v1;
    return v0;
}
int main(void) { return test_func(); }
