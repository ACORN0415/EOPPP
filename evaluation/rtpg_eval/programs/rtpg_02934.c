int test_func(void) {
    int v0 = 5;
    int v1 = 18;
    int v2 = 46;
    int v3 = 77;
    int v4 = 67;
    int v5 = 14;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }
