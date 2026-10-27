int test_func(void) {
    int v0 = 49;
    int v1 = 91;
    int v2 = 14;
    int v3 = 10;
    int i;
    if (v0 > v2) { v0 = v2; }
    return v0;
}
int main(void) { return test_func(); }
