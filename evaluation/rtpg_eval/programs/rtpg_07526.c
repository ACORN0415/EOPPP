int test_func(void) {
    int v0 = 13;
    int v1 = 9;
    int v2 = 36;
    int i;
    v0 = v0 * 9;
    if (v0 > v2) { v0 = v2; }
    v1 = 42;
    return v0;
}
int main(void) { return test_func(); }
