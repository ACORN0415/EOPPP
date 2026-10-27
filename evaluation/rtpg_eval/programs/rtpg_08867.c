int test_func(void) {
    int v0 = 35;
    int v1 = 72;
    int v2 = 98;
    int i;
    v2 = v2 - v1;
    if (v1 > v0) { v1 = v0; }
    return v0;
}
int main(void) { return test_func(); }
