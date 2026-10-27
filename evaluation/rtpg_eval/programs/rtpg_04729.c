int test_func(void) {
    int v0 = 33;
    int v1 = 2;
    int v2 = 4;
    int v3 = 34;
    int v4 = 98;
    int i;
    v3 = 42;
    if (v3 > v1) { v3 = v1; }
    v2 = v2 + v2;
    v1 = v1 - v0;
    return v0;
}
int main(void) { return test_func(); }
