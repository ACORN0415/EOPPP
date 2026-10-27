int test_func(void) {
    int v0 = 90;
    int v1 = 39;
    int v2 = 29;
    int i;
    if (v2 > v1) { v2 = v1; }
    return v0;
}
int main(void) { return test_func(); }
