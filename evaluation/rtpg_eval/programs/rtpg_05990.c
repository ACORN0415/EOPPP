int test_func(void) {
    int v0 = 64;
    int v1 = 44;
    int v2 = 94;
    int v3 = 3;
    int i;
    if (v3 > v2) { v3 = v2; }
    v0 = v0 & v2;
    return v0;
}
int main(void) { return test_func(); }
