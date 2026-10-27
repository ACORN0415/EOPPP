int test_func(void) {
    int v0 = 42;
    int v1 = 48;
    int v2 = 91;
    int v3 = 80;
    int v4 = 24;
    int i;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v3;
    }
    v1 = v1 + v1;
    return v0;
}
int main(void) { return test_func(); }
