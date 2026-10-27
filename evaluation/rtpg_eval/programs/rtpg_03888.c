int test_func(void) {
    int v0 = 80;
    int v1 = 91;
    int v2 = 62;
    int i;
    v2 = v2 - v0;
    v1 = 94;
    if (v1 > v0) { v1 = v0; }
    return v0;
}
int main(void) { return test_func(); }
