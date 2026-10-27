int test_func(void) {
    int v0 = 27;
    int v1 = 77;
    int v2 = 99;
    int v3 = 98;
    int v4 = 42;
    int i;
    v2 = 99;
    if (v1 > v3) { v1 = v3; }
    v1 = v1 - v3;
    v2 = v2 + v3;
    return v0;
}
int main(void) { return test_func(); }
