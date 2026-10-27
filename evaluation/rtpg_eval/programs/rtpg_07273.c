int test_func(void) {
    int v0 = 42;
    int v1 = 7;
    int v2 = 14;
    int v3 = 1;
    int v4 = 6;
    int i;
    v3 = 40;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
