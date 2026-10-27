int test_func(void) {
    int v0 = 40;
    int v1 = 43;
    int v2 = 24;
    int v3 = 9;
    int v4 = 91;
    int v5 = 94;
    int i;
    if (v4 > v0) { v4 = v0; }
    v0 = v0 + v3;
    return v0;
}
int main(void) { return test_func(); }
