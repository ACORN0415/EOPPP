int test_func(void) {
    int v0 = 88;
    int v1 = 77;
    int v2 = 54;
    int v3 = 2;
    int i;
    v2 = 62;
    v1 = v1 - v2;
    v1 = v1 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
