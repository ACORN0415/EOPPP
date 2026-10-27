int test_func(void) {
    int v0 = 43;
    int v1 = 62;
    int v2 = 30;
    int v3 = 99;
    int i;
    if (v1 > v0) { v1 = v0; }
    v2 = v2 + v1;
    return v0;
}
int main(void) { return test_func(); }
