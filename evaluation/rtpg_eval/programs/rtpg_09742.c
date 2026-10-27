int test_func(void) {
    int v0 = 87;
    int v1 = 78;
    int v2 = 61;
    int i;
    if (v2 > v1) { v2 = v1; }
    v1 = 1;
    v1 = v1 + v2;
    v0 = v0 - v2;
    return v0;
}
int main(void) { return test_func(); }
