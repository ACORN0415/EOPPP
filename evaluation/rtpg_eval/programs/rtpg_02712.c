int test_func(void) {
    int v0 = 77;
    int v1 = 99;
    int v2 = 90;
    int v3 = 58;
    int i;
    if (v1 > v0) { v1 = v0; }
    v3 = v3 - v1;
    return v0;
}
int main(void) { return test_func(); }
