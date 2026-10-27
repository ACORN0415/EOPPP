int test_func(void) {
    int v0 = 30;
    int v1 = 39;
    int v2 = 23;
    int i;
    v0 = v0 - v1;
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
