int test_func(void) {
    int v0 = 96;
    int v1 = 90;
    int v2 = 2;
    int v3 = 37;
    int i;
    v2 = v2 + v0;
    if (v2 > v0) { v2 = v0; }
    return v0;
}
int main(void) { return test_func(); }
