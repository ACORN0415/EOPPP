int test_func(void) {
    int v0 = 1;
    int v1 = 82;
    int v2 = 31;
    int i;
    v1 = v1 - v0;
    if (v0 > v2) { v0 = v2; }
    v1 = v1 + v0;
    return v0;
}
int main(void) { return test_func(); }
