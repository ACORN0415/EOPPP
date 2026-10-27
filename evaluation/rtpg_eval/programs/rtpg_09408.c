int test_func(void) {
    int v0 = 5;
    int v1 = 41;
    int v2 = 69;
    int v3 = 42;
    int v4 = 63;
    int v5 = 73;
    int i;
    if (v0 > v5) { v0 = v5; }
    return v0;
}
int main(void) { return test_func(); }
