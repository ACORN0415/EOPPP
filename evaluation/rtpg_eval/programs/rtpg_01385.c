int test_func(void) {
    int v0 = 76;
    int v1 = 100;
    int v2 = 37;
    int v3 = 80;
    int i;
    if (v0 > v1) { v0 = v1; }
    v1 = v1 + v0;
    return v0;
}
int main(void) { return test_func(); }
