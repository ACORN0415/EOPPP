int test_func(void) {
    int v0 = 94;
    int v1 = 62;
    int v2 = 36;
    int i;
    v1 = v1 + v2;
    if (v1 > v1) { v1 = v1; }
    v0 = 61;
    return v0;
}
int main(void) { return test_func(); }
