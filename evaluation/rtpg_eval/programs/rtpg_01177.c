int test_func(void) {
    int v0 = 80;
    int v1 = 51;
    int v2 = 91;
    int v3 = 42;
    int v4 = 14;
    int i;
    v3 = v3 + v4;
    v1 = 30;
    for (i = 0; i < 17; i++) {
        v0 = v0 + v4;
    }
    return v0;
}
int main(void) { return test_func(); }
