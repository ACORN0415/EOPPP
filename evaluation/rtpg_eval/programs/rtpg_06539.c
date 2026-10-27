int test_func(void) {
    int v0 = 18;
    int v1 = 2;
    int v2 = 49;
    int v3 = 29;
    int i;
    v0 = v0 * 9;
    v3 = 66;
    for (i = 0; i < 14; i++) {
        v3 = v3 + v1;
    }
    v0 = v0 & v1;
    return v0;
}
int main(void) { return test_func(); }
