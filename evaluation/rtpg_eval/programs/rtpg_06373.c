int test_func(void) {
    int v0 = 45;
    int v1 = 98;
    int v2 = 49;
    int v3 = 0;
    int i;
    if (v0 > v1) { v0 = v1; }
    v2 = v2 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
