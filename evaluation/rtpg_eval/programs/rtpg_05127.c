int test_func(void) {
    int v0 = 19;
    int v1 = 99;
    int v2 = 42;
    int i;
    if (v1 > v2) { v1 = v2; }
    v0 = v0 / (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }
