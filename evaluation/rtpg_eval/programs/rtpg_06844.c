int test_func(void) {
    int v0 = 29;
    int v1 = 8;
    int v2 = 46;
    int v3 = 77;
    int v4 = 11;
    int i;
    v4 = 3;
    if (v1 > v4) { v1 = v4; }
    return v0;
}
int main(void) { return test_func(); }
