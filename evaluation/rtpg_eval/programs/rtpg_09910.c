int test_func(void) {
    int v0 = 71;
    int v1 = 58;
    int v2 = 29;
    int i;
    v1 = v1 + v2;
    if (v2 > v0) { v2 = v0; }
    v1 = v1 - v0;
    return v0;
}
int main(void) { return test_func(); }
