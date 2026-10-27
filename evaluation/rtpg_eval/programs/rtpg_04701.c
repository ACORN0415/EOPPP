int test_func(void) {
    int v0 = 71;
    int v1 = 66;
    int v2 = 23;
    int i;
    v2 = v2 + v1;
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
