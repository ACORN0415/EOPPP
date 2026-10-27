int test_func(void) {
    int v0 = 34;
    int v1 = 55;
    int v2 = 32;
    int i;
    if (v2 > v1) { v2 = v1; }
    v2 = v2 + v2;
    return v0;
}
int main(void) { return test_func(); }
