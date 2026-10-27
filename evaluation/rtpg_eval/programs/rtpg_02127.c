int test_func(void) {
    int v0 = 18;
    int v1 = 34;
    int v2 = 78;
    int i;
    if (v2 > v0) { v2 = v0; }
    return v0;
}
int main(void) { return test_func(); }
