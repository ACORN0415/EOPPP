int test_func(void) {
    int v0 = 36;
    int v1 = 20;
    int v2 = 20;
    int i;
    if (v0 > v1) { v0 = v1; }
    v1 = v1 + v2;
    return v0;
}
int main(void) { return test_func(); }
